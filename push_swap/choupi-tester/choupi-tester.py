# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    choupi-tester.py                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arangoni <arangoni@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 14:52:12 by arangoni          #+#    #+#              #
#    Updated: 2021/12/13 14:25:56 by arangoni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys,os
import time
import argparse
from matplotlib.cm import ScalarMappable
from matplotlib.colors import ListedColormap, Normalize
import numpy as np
import random
import subprocess
import matplotlib.pyplot as plt
from matplotlib.lines import Line2D
from matplotlib.collections import PatchCollection
from matplotlib.patches import Rectangle
from ctypes import *
# import requests

# response = requests.get("https://api.github.com/")
# print(response.json()["name"])


CEND      = '\33[0m'
CBOLD     = '\33[1m'
CITALIC   = '\33[3m'
CURL      = '\33[4m'
CBLINK    = '\33[5m'
CBLINK2   = '\33[6m'
CSELECTED = '\33[7m'

CBLACK  = '\33[30m'
CRED    = '\33[31m'
CGREEN  = '\33[32m'
CYELLOW = '\33[33m'
CBLUE   = '\33[34m'
CVIOLET = '\33[35m'
CBEIGE  = '\33[36m'
CWHITE  = '\33[37m'

CBLACKBG  = '\33[40m'
CREDBG    = '\33[41m'
CGREENBG  = '\33[42m'
CYELLOWBG = '\33[43m'
CBLUEBG   = '\33[44m'
CVIOLETBG = '\33[45m'
CBEIGEBG  = '\33[46m'
CWHITEBG  = '\33[47m'

CGREY    = '\33[90m'
CRED2    = '\33[91m'
CGREEN2  = '\33[92m'
CYELLOW2 = '\33[93m'
CBLUE2   = '\33[94m'
CVIOLET2 = '\33[95m'
CBEIGE2  = '\33[96m'
CWHITE2  = '\33[97m'

def avg(lst):
	return sum(lst) / len(lst)

def doArgs(argList):
	parser = argparse.ArgumentParser(description="push_swap tester")
	parser.add_argument('integers', metavar='START END | END', type=int, help="start and end range", nargs='*', default=[0, 50])
	parser.add_argument('-v', "--verbose", action="store", dest="verbose", type=int, help="verbose - possible values: 0, 1, 2 - default 1", default=1)
	parser.add_argument('-a', "--average", action="store", dest="avg", type=int, help="number of tests to average from - default 10", default=10)
	parser.add_argument('-c', "--check", action="store_true", dest="check", help="checks push_swap output with ./checker")
	parser.add_argument('-r', "--rectangle", action="store_true", dest="rectangle", help="adds rectangle to plot")
	parser.add_argument('-m', "--minimal", action="store_true", dest="minimal", help="only tests 0, 1, 3, 5, 100, 500 with 300 tests per value (default, can be changed wiht -a)")


	return parser.parse_args(argList)

def color_range(value, lst):
	if value < lst[0]:
		return CRED2 + str(value) + CBEIGE2
	if value < lst[1]:
		return CYELLOW2 + str(value) + CBEIGE2
	return CGREEN2 + str(value) + CBEIGE2

def write_log(l, prog):
	with open("choupi-tester.log", "w") as f:
		f.writelines(' '.join([str(x) for x in l]))
		f.write("\n\n")
		f.writelines(prog)


def main():
	print(CVIOLET + "   ___ _                  _   _____       _           \n  / __| |_  ___ _  _ _ __(_) |_   _|__ __| |_ ___ _ _ \n | (__| ' \/ _ \ || | '_ \ |   | |/ -_|_-<  _/ -_) '_|\n  \___|_||_\___/\_,_| .__/_|   |_|\___/__/\__\___|_|  \n                    |_|                               " + CEND)

	

	args = doArgs(sys.argv[1:])
	AVERAGE = args.avg
	if len(args.integers) == 1:
		args.integers.append(args.integers[0])
		args.integers[0] = 0
	if args.integers[0] > args.integers[1]:
		print("Invalid range")
		exit()
	START = args.integers[0]
	END = args.integers[1]

	
	
	startTime = float(time.time())

	tab = []
	if (args.minimal):
		if AVERAGE == 10:
			AVERAGE = 300
		print(\
	CBLUE2 + "Options:\n" + CBEIGE2 + "\
	Minimal version\n\
	Average: {}\n\
		".format(color_range(AVERAGE, [10, 100])))
		minimal = [1, 3, 5, 100, 500]
		if args.verbose:
			print(CURL + CBLUE2 + "{:^20}{:^20}{:^20}\n".format("Average", "Max" if 1 else '', "Size") + CEND)
		for index, i in enumerate(minimal):
			tab.append([])
			for j in range(AVERAGE):
				l = [x for x in range(i)]
				random.shuffle(l)
				if args.verbose == 2:
					print(l)
				prog = subprocess.check_output(["./push_swap"] + [str(x) for x in l], text=1)
				split_prog = prog.split('\n')
				if args.verbose == 2:
					#print(prog)
					print(split_prog)
				if (subprocess.check_output(["./checker"] + [str(x) for x in l], input=prog, text=True) == 'KO\n'):
					write_log(l, prog)
					print(CURL + CBLUE2 + ' ' * 60 + CEND + CBLUE2 + '\n\n' + CBLUE + "List: " + CBEIGE2 + "{}\n\n".format(' '.join([str(x) for x in l])) + CBLUE + "Output: " + CBEIGE2 + "{}\n".format(' '.join(split_prog)) + CBLUE + "\nList and output written in choupi-tester.log\n\n" + CRED + "KO" + CEND)
					exit()
				tab[index].append(len(split_prog) - 1)
			if args.verbose:
				print(CBEIGE2 + "{:^20.1f}{:^20}{:^20}".format(avg(tab[index]), max(tab[index]), i) + CEND)
	else:
		print(\
	CBLUE2 + "Options:\n" + CBEIGE2 + "\
	Average: {}\n\
	Range: {}\n\
	Results check: {}\n\
	Verbose: {}\n\
		".format(\
			color_range(args.avg, [10, 100]),\
			CVIOLET2 + str(START) + " - " + str(END) + CBEIGE2,\
			CGREEN + "Checking solutions" + CBEIGE2 if args.check else CRED2 + "Only checking size, could be KO" + CBEIGE2,\
			color_range(args.verbose, (1, 3))))
		if args.verbose:
			print(CURL + CBLUE2 + "{:^20}{:^20}{:^20}\n".format("Average", "Max" if 1 else '', "Size") + CEND)
		for i in range(START, END + 1):
			tab.append([])
			for j in range(0, AVERAGE):
				l = [x for x in range(0, i)]
				random.shuffle(l)
				if args.verbose == 2:
					print(l)
				prog = subprocess.check_output(["./push_swap"] + [str(x) for x in l], text=1)
				split_prog = prog.split('\n')
				if args.verbose == 2:
					#print(prog)
					print(split_prog)
				if args.check and (subprocess.check_output(["./checker"] + [str(x) for x in l], input=prog, text=True) == 'KO\n'):
					write_log(l, prog)
					print(CURL + CBLUE2 + ' ' * 60 + CEND + CBLUE2 + '\n\n' + CBLUE + "List: " + CBEIGE2 + "{}\n\n".format(' '.join([str(x) for x in l])) + CBLUE + "Output: " + CBEIGE2 + "{}\n".format(' '.join(split_prog)) + CBLUE + "\nList and output written in choupi-tester.log\n\n" + CRED + "KO" + CEND)
					exit()
				tab[i - START].append(len(split_prog) - 1)
			if args.verbose:
				print(CBEIGE2 + "{:^20.1f}{:^20}{:^20}".format(avg(tab[i - START]), max(tab[i - START]), i) + CEND)

	print("{}Finished {} tests in {:.1f} seconds".format(CURL + CBLUE2 + ' ' * 60 + CEND + CBLUE2 + '\n\n' if args.verbose else '', AVERAGE * (END - START + 1), time.time() - startTime))
	if END - START > 1 and not args.minimal:
		l = [i for i in range(START, END + 1)]
		fig, ax = plt.subplots()
		maxi_list = list(map(max, tab))
		mini_list = list(map(min, tab))
		ax.fill_between(l, list(map(min, tab)), maxi_list, alpha=.5, linewidth=2)
		ax.plot(l, list(map(avg, tab)))

		color_map = [5] * len(l)
		map_limit = ListedColormap(
			colors=['#F94144ff', '#F3722Cff', '#F9C74Fff', '#90BE6Dff', '#43AA8Bff', '#577590ff'],
			name='map_limit',
		)
		#print(map_limit.colors)
		for i, n in enumerate(maxi_list):
			#print(i + START, n)
			if i + START <= 3:
				if n <= 3:
					color_map[i] = 5
				else:
					color_map[i] = 0
			elif i + START <= 5:
				if n <= 12:
					color_map[i] = 5
				else:
					color_map[i] = 1
			elif i + START <= 100:
				if n <= 700:
					color_map[i] = 5
				elif n <= 900:
					color_map[i] = 4
				elif n <= 1100:
					color_map[i] = 3
				elif n <= 1300:
					color_map[i] = 2
				elif n <= 1500:
					color_map[i] = 1
				else:
					color_map[i] = 0
			elif i + START <= 500:
				if n <= 5500:
					color_map[i] = 5
				elif n <= 7000:
					color_map[i] = 4
				elif n <= 8500:
					color_map[i] = 3
				elif n <= 1000:
					color_map[i] = 2
				elif n <= 11500:
					color_map[i] = 1
				else:
					color_map[i] = 0
		

		color_map = [float(i) for i in color_map]
		#print(color_map)
		fig.colorbar(ScalarMappable(norm=Normalize(vmin=0, vmax=5), cmap=map_limit), )
		ax.scatter(l, maxi_list, c=color_map, cmap=map_limit, norm=Normalize(vmin=0, vmax=5), marker='v')

		ax.autoscale(False)
		if args.rectangle:
			limits = (((0, 0), 4, 3), ((4, 0), 2, 12), ((6, 0), 95, 1500), ((101, 0), 400, 11500))
			for limit in limits:
				ax.add_patch(
					Rectangle(limit[0], limit[1], limit[2], facecolor='#45ba7488')
				)
		ax.set(xlabel='Size (n)', ylabel='Operations ({} random tests / size)'.format(AVERAGE),
			title='# operations, range {} - {}'.format(START, END))#, xlim=(START - START / 100 - 1, END + START / 100 + 1), ylim=(min(mini_list) - min(mini_list) / 10 - 1, max(maxi_list) + min(mini_list) / 10 + 1))
		ax.grid()
		plt.show()
		fig.savefig("test.png")
	return

if __name__ == '__main__':
    main()