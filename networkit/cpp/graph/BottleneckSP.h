/*
 * BottleneckSP.h
 *
 *  Created on: Apr 14, 2017
 *      Author: Brennan, Tegan 
 */

#ifndef BOTTLENECKSP_H_
#define BOTTLENECKSP_H_

#include "Graph.h"
#include "SSSP.h"
#include "../auxiliary/PrioQueue.h"

namespace NetworKit {

/**
 * @ingroup graph
 * Bottleneck SSSP algorithm.
 */
class BottleneckSP : public SSSP {

public:

	/**
	 * Creates the Dijkstra class for @a G and the source node @a source.
	 *
	 * @param G The graph.
	 * @param source The source node.
	 * @param storePaths	store paths and number of paths?
	 */
	BottleneckSP(const Graph& G, node source, bool storePaths=true, bool storeStack=false, node target = none);

	/**
	 * Performs the Dijkstra SSSP algorithm on the graph given in the constructor.
	 */
	virtual void run();
};

} /* namespace NetworKit */
#endif /* BOTTLENECKSP_H_ */
