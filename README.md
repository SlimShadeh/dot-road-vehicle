# dot-road-vehicle
A c++ object oriented program containing a list, dot, road(list of dots), and a vehicle. Feel free to use the code as a starting point for a project.

A dot is a class containing x,y axis (which are 0 by default), rastojanje in dot is a distance between two dots.

Put is a road, it is a list of dots(made using list(lista) class), duzina in put is the total length of the road.

Vozilo is a vehicle and u can calculate the price of a travel by calling vehicle.cenaPrevoza(Put &p) with the formula:
120 + 0.1 *roadLength.
