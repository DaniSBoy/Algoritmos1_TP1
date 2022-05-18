#ifndef BIKE_H
#define BIKE_H

#include "headers/visitor.hpp"

class Bike{

	private:

		int _num_visitors;
		int _alloc_visitor;
		int *_nears_visitors;
		int *_rank_visitors;
		int _visitors_list_pointer;
	
	public:
		
		Bike();
		void delete_memory();
		int get_alloc_visitor();
		int compute_propose(Visitor *visitor);
		void set_nears_visitors(int * nears_visitors, int num_visitors);

};


#endif