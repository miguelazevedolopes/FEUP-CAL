# WASTE-APP - CAL PROJECT

## Group T4G8 elements

| Name                 | Number    | E-Mail                 |
| -------------------- | --------- | ---------------------- |
| Miguel Azevedo Lopes | 201704590 |up201704590@edu.fe.up.pt|
| Sofia Germer         | 201907461 |up201907461@edu.fe.up.pt|
| Rafael Camelo        | 201907729 |up201907729@edu.fe.up.pt|

## Problem Statement

Development of a waste management app, integrated in a smart network that
includes containers equipped with sensors that provide an updated status
on the capacity of the container (how much trash can it still take). The
containers are mapped. This feature allows users to not only know where
the nearest trash container is, but also if it can take more trash or not.
Additionally, this app introduces a brand new service, trash pick up directly
at home. This service is done by normal citizens who want to have an extra
source of revenue. Thus, to provide this service the app needs to have both
an interface for the regular users who want to have their trash collected and
for users who wish to collect that trash and take it to the nearest recycling
facility. In order to make this service as efficient as possible, the app provides
an optimized route for the trash collectors hence reducing travel costs as well
as the time spent on the road.

## Dependencies

GraphViewer, supplied by the teachers in order to visualize the graph (and everything else that is required to use it - check readme in the lib/GraphViewerCpp directory).

All the files in the 'data' and 'map' directories.

## Compile instructions

The program can be compiled using CLion, where it was developed, or cmake:

CLion: Import the project and execute

or 

cmake:	cmake -S ./ -B ./build && cd ./build && make 
		cd build
		./WASTE-APP
		
## Disclaimer

This repository, and every other repository (I own) named in the format FEUP-COURSENAME on GitHub correspond to the projects I developed during my time as a student at Faculty of Engineering of University of Porto.
