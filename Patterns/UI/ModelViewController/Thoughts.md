# Thoughts #

## coupling of window, controller and views ##

If the aim is to use the main window only as a container that knows nothing about the views it currently displays, then each view has to have a way of requesting the change of this view. 

* One way would be to let each view have a reference to its controller, which they can use to
make requests to change views. This way, each view can define requests, which are then handled by the controller. 
* Another way would be to let the controller listen to views, which means that each view has to define an interface for doing so, and the controller has to know for which request which view is needed - that's its purpose.

That means that the main window has to listen for requested changes of the current view.