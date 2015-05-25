# Thoughts #

## coupling of window, controller and views ##

If the aim is to use the main window only as a container that knows nothing about the views it currently displays, then each view has to have a way of requesting the change of this view. 

* One way would be to let each view have a reference to its controller, which they can use to
make requests to change views. This way, each view can define requests, which are then handled by the controller. 
* Another way would be to let the controller listen to views, which means that each view has to define an interface for doing so, and the controller has to know for which request which view is needed - that's its purpose.

That means that the main window has to listen for requested changes of the current view.

## Controllers and views ##

When a view has transitions to other views, the intention of switching to another view has to be signalled to the controller. This means that the controller has to know the interface of each component it serves not only in which model it uses but also which transitions it supports. This can be either done explicit by use of callbacks/signals or implicitly via string parsing as it happens in web applications.


## Views and models ##

Views and Models are coupled because a view retrieves its data directly from a model instance and it has to listen to the models state.