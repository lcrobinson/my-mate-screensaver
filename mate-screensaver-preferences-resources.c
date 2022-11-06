#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.screensaver"), aligned (8)))
#else
# define SECTION
#endif

#ifdef _MSC_VER
static const SECTION union { const guint8 data[2660]; const double alignment; void * const ptr;}  screensaver_resource_data = { {
  0107, 0126, 0141, 0162, 0151, 0141, 0156, 0164, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 
  0030, 0000, 0000, 0000, 0254, 0000, 0000, 0000, 0000, 0000, 0000, 0050, 0005, 0000, 0000, 0000, 
  0000, 0000, 0000, 0000, 0003, 0000, 0000, 0000, 0004, 0000, 0000, 0000, 0004, 0000, 0000, 0000, 
  0004, 0000, 0000, 0000, 0113, 0120, 0220, 0013, 0002, 0000, 0000, 0000, 0254, 0000, 0000, 0000, 
  0004, 0000, 0114, 0000, 0260, 0000, 0000, 0000, 0264, 0000, 0000, 0000, 0201, 0321, 0040, 0031, 
  0000, 0000, 0000, 0000, 0264, 0000, 0000, 0000, 0005, 0000, 0114, 0000, 0274, 0000, 0000, 0000, 
  0300, 0000, 0000, 0000, 0324, 0265, 0002, 0000, 0377, 0377, 0377, 0377, 0300, 0000, 0000, 0000, 
  0001, 0000, 0114, 0000, 0304, 0000, 0000, 0000, 0310, 0000, 0000, 0000, 0361, 0155, 0236, 0015, 
  0001, 0000, 0000, 0000, 0310, 0000, 0000, 0000, 0014, 0000, 0114, 0000, 0324, 0000, 0000, 0000, 
  0330, 0000, 0000, 0000, 0317, 0360, 0335, 0020, 0003, 0000, 0000, 0000, 0330, 0000, 0000, 0000, 
  0016, 0000, 0166, 0000, 0350, 0000, 0000, 0000, 0143, 0012, 0000, 0000, 0157, 0162, 0147, 0057, 
  0001, 0000, 0000, 0000, 0155, 0141, 0164, 0145, 0057, 0000, 0000, 0000, 0003, 0000, 0000, 0000, 
  0057, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0163, 0143, 0162, 0145, 0145, 0156, 0163, 0141, 
  0166, 0145, 0162, 0057, 0004, 0000, 0000, 0000, 0160, 0162, 0145, 0146, 0145, 0162, 0145, 0156, 
  0143, 0145, 0163, 0056, 0165, 0151, 0000, 0000, 0105, 0170, 0000, 0000, 0001, 0000, 0000, 0000, 
  0170, 0332, 0355, 0035, 0333, 0162, 0333, 0066, 0366, 0275, 0137, 0301, 0345, 0103, 0137, 0166, 
  0144, 0131, 0262, 0235, 0355, 0246, 0266, 0072, 0111, 0263, 0311, 0164, 0246, 0235, 0351, 0154, 
  0322, 0315, 0043, 0007, 0042, 0217, 0110, 0304, 0020, 0301, 0005, 0100, 0311, 0372, 0373, 0002, 
  0244, 0054, 0223, 0026, 0157, 0000, 0111, 0213, 0162, 0370, 0220, 0211, 0045, 0342, 0000, 0007, 
  0347, 0176, 0001, 0250, 0333, 0137, 0036, 0326, 0304, 0332, 0000, 0343, 0230, 0206, 0167, 0366, 
  0354, 0342, 0322, 0266, 0040, 0164, 0251, 0207, 0103, 0377, 0316, 0376, 0353, 0313, 0307, 0311, 
  0117, 0366, 0057, 0213, 0037, 0156, 0377, 0061, 0231, 0130, 0237, 0040, 0004, 0206, 0004, 0170, 
  0326, 0026, 0213, 0300, 0362, 0011, 0362, 0300, 0272, 0272, 0230, 0317, 0057, 0346, 0326, 0144, 
  0042, 0007, 0341, 0120, 0000, 0133, 0041, 0027, 0026, 0077, 0130, 0326, 0055, 0203, 0377, 0307, 
  0230, 0001, 0267, 0010, 0136, 0336, 0331, 0276, 0270, 0377, 0247, 0375, 0264, 0320, 0325, 0305, 
  0354, 0332, 0236, 0046, 0343, 0324, 0324, 0007, 0310, 0011, 0301, 0056, 0204, 0034, 0046, 0142, 
  0027, 0201, 0345, 0107, 0144, 0223, 0316, 0175, 0064, 0056, 0104, 0153, 0260, 0326, 0022, 0233, 
  0011, 0167, 0031, 0110, 0020, 0044, 0347, 0056, 0036, 0352, 0201, 0034, 0202, 0043, 0041, 0027, 
  0266, 0262, 0203, 0043, 0006, 0053, 0140, 0162, 0267, 0022, 0307, 0102, 0100, 0227, 0106, 0073, 
  0206, 0375, 0100, 0130, 0177, 0274, 0373, 0362, 0037, 0353, 0003, 0154, 0200, 0320, 0250, 0154, 
  0031, 0024, 0213, 0200, 0062, 0156, 0175, 0245, 0144, 0345, 0243, 0320, 0267, 0376, 0042, 0113, 
  0206, 0335, 0340, 0161, 0064, 0135, 0176, 0003, 0127, 0130, 0056, 0101, 0234, 0337, 0331, 0237, 
  0304, 0375, 0073, 0357, 0133, 0314, 0305, 0032, 0102, 0141, 0133, 0330, 0273, 0263, 0321, 0341, 
  0363, 0314, 0126, 0020, 0022, 0046, 0142, 0152, 0075, 0261, 0263, 0324, 0166, 0357, 0154, 0102, 
  0267, 0300, 0354, 0305, 0354, 0166, 0372, 0370, 0240, 0170, 0134, 0034, 0105, 0311, 0270, 0371, 
  0145, 0335, 0310, 0015, 0042, 0061, 0310, 0221, 0265, 0003, 0271, 0200, 0310, 0301, 0241, 0044, 
  0137, 0202, 0160, 0075, 0016, 0021, 0362, 0041, 0007, 0360, 0154, 0211, 0333, 0151, 0112, 0220, 
  0142, 0332, 0174, 0305, 0241, 0107, 0267, 0051, 0135, 0126, 0061, 0041, 0051, 0337, 0034, 0311, 
  0262, 0015, 0206, 0255, 0263, 0115, 0037, 0027, 0257, 0354, 0242, 0320, 0131, 0121, 0067, 0346, 
  0366, 0342, 0013, 0213, 0241, 0016, 0321, 0000, 0161, 0235, 0341, 0002, 0013, 0002, 0266, 0045, 
  0030, 0012, 0071, 0101, 0002, 0055, 0211, 0374, 0162, 0007, 0022, 0372, 0163, 0106, 0266, 0376, 
  0114, 0021, 0255, 0233, 0154, 0115, 0075, 0104, 0232, 0255, 0233, 0156, 0331, 0211, 0050, 0307, 
  0112, 0222, 0355, 0205, 0324, 0023, 0051, 0172, 0165, 0140, 0122, 0370, 0005, 0243, 0073, 0107, 
  0251, 0254, 0023, 0041, 0226, 0360, 0242, 0311, 0172, 0374, 0036, 0107, 0216, 0100, 0374, 0176, 
  0211, 0230, 0023, 0140, 0055, 0060, 0305, 0173, 0035, 0040, 0017, 0134, 0232, 0130, 0026, 0173, 
  0361, 0021, 0021, 0176, 0074, 0336, 0015, 0060, 0361, 0054, 0145, 0023, 0366, 0014, 0220, 0110, 
  0355, 0271, 0257, 0146, 0043, 0122, 0377, 0002, 0112, 0074, 0140, 0323, 0075, 0300, 0064, 0201, 
  0310, 0102, 0037, 0106, 0037, 0311, 0332, 0173, 0372, 0220, 0012, 0332, 0146, 0111, 0037, 0146, 
  0227, 0207, 0171, 0013, 0264, 0005, 0163, 0054, 0371, 0135, 0274, 0251, 0032, 0121, 0054, 0334, 
  0130, 0021, 0014, 0145, 0130, 0062, 0011, 0245, 0114, 0226, 0262, 0044, 0260, 0213, 0110, 0041, 
  0140, 0156, 0137, 0065, 0173, 0013, 0344, 0336, 0376, 0155, 0147, 0007, 0033, 0154, 0317, 0164, 
  0213, 0305, 0330, 0026, 0143, 0374, 0333, 0132, 0012, 0117, 0212, 0063, 0126, 0177, 0316, 0355, 
  0347, 0060, 0206, 0210, 0267, 0101, 0276, 0120, 0167, 0021, 0363, 0161, 0350, 0020, 0130, 0111, 
  0051, 0277, 0061, 0200, 0114, 0134, 0213, 0046, 0050, 0027, 0324, 0275, 0267, 0027, 0322, 0233, 
  0116, 0074, 0214, 0010, 0365, 0047, 0133, 0304, 0102, 0351, 0254, 0313, 0047, 0311, 0032, 0332, 
  0374, 0324, 0310, 0275, 0227, 0220, 0365, 0213, 0302, 0103, 0204, 0102, 0317, 0200, 0104, 0053, 
  0114, 0210, 0001, 0330, 0223, 0215, 0273, 0254, 0332, 0126, 0041, 0376, 0071, 0315, 0327, 0225, 
  0275, 0337, 0321, 0022, 0110, 0052, 0173, 0104, 0375, 0071, 0273, 0031, 0252, 0360, 0005, 0210, 
  0140, 0137, 0022, 0210, 0013, 0304, 0204, 0026, 0340, 0043, 0063, 0165, 0261, 0045, 0051, 0155, 
  0012, 0374, 0336, 0217, 0104, 0374, 0274, 0374, 0321, 0027, 0077, 0177, 0316, 0007, 0127, 0312, 
  0001, 0252, 0147, 0323, 0344, 0241, 0316, 0132, 0061, 0007, 0107, 0052, 0311, 0175, 0034, 0351, 
  0343, 0251, 0142, 0050, 0274, 0332, 0331, 0013, 0045, 0174, 0072, 0200, 0133, 0206, 0152, 0227, 
  0073, 0271, 0056, 0351, 0122, 0343, 0111, 0225, 0146, 0047, 0123, 0245, 0202, 0370, 0115, 0004, 
  0062, 0052, 0164, 0122, 0221, 0032, 0204, 0206, 0165, 0307, 0130, 0135, 0034, 0333, 0362, 0165, 
  0376, 0262, 0174, 0175, 0037, 0013, 0041, 0227, 0055, 0143, 0154, 0362, 0077, 0215, 0271, 0263, 
  0114, 0307, 0275, 0014, 0163, 0165, 0101, 0031, 0270, 0200, 0067, 0300, 0035, 0017, 0126, 0050, 
  0046, 0242, 0211, 0072, 0026, 0322, 0247, 0131, 0010, 0123, 0344, 0105, 0132, 0221, 0242, 0255, 
  0067, 0251, 0211, 0054, 0174, 0072, 0131, 0112, 0301, 0251, 0236, 0241, 0114, 0143, 0112, 0344, 
  0353, 0274, 0343, 0220, 0253, 0101, 0051, 0131, 0010, 0017, 0142, 0124, 0260, 0214, 0202, 0135, 
  0237, 0237, 0202, 0255, 0050, 0223, 0221, 0273, 0067, 0352, 0330, 0101, 0307, 0256, 0007, 0245, 
  0143, 0056, 0241, 0034, 0354, 0246, 0141, 0161, 0302, 0125, 0002, 0062, 0362, 0235, 0074, 0315, 
  0245, 0103, 0206, 0163, 0121, 0322, 0202, 0100, 0175, 0057, 0327, 0003, 0017, 0234, 0133, 0010, 
  0346, 0115, 0027, 0202, 0131, 0104, 0200, 0342, 0315, 0033, 0155, 0334, 0140, 0323, 0332, 0131, 
  0167, 0301, 0146, 0217, 0066, 0332, 0244, 0046, 0365, 0201, 0241, 0255, 0234, 0345, 0035, 0003, 
  0124, 0252, 0176, 0110, 0075, 0354, 0241, 0132, 0205, 0042, 0125, 0235, 0304, 0141, 0222, 0277, 
  0366, 0121, 0350, 0152, 0317, 0147, 0035, 0234, 0352, 0223, 0007, 0355, 0204, 0260, 0236, 0313, 
  0371, 0055, 0146, 0036, 0126, 0227, 0364, 0077, 0142, 0002, 0362, 0237, 0000, 0226, 0162, 0075, 
  0302, 0256, 0210, 0031, 0070, 0162, 0017, 0260, 0112, 0277, 0237, 0026, 0103, 0146, 0334, 0175, 
  0244, 0072, 0040, 0116, 0342, 0364, 0353, 0253, 0377, 0305, 0265, 0344, 0162, 0267, 0374, 0055, 
  0136, 0107, 0023, 0101, 0165, 0372, 0024, 0131, 0324, 0366, 0242, 0333, 0023, 0162, 0145, 0176, 
  0245, 0032, 0277, 0017, 0111, 0221, 0360, 0200, 0340, 0112, 0032, 0373, 0364, 0233, 0222, 0166, 
  0120, 0225, 0116, 0265, 0335, 0314, 0222, 0062, 0117, 0062, 0157, 0213, 0075, 0021, 0024, 0130, 
  0125, 0343, 0106, 0313, 0143, 0023, 0257, 0276, 0313, 0220, 0270, 0271, 0107, 0004, 0336, 0134, 
  0136, 0066, 0205, 0010, 0040, 0055, 0325, 0136, 0327, 0203, 0250, 0036, 0305, 0276, 0363, 0221, 
  0122, 0272, 0217, 0136, 0106, 0332, 0165, 0014, 0021, 0231, 0044, 0037, 0323, 0316, 0205, 0335, 
  0240, 0303, 0261, 0257, 0031, 0047, 0215, 0216, 0363, 0351, 0163, 0074, 0127, 0012, 0151, 0240, 
  0244, 0175, 0052, 0051, 0175, 0224, 0120, 0010, 0271, 0152, 0241, 0143, 0277, 0122, 0026, 0030, 
  0076, 0047, 0131, 0006, 0176, 0166, 0322, 0066, 0312, 0121, 0374, 0271, 0243, 0261, 0220, 0101, 
  0330, 0116, 0255, 0010, 0241, 0327, 0266, 0377, 0222, 0215, 0213, 0003, 0040, 0121, 0232, 0147, 
  0316, 0364, 0102, 0141, 0005, 0070, 0364, 0360, 0127, 0201, 0036, 0042, 0337, 0061, 0166, 0176, 
  0025, 0015, 0234, 0254, 0360, 0372, 0321, 0272, 0171, 0221, 0244, 0274, 0273, 0361, 0247, 0212, 
  0070, 0054, 0347, 0017, 0024, 0112, 0267, 0256, 0216, 0062, 0214, 0162, 0135, 0075, 0305, 0076, 
  0376, 0311, 0104, 0152, 0272, 0132, 0021, 0207, 0322, 0373, 0021, 0034, 0302, 0153, 0326, 0214, 
  0331, 0351, 0064, 0343, 0061, 0122, 0355, 0100, 0073, 0234, 0222, 0203, 0056, 0243, 0122, 0024, 
  0053, 0105, 0066, 0107, 0030, 0325, 0142, 0130, 0355, 0054, 0243, 0110, 0047, 0251, 0023, 0216, 
  0322, 0077, 0206, 0072, 0335, 0364, 0210, 0116, 0122, 0046, 0324, 0252, 0037, 0111, 0134, 0034, 
  0225, 0274, 0126, 0047, 0033, 0247, 0252, 0055, 0346, 0317, 0362, 0015, 0051, 0121, 0253, 0251, 
  0176, 0264, 0316, 0222, 0053, 0063, 0345, 0331, 0274, 0165, 0132, 0230, 0075, 0110, 0070, 0033, 
  0352, 0261, 0250, 0006, 0033, 0326, 0355, 0065, 0346, 0044, 0352, 0247, 0163, 0150, 0064, 0152, 
  0211, 0114, 0055, 0045, 0337, 0324, 0102, 0226, 0022, 0263, 0366, 0144, 0120, 0122, 0302, 0343, 
  0245, 0347, 0200, 0072, 0241, 0156, 0027, 0024, 0156, 0165, 0002, 0317, 0040, 0250, 0316, 0026, 
  0070, 0223, 0243, 0122, 0157, 0115, 0026, 0320, 0071, 0105, 0327, 0111, 0334, 0131, 0337, 0266, 
  0256, 0363, 0346, 0255, 0275, 0172, 0113, 0357, 0336, 0252, 0240, 0121, 0343, 0355, 0153, 0132, 
  0367, 0146, 0312, 0224, 0063, 0313, 0157, 0006, 0257, 0103, 0225, 0273, 0053, 0336, 0341, 0047, 
  0206, 0275, 0175, 0101, 0107, 0376, 0065, 0263, 0253, 0240, 0073, 0330, 0146, 0127, 0133, 0055, 
  0214, 0244, 0351, 0326, 0151, 0156, 0127, 0113, 0261, 0241, 0044, 0136, 0207, 0046, 0023, 0325, 
  0122, 0277, 0230, 0003, 0322, 0032, 0121, 0102, 0300, 0313, 0336, 0311, 0111, 0254, 0022, 0167, 
  0370, 0376, 0121, 0376, 0102, 0116, 0357, 0014, 0152, 0231, 0036, 0325, 0342, 0324, 0364, 0054, 
  0147, 0255, 0217, 0110, 0351, 0243, 0156, 0320, 0104, 0224, 0140, 0167, 0147, 0057, 0102, 0330, 
  0034, 0137, 0332, 0321, 0231, 0223, 0007, 0110, 0335, 0003, 0112, 0103, 0160, 0034, 0152, 0115, 
  0325, 0110, 0000, 0212, 0205, 0340, 0213, 0364, 0110, 0377, 0303, 0260, 0315, 0071, 0156, 0041, 
  0277, 0124, 0365, 0014, 0273, 0311, 0234, 0035, 0362, 0276, 0143, 0376, 0027, 0237, 0223, 0107, 
  0236, 0332, 0342, 0001, 0107, 0055, 0315, 0257, 0151, 0106, 0161, 0040, 0340, 0246, 0376, 0244, 
  0321, 0064, 0145, 0014, 0371, 0174, 0230, 0147, 0332, 0020, 0237, 0151, 0143, 0021, 0220, 0203, 
  0221, 0353, 0002, 0227, 0333, 0307, 0004, 0067, 0335, 0160, 0162, 0357, 0223, 0044, 0261, 0347, 
  0276, 0305, 0231, 0204, 0071, 0352, 0270, 0233, 0014, 0165, 0020, 0363, 0101, 0034, 0113, 0117, 
  0143, 0344, 0265, 0021, 0252, 0213, 0104, 0264, 0051, 0323, 0164, 0302, 0372, 0020, 0247, 0064, 
  0054, 0204, 0225, 0160, 0220, 0020, 0310, 0015, 0032, 0105, 0033, 0345, 0063, 0011, 0032, 0231, 
  0114, 0124, 0023, 0276, 0150, 0021, 0314, 0324, 0345, 0034, 0035, 0021, 0252, 0070, 0027, 0324, 
  0204, 0024, 0032, 0307, 0176, 0372, 0014, 0010, 0132, 0135, 0310, 0071, 0251, 0040, 0316, 0316, 
  0132, 0020, 0233, 0020, 0253, 0031, 0241, 0114, 0157, 0175, 0264, 0277, 0001, 0322, 0131, 0172, 
  0322, 0220, 0264, 0065, 0144, 0355, 0057, 0307, 0063, 0115, 0110, 0364, 0310, 0150, 0324, 0230, 
  0153, 0237, 0341, 0125, 0221, 0255, 0232, 0144, 0155, 0310, 0145, 0116, 0052, 0143, 0111, 0253, 
  0040, 0121, 0357, 0147, 0327, 0137, 0372, 0012, 0326, 0113, 0037, 0162, 0310, 0346, 0374, 0303, 
  0271, 0036, 0155, 0132, 0123, 0275, 0171, 0275, 0065, 0325, 0066, 0305, 0234, 0253, 0327, 0130, 
  0314, 0311, 0061, 0376, 0315, 0071, 0327, 0162, 0214, 0004, 0242, 0155, 0130, 0234, 0043, 0337, 
  0325, 0100, 0252, 0055, 0255, 0043, 0340, 0126, 0244, 0154, 0327, 0273, 0350, 0252, 0072, 0162, 
  0140, 0214, 0072, 0046, 0272, 0101, 0002, 0034, 0117, 0146, 0301, 0073, 0047, 0310, 0236, 0313, 
  0035, 0106, 0161, 0304, 0254, 0216, 0141, 0326, 0147, 0153, 0107, 0346, 0332, 0366, 0321, 0063, 
  0142, 0327, 0265, 0221, 0172, 0245, 0170, 0037, 0124, 0327, 0353, 0032, 0375, 0027, 0174, 0304, 
  0074, 0325, 0057, 0262, 0134, 0272, 0216, 0142, 0001, 0314, 0102, 0334, 0162, 0260, 0107, 0300, 
  0102, 0053, 0371, 0361, 0155, 0027, 0010, 0030, 0165, 0204, 0314, 0353, 0062, 0272, 0131, 0154, 
  0147, 0035, 0244, 0216, 0073, 0112, 0235, 0247, 0160, 0006, 0231, 0262, 0131, 0025, 0260, 0245, 
  0276, 0346, 0202, 0232, 0353, 0327, 0256, 0236, 0146, 0256, 0307, 0214, 0326, 0145, 0335, 0032, 
  0104, 0240, 0330, 0031, 0361, 0344, 0221, 0316, 0364, 0075, 0160, 0241, 0207, 0332, 0175, 0151, 
  0325, 0357, 0351, 0005, 0173, 0213, 0314, 0313, 0365, 0272, 0232, 0336, 0303, 0076, 0026, 0334, 
  0110, 0141, 0115, 0154, 0240, 0231, 0035, 0354, 0252, 0150, 0325, 0175, 0021, 0253, 0127, 0213, 
  0150, 0140, 0025, 0265, 0055, 0343, 0051, 0335, 0130, 0127, 0066, 0260, 0035, 0333, 0132, 0025, 
  0321, 0136, 0316, 0211, 0351, 0260, 0111, 0217, 0105, 0235, 0106, 0031, 0335, 0361, 0246, 0063, 
  0125, 0322, 0340, 0111, 0143, 0176, 0264, 0311, 0263, 0176, 0015, 0300, 0315, 0235, 0331, 0206, 
  0120, 0105, 0300, 0216, 0253, 0276, 0067, 0317, 0265, 0052, 0216, 0142, 0275, 0333, 0373, 0320, 
  0334, 0233, 0143, 0267, 0001, 0204, 0117, 0101, 0066, 0346, 0226, 0212, 0261, 0333, 0062, 0151, 
  0310, 0335, 0160, 0203, 0063, 0340, 0057, 0224, 0113, 0034, 0071, 0145, 0206, 0266, 0016, 0016, 
  0075, 0354, 0042, 0101, 0231, 0311, 0234, 0147, 0155, 0055, 0072, 0231, 0312, 0330, 0214, 0017, 
  0336, 0134, 0020, 0352, 0336, 0367, 0150, 0054, 0176, 0227, 0323, 0357, 0015, 0105, 0152, 0043, 
  0262, 0106, 0103, 0232, 0211, 0044, 0040, 0037, 0015, 0305, 0150, 0050, 0136, 0235, 0241, 0230, 
  0237, 0267, 0241, 0250, 0252, 0337, 0316, 0306, 0002, 0156, 0017, 0005, 0334, 0357, 0266, 0114, 
  0373, 0136, 0012, 0276, 0317, 0250, 0264, 0146, 0326, 0376, 0015, 0070, 0326, 0212, 0062, 0213, 
  0074, 0271, 0216, 0267, 0337, 0161, 0075, 0265, 0373, 0114, 0364, 0065, 0227, 0123, 0157, 0306, 
  0162, 0152, 0337, 0345, 0124, 0365, 0326, 0252, 0137, 0003, 0112, 0071, 0260, 0334, 0025, 0372, 
  0314, 0313, 0253, 0024, 0252, 0003, 0257, 0252, 0032, 0063, 0244, 0160, 0136, 0006, 0312, 0103, 
  0256, 0222, 0227, 0024, 0165, 0075, 0371, 0376, 0115, 0140, 0213, 0343, 0267, 0203, 0165, 0265, 
  0102, 0305, 0173, 0245, 0222, 0343, 0324, 0126, 0306, 0102, 0377, 0126, 0167, 0117, 0177, 0054, 
  0357, 0216, 0345, 0335, 0261, 0274, 0073, 0226, 0167, 0007, 0122, 0336, 0275, 0072, 0357, 0064, 
  0054, 0163, 0266, 0203, 0121, 0052, 0234, 0375, 0157, 0233, 0150, 0235, 0354, 0350, 0073, 0163, 
  0322, 0276, 0367, 0153, 0226, 0046, 0034, 0176, 0124, 0343, 0153, 0112, 0203, 0267, 0311, 0301, 
  0216, 0307, 0332, 0222, 0024, 0035, 0053, 0244, 0302, 0132, 0102, 0222, 0070, 0200, 0227, 0344, 
  0020, 0152, 0204, 0242, 0233, 0025, 0313, 0150, 0345, 0242, 0331, 0117, 0157, 0064, 0255, 0276, 
  0350, 0136, 0044, 0256, 0232, 0257, 0311, 0057, 0155, 0214, 0005, 0227, 0152, 0115, 0277, 0076, 
  0265, 0246, 0367, 0177, 0001, 0245, 0253, 0133, 0230, 0146, 0206, 0266, 0223, 0170, 0145, 0274, 
  0302, 0322, 0033, 0171, 0307, 0053, 0054, 0047, 0172, 0111, 0301, 0170, 0205, 0145, 0270, 0077, 
  0277, 0160, 0342, 0237, 0207, 0372, 0236, 0137, 0176, 0236, 0334, 0227, 0126, 0223, 0117, 0266, 
  0330, 0363, 0101, 0360, 0003, 0104, 0356, 0153, 0213, 0001, 0217, 0150, 0310, 0045, 0066, 0223, 
  0331, 0314, 0136, 0144, 0136, 0261, 0253, 0356, 0067, 0147, 0106, 0326, 0303, 0317, 0355, 0305, 
  0323, 0113, 0116, 0265, 0241, 0377, 0145, 0057, 0252, 0026, 0176, 0366, 0045, 0317, 0277, 0153, 
  0374, 0166, 0232, 0371, 0261, 0337, 0277, 0001, 0322, 0311, 0233, 0042, 0000, 0050, 0165, 0165, 
  0141, 0171, 0051
} };
#else /* _MSC_VER */
static const SECTION union { const guint8 data[2660]; const double alignment; void * const ptr;}  screensaver_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\254\000\000\000\000\000\000\050\005\000\000\000"
  "\000\000\000\000\003\000\000\000\004\000\000\000\004\000\000\000"
  "\004\000\000\000\113\120\220\013\002\000\000\000\254\000\000\000"
  "\004\000\114\000\260\000\000\000\264\000\000\000\201\321\040\031"
  "\000\000\000\000\264\000\000\000\005\000\114\000\274\000\000\000"
  "\300\000\000\000\324\265\002\000\377\377\377\377\300\000\000\000"
  "\001\000\114\000\304\000\000\000\310\000\000\000\361\155\236\015"
  "\001\000\000\000\310\000\000\000\014\000\114\000\324\000\000\000"
  "\330\000\000\000\317\360\335\020\003\000\000\000\330\000\000\000"
  "\016\000\166\000\350\000\000\000\143\012\000\000\157\162\147\057"
  "\001\000\000\000\155\141\164\145\057\000\000\000\003\000\000\000"
  "\057\000\000\000\000\000\000\000\163\143\162\145\145\156\163\141"
  "\166\145\162\057\004\000\000\000\160\162\145\146\145\162\145\156"
  "\143\145\163\056\165\151\000\000\105\170\000\000\001\000\000\000"
  "\170\332\355\035\333\162\333\066\366\275\137\301\345\103\137\166"
  "\144\131\262\235\355\246\266\072\111\263\311\164\246\235\351\154"
  "\322\315\043\007\042\217\110\304\020\301\005\100\311\372\373\002"
  "\244\054\223\026\157\000\111\213\162\370\220\211\045\342\000\007"
  "\347\176\001\250\333\137\036\326\304\332\000\343\230\206\167\366"
  "\354\342\322\266\040\164\251\207\103\377\316\376\353\313\307\311"
  "\117\366\057\213\037\156\377\061\231\130\237\040\004\206\004\170"
  "\326\026\213\300\362\011\362\300\272\272\230\317\057\346\326\144"
  "\042\007\341\120\000\133\041\027\026\077\130\326\055\203\377\307"
  "\230\001\267\010\136\336\331\276\270\377\247\375\264\320\325\305"
  "\354\332\236\046\343\324\324\007\310\011\301\056\204\034\046\142"
  "\027\201\345\107\144\223\316\175\064\056\104\153\260\326\022\233"
  "\011\167\031\110\020\044\347\056\036\352\201\034\202\043\041\027"
  "\266\262\203\043\006\053\140\162\267\022\307\102\100\227\106\073"
  "\206\375\100\130\177\274\373\362\037\353\003\154\200\320\250\154"
  "\031\024\213\200\062\156\175\245\144\345\243\320\267\376\042\113"
  "\206\335\340\161\064\135\176\003\127\130\056\101\234\337\331\237"
  "\304\375\073\357\133\314\305\032\102\141\133\330\273\263\321\341"
  "\363\314\126\020\022\046\142\152\075\261\263\324\166\357\154\102"
  "\267\300\354\305\354\166\372\370\240\170\134\034\105\311\270\371"
  "\145\335\310\015\042\061\310\221\265\003\271\200\310\301\241\044"
  "\137\202\160\075\016\021\362\041\007\360\154\211\333\151\112\220"
  "\142\332\174\305\241\107\267\051\135\126\061\041\051\337\034\311"
  "\262\015\206\255\263\115\037\027\257\354\242\320\131\121\067\346"
  "\366\342\013\213\241\016\321\000\161\235\341\002\013\002\266\045"
  "\030\012\071\101\002\055\211\374\162\007\022\372\163\106\266\376"
  "\114\021\255\233\154\115\075\104\232\255\233\156\331\211\050\307"
  "\112\222\355\205\324\023\051\172\165\140\122\370\005\243\073\107"
  "\251\254\023\041\226\360\242\311\172\374\036\107\216\100\374\176"
  "\211\230\023\140\055\060\305\173\035\040\017\134\232\130\026\173"
  "\361\021\021\176\074\336\015\060\361\054\145\023\366\014\220\110"
  "\355\271\257\146\043\122\377\002\112\074\140\323\075\300\064\201"
  "\310\102\037\106\037\311\332\173\372\220\012\332\146\111\037\146"
  "\227\207\171\013\264\005\163\054\371\135\274\251\032\121\054\334"
  "\130\021\014\145\130\062\011\245\114\226\262\044\260\213\110\041"
  "\140\156\137\065\173\013\344\336\376\155\147\007\033\154\317\164"
  "\213\305\330\026\143\374\333\132\012\117\212\063\126\177\316\355"
  "\347\060\206\210\267\101\276\120\167\021\363\161\350\020\130\111"
  "\051\277\061\200\114\134\213\046\050\027\324\275\267\027\322\233"
  "\116\074\214\010\365\047\133\304\102\351\254\313\047\311\032\332"
  "\374\324\310\275\227\220\365\213\302\103\204\102\317\200\104\053"
  "\114\210\001\330\223\215\273\254\332\126\041\376\071\315\327\225"
  "\275\337\321\022\110\052\173\104\375\071\273\031\252\360\005\210"
  "\140\137\022\210\013\304\204\026\340\043\063\165\261\045\051\155"
  "\012\374\336\217\104\374\274\374\321\027\077\177\316\007\127\312"
  "\001\252\147\323\344\241\316\132\061\007\107\052\311\175\034\351"
  "\343\251\142\050\274\332\331\013\045\174\072\200\133\206\152\227"
  "\073\271\056\351\122\343\111\225\146\047\123\245\202\370\115\004"
  "\062\052\164\122\221\032\204\206\165\307\130\135\034\333\362\165"
  "\376\262\174\175\037\013\041\227\055\143\154\362\077\215\271\263"
  "\114\307\275\014\163\165\101\031\270\200\067\300\035\017\126\050"
  "\046\242\211\072\026\322\247\131\010\123\344\105\132\221\242\255"
  "\067\251\211\054\174\072\131\112\301\251\236\241\114\143\112\344"
  "\353\274\343\220\253\101\051\131\010\017\142\124\260\214\202\135"
  "\237\237\202\255\050\223\221\273\067\352\330\101\307\256\007\245"
  "\143\056\241\034\354\246\141\161\302\125\002\062\362\235\074\315"
  "\245\103\206\163\121\322\202\100\175\057\327\003\017\234\133\010"
  "\346\115\027\202\131\104\200\342\315\033\155\334\140\323\332\131"
  "\167\301\146\217\066\332\244\046\365\201\241\255\234\345\035\003"
  "\124\252\176\110\075\354\241\132\205\042\125\235\304\141\222\277"
  "\366\121\350\152\317\147\035\234\352\223\007\355\204\260\236\313"
  "\371\055\146\036\126\227\364\077\142\002\362\237\000\226\162\075"
  "\302\256\210\031\070\162\017\260\112\277\237\026\103\146\334\175"
  "\244\072\040\116\342\364\353\253\377\305\265\344\162\267\374\055"
  "\136\107\023\101\165\372\024\131\324\366\242\333\023\162\145\176"
  "\245\032\277\017\111\221\360\200\340\112\032\373\364\233\222\166"
  "\120\225\116\265\335\314\222\062\117\062\157\213\075\021\024\130"
  "\125\343\106\313\143\023\257\276\313\220\270\271\107\004\336\134"
  "\136\066\205\010\040\055\325\136\327\203\250\036\305\276\363\221"
  "\122\272\217\136\106\332\165\014\021\231\044\037\323\316\205\335"
  "\240\303\261\257\031\047\215\216\363\351\163\074\127\012\151\240"
  "\244\175\052\051\175\224\120\010\271\152\241\143\277\122\026\030"
  "\076\047\131\006\176\166\322\066\312\121\374\271\243\261\220\101"
  "\330\116\255\010\241\327\266\377\222\215\213\003\040\121\232\147"
  "\316\364\102\141\005\070\364\360\127\201\036\042\337\061\166\176"
  "\025\015\234\254\360\372\321\272\171\221\244\274\273\361\247\212"
  "\070\054\347\017\024\112\267\256\216\062\214\162\135\075\305\076"
  "\376\311\104\152\272\132\021\207\322\373\021\034\302\153\326\214"
  "\331\351\064\343\061\122\355\100\073\234\222\203\056\243\122\024"
  "\053\105\066\107\030\325\142\130\355\054\243\110\047\251\023\216"
  "\322\077\206\072\335\364\210\116\122\046\324\252\037\111\134\034"
  "\225\274\126\047\033\247\252\055\346\317\362\015\051\121\253\251"
  "\176\264\316\222\053\063\345\331\274\165\132\230\075\110\070\033"
  "\352\261\250\006\033\326\355\065\346\044\352\247\163\150\064\152"
  "\211\114\055\045\337\324\102\226\022\263\366\144\120\122\302\343"
  "\245\347\200\072\241\156\027\024\156\165\002\317\040\250\316\026"
  "\070\223\243\122\157\115\026\320\071\105\327\111\334\131\337\266"
  "\256\363\346\255\275\172\113\357\336\252\240\121\343\355\153\132"
  "\367\146\312\224\063\313\157\006\257\103\225\273\053\336\341\047"
  "\206\275\175\101\107\376\065\263\253\240\073\330\146\127\133\055"
  "\214\244\351\326\151\156\127\113\261\241\044\136\207\046\023\325"
  "\122\277\230\003\322\032\121\102\300\313\336\311\111\254\022\167"
  "\370\376\121\376\102\116\357\014\152\231\036\325\342\324\364\054"
  "\147\255\217\110\351\243\156\320\104\224\140\167\147\057\102\330"
  "\034\137\332\321\231\223\007\110\335\003\112\103\160\034\152\115"
  "\325\110\000\212\205\340\213\364\110\377\303\260\315\071\156\041"
  "\277\124\365\014\273\311\234\035\362\276\143\376\027\237\223\107"
  "\236\332\342\001\107\055\315\257\151\106\161\040\340\246\376\244"
  "\321\064\145\014\371\174\230\147\332\020\237\151\143\021\220\203"
  "\221\353\002\227\333\307\004\067\335\160\162\357\223\044\261\347"
  "\276\305\231\204\071\352\270\233\014\165\020\363\101\034\113\117"
  "\143\344\265\021\252\213\104\264\051\323\164\302\372\020\247\064"
  "\054\204\225\160\220\020\310\015\032\105\033\345\063\011\032\231"
  "\114\124\023\276\150\021\314\324\345\034\035\021\252\070\027\324"
  "\204\024\032\307\176\372\014\010\132\135\310\071\251\040\316\316"
  "\132\020\233\020\253\031\241\114\157\175\264\277\001\322\131\172"
  "\322\220\264\065\144\355\057\307\063\115\110\364\310\150\324\230"
  "\153\237\341\125\221\255\232\144\155\310\145\116\052\143\111\253"
  "\040\121\357\147\327\137\372\012\326\113\037\162\310\346\374\303"
  "\271\036\155\132\123\275\171\275\065\325\066\305\234\253\327\130"
  "\314\311\061\376\315\071\327\162\214\004\242\155\130\234\043\337"
  "\325\100\252\055\255\043\340\126\244\154\327\273\350\252\072\162"
  "\140\214\072\046\272\101\002\034\117\146\301\073\047\310\236\313"
  "\035\106\161\304\254\216\141\326\147\153\107\346\332\366\321\063"
  "\142\327\265\221\172\245\170\037\124\327\353\032\375\027\174\304"
  "\074\325\057\262\134\272\216\142\001\314\102\334\162\260\107\300"
  "\102\053\371\361\155\027\010\030\165\204\314\353\062\272\131\154"
  "\147\035\244\216\073\112\235\247\160\006\231\262\131\025\260\245"
  "\276\346\202\232\353\327\256\236\146\256\307\214\326\145\335\032"
  "\104\240\330\031\361\344\221\316\364\075\160\241\207\332\175\151"
  "\325\357\351\005\173\213\314\313\365\272\232\336\303\076\026\334"
  "\110\141\115\154\240\231\035\354\252\150\325\175\021\253\127\213"
  "\150\140\025\265\055\343\051\335\130\127\066\260\035\333\132\025"
  "\321\136\316\211\351\260\111\217\105\235\106\031\335\361\246\063"
  "\125\322\340\111\143\176\264\311\263\176\015\300\315\235\331\206"
  "\120\105\300\216\253\276\067\317\265\052\216\142\275\333\373\320"
  "\334\233\143\267\001\204\117\101\066\346\226\212\261\333\062\151"
  "\310\335\160\203\063\340\057\224\113\034\071\145\206\266\016\016"
  "\075\354\042\101\231\311\234\147\155\055\072\231\312\330\214\017"
  "\336\134\020\352\336\367\150\054\176\227\323\357\015\105\152\043"
  "\262\106\103\232\211\044\040\037\015\305\150\050\136\235\241\230"
  "\237\267\241\250\252\337\316\306\002\156\017\005\334\357\266\114"
  "\373\136\012\276\317\250\264\146\326\376\015\070\326\212\062\213"
  "\074\271\216\267\337\161\075\265\373\114\364\065\227\123\157\306"
  "\162\152\337\345\124\365\326\252\137\003\112\071\260\334\025\372"
  "\314\313\253\024\252\003\257\252\032\063\244\160\136\006\312\103"
  "\256\222\227\024\165\075\371\376\115\140\213\343\267\203\165\265"
  "\102\305\173\245\222\343\324\126\306\102\377\126\167\117\177\054"
  "\357\216\345\335\261\274\073\226\167\007\122\336\275\072\357\064"
  "\054\163\266\203\121\052\234\375\157\233\150\235\354\350\073\163"
  "\322\276\367\153\226\046\034\176\124\343\153\112\203\267\311\301"
  "\216\307\332\222\024\035\053\244\302\132\102\222\070\200\227\344"
  "\020\152\204\242\233\025\313\150\345\242\331\117\157\064\255\276"
  "\350\136\044\256\232\257\311\057\155\214\005\227\152\115\277\076"
  "\265\246\367\177\001\245\253\133\230\146\206\266\223\170\145\274"
  "\302\322\033\171\307\053\054\047\172\111\301\170\205\145\270\077"
  "\277\160\342\237\207\372\236\137\176\236\334\227\126\223\117\266"
  "\330\363\101\360\003\104\356\153\213\001\217\150\310\045\066\223"
  "\331\314\136\144\136\261\253\356\067\147\106\326\303\317\355\305"
  "\323\113\116\265\241\377\145\057\252\026\176\366\045\317\277\153"
  "\374\166\232\371\261\337\277\001\322\311\233\042\000\050\165\165"
  "\141\171\051" };
#endif /* !_MSC_VER */

static GStaticResource static_resource = { screensaver_resource_data.data, sizeof (screensaver_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_MODULE_EXPORT
GResource *screensaver_get_resource (void);
GResource *screensaver_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a usable way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for x86 and x64/ARM/ARM64 programs, as symbols on x86 are prefixed
 * with an underscore but symbols on x64/ARM/ARM64 are not.
 */
#ifdef _M_IX86
#define G_MSVC_SYMBOL_PREFIX "_"
#else
#define G_MSVC_SYMBOL_PREFIX ""
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
