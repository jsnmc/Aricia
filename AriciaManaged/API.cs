/*
 * Class Region
 * Region is a rectangular area on a screen, which is defined by
 * its upper left corner (x, y) as a distance relative to the upper left corner of the screen (0, 0) and
 * its dimension (w, h) as its width and height.
 * x, y, w, h are integer numbers counting a distance in pixels.
 * 
 * find(PS)
 * Parameters:	PS – a Pattern object or a string (path to an image file or just plain text)
 * Returns:	a Match object that contains the best match or fails if not found
 * 
 * findAll(PS)
 * Parameters:	PS – a Pattern object or a string (path to an image file or just plain text)
 * Returns:	one or more Match objects as an iterator object or fails if not found
 * 
 * wait([PS][, seconds])
 * Parameters:	
 * PS – a Pattern object or a string (path to an image file or just plain text)
 * seconds – a number, which can have a fraction, as maximum waiting time in seconds. The internal granularity is milliseconds. If not specified, the auto wait timeout value set by Region.setAutoWaitTimeout() is used. Use the constant FOREVER to wait for an infinite time.
 * Returns:a Match object that contains the best match or fails if not found
 * 
 * waitVanish(PS[, seconds])
 * Wait until the give pattern PS in the region vanishes.
 * Parameters:	
 * PS – a Pattern object or a string (path to an image file or just plain text)
 * seconds – a number, which can have a fraction, as maximum waiting time in seconds. The internal granularity is milliseconds. If not specified, the auto wait timeout value set by Region.setAutoWaitTimeout() is used. Use the constant FOREVER to wait for an infinite time.
 * Returns:	True if the pattern vanishes within the specified waiting time, or False if the pattern stays visible after the waiting time has elapsed.
 * 
 * exists(PS[, seconds])
 * Check whether the give pattern is visible on the screen.
 * Parameters:	
 * PS – a Pattern object or a string (path to an image file or just plain text)
 * seconds – a number, which can have a fraction, as maximum waiting time in seconds. The internal granularity is milliseconds. If not specified, the auto wait timeout value set by Region.setAutoWaitTimeout() is used. Use the constant FOREVER to wait for an infinite time.
 * Returns:	a Match object that contains the best match. None is returned, if nothing is found within the specified waiting time
 * Does exactly the same as Region.wait(), but no exception is raised in case of FindFailed. 
 * So it can be used to symplify scripting in case that you only want to know wether something is there or not to decide how to proceed in your workflow. 
 * 
 * Class Match: 
 *
 * 
 * 
 */