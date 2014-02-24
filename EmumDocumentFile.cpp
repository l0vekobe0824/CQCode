 void removeOldData()
 {
	 NSFileManager* fm = [NSFileManager defaultManager];
	 NSAarry* array = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES);
	 if(!array || 0 = [array count])
	 {
		return;
	 }
	 
	 NSString* cachePath = [array objectAtIndex:0];
	 if(!cachePath || 0 = [cachePath length])
	 {
		return;
	 }
	 
	 NSArray* fileList = [fm contentsOfDirectoryAtPath:cachePath error:nil];
	 
	 for (NSString* each in fileList) 
	 {
		if ([each isEqualToString:@"xxx"])
		{
			continue;
		}
		
			if ([each isEqualToString:@"C3"] || [each isEqualToString:@"data"] ||
			  || ([each rangeOfString:@".log"].location != NSNotFound && [each rangeOfString:@"C3_"].location != NSNotFound))
		{
			NSString* fliePath = [NSString stringWithFormat:@"%@/%@", cachePath, each];
			[fm removeItemAtPath:fliePath];
		}
	 }
 }
