/**
 * @file GraphFactory.hpp
 * @brief Class for instantiating graph files.
 * @author Dominique LaSalle <dominique@domnet.org>
 * Copyright 2015
 * @version 1
 * @date 2016-02-05
 */




#ifndef WILDRIVER_GRAPHFACTORY_HPP
#define WILDRIVER_GRAPHFACTORY_HPP



#include <memory>

#include "IGraphFile.hpp"



namespace WildRiver
{


class GraphFactory
{
  public:
    /**
     * @brief Allocate a new graph file subclass, based on the file extension.
     * The returned pointer must be delete'd by the caller.
     *
     * @param fname The filename/path.
     *
     * @return A pointer to the new graph file instantion.
     */
    static std::shared_ptr<IGraphFile> OpenFile(
        std::string const & name);


};




}




#endif
