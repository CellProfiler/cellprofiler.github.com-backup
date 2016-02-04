CellProfiler Pipeline: http://www.cellprofiler.org
Version:1
SVNRevision:9722

LoadImages:[module_num:1|svn_version:\'9660\'|variable_revision_number:5|show_window:True|notes:\x5B\x5D]
    File type to be loaded:individual images
    File selection method:Text-Exact match
    Number of images in each group?:3
    Type the text that the excluded images have in common:Do not use
    Analyze all subfolders within the selected folder?:No
    Input image file location:Default Input Folder\x7C.
    Check image sets for missing or duplicate files?:No
    Group images by metadata?:No
    Exclude certain files?:No
    Specify metadata fields to group by:
    Text that these images have in common (case-sensitive):D.TIF
    Name this loaded image:OrigBlue
    Position of this image in each group:D.TIF
    Extract metadata from where?:None
    Regular expression that finds metadata in the file name:None
    Type the regular expression that finds metadata in the subfolder path:None
    Text that these images have in common (case-sensitive):F.T
    Name this loaded image:OrigGreen
    Position of this image in each group:F.T
    Extract metadata from where?:None
    Regular expression that finds metadata in the file name:None
    Type the regular expression that finds metadata in the subfolder path:None
    Text that these images have in common (case-sensitive):R.T
    Name this loaded image:OrigRed
    Position of this image in each group:R.T
    Extract metadata from where?:None
    Regular expression that finds metadata in the file name:None
    Type the regular expression that finds metadata in the subfolder path:None

Crop:[module_num:2|svn_version:\'9633\'|variable_revision_number:2|show_window:True|notes:\x5B\x5D]
    Select the input image:OrigBlue
    Name the output image:CropBlue
    Select the cropping shape:Rectangle
    Select the cropping method:Coordinates
    Apply which cycle\'s cropping pattern?:First
    Left and right rectangle positions:1,100
    Top and bottom rectangle positions:1,100
    Coordinates of ellipse center:500,500
    Ellipse radius, X direction:400
    Ellipse radius, Y direction:200
    Use Plate Fix?:No
    Remove empty rows and columns?:Edges
    Select the masking image:None
    Select the image with a cropping mask:None
    Select the objects:None

Crop:[module_num:3|svn_version:\'9633\'|variable_revision_number:2|show_window:True|notes:\x5B\x5D]
    Select the input image:OrigGreen
    Name the output image:CropGreen
    Select the cropping shape:Rectangle
    Select the cropping method:Coordinates
    Apply which cycle\'s cropping pattern?:First
    Left and right rectangle positions:1,100
    Top and bottom rectangle positions:1,100
    Coordinates of ellipse center:500,500
    Ellipse radius, X direction:400
    Ellipse radius, Y direction:200
    Use Plate Fix?:No
    Remove empty rows and columns?:Edges
    Select the masking image:None
    Select the image with a cropping mask:None
    Select the objects:None

Crop:[module_num:4|svn_version:\'9633\'|variable_revision_number:2|show_window:True|notes:\x5B\x5D]
    Select the input image:OrigRed
    Name the output image:CropRed
    Select the cropping shape:Rectangle
    Select the cropping method:Coordinates
    Apply which cycle\'s cropping pattern?:First
    Left and right rectangle positions:1,100
    Top and bottom rectangle positions:1,100
    Coordinates of ellipse center:500,500
    Ellipse radius, X direction:400
    Ellipse radius, Y direction:200
    Use Plate Fix?:No
    Remove empty rows and columns?:All
    Select the masking image:None
    Select the image with a cropping mask:None
    Select the objects:None

IdentifyPrimaryObjects:[module_num:5|svn_version:\'9633\'|variable_revision_number:6|show_window:True|notes:\x5B\x5D]
    Select the input image:CropBlue
    Name the primary objects to be identified:Nuclei
    Typical diameter of objects, in pixel units (Min,Max):10,40
    Discard objects outside the diameter range?:Yes
    Try to merge too small objects with nearby larger objects?:No
    Discard objects touching the border of the image?:Yes
    Select the thresholding method:MoG Global
    Threshold correction factor:1.6
    Lower and upper bounds on threshold:0,1
    Approximate fraction of image covered by objects?:0.2
    Method to distinguish clumped objects:Intensity
    Method to draw dividing lines between clumped objects:Intensity
    Size of smoothing filter:10
    Suppress local maxima that are closer than this minimum allowed distance:5
    Speed up by using lower-resolution image to find local maxima?:Yes
    Name the outline image:None
    Fill holes in identified objects?:Yes
    Automatically calculate size of smoothing filter?:Yes
    Automatically calculate minimum allowed distance between local maxima?:Yes
    Manual threshold:0.0
    Select binary image:MoG Global
    Retain outlines of the identified objects?:No
    Automatically calculate the threshold using the Otsu method?:Yes
    Enter Laplacian of Gaussian threshold:.5
    Two-class or three-class thresholding?:Two classes
    Minimize the weighted variance or the entropy?:Weighted variance
    Assign pixels in the middle intensity class to the foreground or the background?:Foreground
    Automatically calculate the size of objects for the Laplacian of Gaussian filter?:Yes
    Enter LoG filter diameter:5
    Handling of objects if excessive number of objects identified:Continue
    Maximum number of objects:500

IdentifySecondaryObjects:[module_num:6|svn_version:\'9633\'|variable_revision_number:4|show_window:True|notes:\x5B\x5D]
    Select the input objects:Nuclei
    Name the objects to be identified:Cells
    Select the method to identify the secondary objects:Propagation
    Select the input image:CropGreen
    Select the thresholding method:Otsu Global
    Threshold correction factor:1
    Lower and upper bounds on threshold:0,1
    Approximate fraction of image covered by objects?:10%
    Number of pixels by which to expand the primary objects:10
    Regularization factor:0.05
    Name the outline image:Do not use
    Manual threshold:0
    Select binary image:Do not use
    Retain outlines of the identified secondary objects?:No
    Two-class or three-class thresholding?:Two classes
    Minimize the weighted variance or the entropy?:Weighted variance
    Assign pixels in the middle intensity class to the foreground or the background?:Foreground
    Discard secondary objects that touch the edge of the image?:No
    Discard the associated primary objects?:No
    Name the new primary objects:FilteredNuclei
    Retain outlines of the new primary objects?:No
    Name the new primary object outlines:FilteredNucleiOutlines

IdentifyTertiaryObjects:[module_num:7|svn_version:\'9633\'|variable_revision_number:1|show_window:True|notes:\x5B\x5D]
    Select the larger identified objects:Cells
    Select the smaller identified objects:Nuclei
    Name the tertiary objects to be identified:Cytoplasm
    Name the outline image:Do not use
    Retain outlines of the tertiary objects?:No

IdentifyPrimaryObjects:[module_num:8|svn_version:\'9633\'|variable_revision_number:6|show_window:True|notes:\x5B\x5D]
    Select the input image:OrigBlue
    Name the primary objects to be identified:NucStain
    Typical diameter of objects, in pixel units (Min,Max):10,40
    Discard objects outside the diameter range?:No
    Try to merge too small objects with nearby larger objects?:No
    Discard objects touching the border of the image?:No
    Select the thresholding method:Otsu Global
    Threshold correction factor:1.0
    Lower and upper bounds on threshold:0.000000,1.000000
    Approximate fraction of image covered by objects?:0.01
    Method to distinguish clumped objects:None
    Method to draw dividing lines between clumped objects:Intensity
    Size of smoothing filter:10
    Suppress local maxima that are closer than this minimum allowed distance:7
    Speed up by using lower-resolution image to find local maxima?:Yes
    Name the outline image:Do not use
    Fill holes in identified objects?:No
    Automatically calculate size of smoothing filter?:Yes
    Automatically calculate minimum allowed distance between local maxima?:Yes
    Manual threshold:0.0
    Select binary image:None
    Retain outlines of the identified objects?:No
    Automatically calculate the threshold using the Otsu method?:Yes
    Enter Laplacian of Gaussian threshold:0.5
    Two-class or three-class thresholding?:Two classes
    Minimize the weighted variance or the entropy?:Weighted variance
    Assign pixels in the middle intensity class to the foreground or the background?:Foreground
    Automatically calculate the size of objects for the Laplacian of Gaussian filter?:Yes
    Enter LoG filter diameter:5
    Handling of objects if excessive number of objects identified:Continue
    Maximum number of objects:500

MeasureObjectSizeShape:[module_num:9|svn_version:\'1\'|variable_revision_number:1|show_window:True|notes:\x5B\x5D]
    Select objects to measure:Cells
    Select objects to measure:Nuclei
    Select objects to measure:Cytoplasm
    Select objects to measure:NucStain
    Calculate the Zernike features?:No

MeasureObjectIntensity:[module_num:10|svn_version:\'9660\'|variable_revision_number:3|show_window:True|notes:\x5B\x5D]
    Hidden:1
    Select an image to measure:CropBlue
    Select objects to measure:Nuclei
    Select objects to measure:Cells
    Select objects to measure:Cytoplasm

MeasureObjectNeighbors:[module_num:11|svn_version:\'Unknown\'|variable_revision_number:1|show_window:True|notes:\x5B\x5D]
    Select objects to measure:Nuclei
    Method to determine neighbors:Within a specified distance
    Neighbor distance:4
    Retain the image of objects colored by numbers of neighbors for use later in the pipeline (for example, in SaveImages)?:No
    Name the output image:Do not use
    Select colormap:Default
    Retain the image of objects colored by percent of touching pixels for use later in the pipeline (for example, in SaveImages)?:No
    Name the output image:PercentTouching
    Select a colormap:Default

MeasureTexture:[module_num:12|svn_version:\'1\'|variable_revision_number:1|show_window:True|notes:\x5B\x5D]
    Hidden:1
    Hidden:3
    Hidden:1
    Select an image to measure:CropBlue
    Select objects to measure:Nuclei
    Select objects to measure:Cells
    Select objects to measure:Cytoplasm
    Texture scale to measure:3
    Number of angles to compute for Gabor:4

MeasureCorrelation:[module_num:13|svn_version:\'9633\'|variable_revision_number:2|show_window:True|notes:\x5B\x5D]
    Hidden:2
    Hidden:1
    Select an image to measure:CropBlue
    Select an image to measure:CropGreen
    Select where to measure correlation:Both
    Select an object to measure:Nuclei

MeasureImageGranularity:[module_num:14|svn_version:\'9638\'|variable_revision_number:2|show_window:True|notes:\x5B\x5D]
    Select an image to measure:OrigBlue
    Subsampling factor for granularity measurements:0.25
    Subsampling factor for background reduction:0.25
    Radius of structuring element:10
    Range of the granular spectrum:16

CalculateMath:[module_num:15|svn_version:\'9633\'|variable_revision_number:1|show_window:True|notes:\x5B\x5D]
    Name the output measurement:Ratio1
    Select the operation:Divide
    Select the numerator measurement type:Object
    Select the numerator objects:Nuclei
    Select the numerator measurement:Intensity_MeanIntensity_CropBlue
    Multiply the above operand by:1.0
    Raise the power of above operand by:1.0
    Select the denominator measurement type:Object
    Select the denominator objects:Nuclei
    Select the denominator measurement:AreaShape_Area
    Multiply the above operand by:1.0
    Raise the power of above operand by:1.0
    Take log10 of result?:No
    Multiply the result by:1.0
    Raise the power of result by:1.0

MeasureImageIntensity:[module_num:16|svn_version:\'9633\'|variable_revision_number:2|show_window:True|notes:\x5B\x5D]
    Select the image to measure:OrigBlue
    Measure the intensity only from areas enclosed by objects?:No
    Select the input objects:None

MeasureImageQuality:[module_num:17|svn_version:\'9633\'|variable_revision_number:3|show_window:True|notes:\x5B\x5D]
    Select an image to measure:OrigBlue
    Check for blur?:Yes
    Window size for blur measurements:80
    Check for saturation?:Yes
    Calculate threshold?:Yes
    Select a thresholding method:Otsu Global
    Typical fraction of the image covered by objects:.10
    Calculate quartiles and sum of radial power spectrum?:Yes
    Two-class or three-class thresholding?:Two classes
    Minimize the weighted variance or the entropy?:Weighted variance
    Assign pixels in the middle intensity class to the foreground or the background?:Foreground

ClassifyObjects:[module_num:18|svn_version:\'9633\'|variable_revision_number:2|show_window:True|notes:\x5B\x5D]
    Should each classification decision be based on a single measurement or on the combination of a pair of measurements?:Single measurement
    Hidden:1
    Select the object to be classified:Nuclei
    Select the measurement to classify by:AreaShape_Solidity
    Select bin spacing:Evenly spaced bins
    Number of bins:1
    Lower threshold:0.0
    Use a bin for objects below the threshold?:Yes
    Upper threshold:100.0
    Use a bin for objects above the threshold?:Yes
    Enter the custom thresholds separating the values between bins:0,1
    Give each bin a name?:No
    Enter the bin names separated by commas:Do not use
    Retain an image of the objects classified by their measurements, for use later in the pipeline (for example, in SaveImages)?:No
    Name the output image:Do not use
    Enter the object name:Nuclei
    Select the first measurement:None
    Method to select the cutoff:Mean
    Enter the cutoff value:.5
    Select the second measurement:None
    Method to select the cutoff:Mean
    Enter the cutoff value:.5
    Use custom names for the bins?:No
    Enter the low-low bin name:LowLow
    Enter the low-high bin name:HighLow
    Enter the high-low bin name:LowHigh
    Enter the high-high bin name:HighHigh
    Retain an image of the objects classified by their measurements, for use later in the pipeline (for example, in SaveImages)?:No
    Enter the image name:ClassifiedNuclei

GrayToColor:[module_num:19|svn_version:\'9633\'|variable_revision_number:2|show_window:True|notes:\x5B\x5D]
    Select a color scheme:RGB
    Select the input image to be colored red:CropRed
    Select the input image to be colored green:CropGreen
    Select the input image to be colored blue:CropBlue
    Name the output image:RGBImage
    Relative weight for the red image:1
    Relative weight for the green image:1
    Relative weight for the blue image:1
    Select the input image to be colored cyan:None
    Select the input image to be colored magenta:None
    Select the input image to be colored yellow:None
    Select the input image that determines brightness:None
    Relative weight for the cyan image:1
    Relative weight for the magenta image:1
    Relative weight for the yellow image:1
    Relative weight for the brightness image:1
    Select the input image to add to the stacked image:None

SaveImages:[module_num:20|svn_version:\'9679\'|variable_revision_number:5|show_window:True|notes:\x5B\x5D]
    Select the type of image to save:Image
    Select the image to save:RGBImage
    Select the module display window to save:RGBImage
    Select method for constructing file names:From image filename
    Select image name for file prefix:OrigBlue
    Enter single file name:OrigBlue
    Do you want to add a suffix to the image file name?:Yes
    Text to append to the image name:RGB
    Select file format to use:tif
    Output file location:Default Output Folder\x7CNone
    Image bit depth:8
    Overwrite existing files without warning?:No
    Select how often to save:Every cycle
    Rescale the images? :No
    Select colormap:gray
    Update file names within CellProfiler?:No
    Create subfolders in the output folder?:No

ExportToSpreadsheet:[module_num:21|svn_version:\'9660\'|variable_revision_number:6|show_window:True|notes:\x5B\x5D]
    Select or enter the column delimiter:Comma (",")
    Prepend the output file name to the data file names?:Yes
    Add image metadata columns to your object data file?:No
    Limit output to a size that is allowed in Excel?:No
    Select the columns of measurements to export?:No
    Calculate the per-image mean values for object measurements?:Yes
    Calculate the per-image median values for object measurements?:No
    Calculate the per-image standard deviation values for object measurements?:No
    Output file location:Default Output Folder\x7C.
    Export all measurements?:No
    Press button to select measurements to export:None\x7CNone
    Data to export:Image
    Combine these object measurements with those of the previous object?:No
    File name:Image.csv
    Use the object name for the file name?:No
    Data to export:Nuclei
    Combine these object measurements with those of the previous object?:No
    File name:Nuclei.csv
    Use the object name for the file name?:No
    Data to export:Cells
    Combine these object measurements with those of the previous object?:No
    File name:Cells.csv
    Use the object name for the file name?:No
    Data to export:Cytoplasm
    Combine these object measurements with those of the previous object?:No
    File name:Cytoplasm.csv
    Use the object name for the file name?:No
