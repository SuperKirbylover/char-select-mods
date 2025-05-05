Lights1 sans_cap_metal_wing_Metal__METAL__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 sans_cap_metal_wing_Metal_Wing_Tip_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x49, 0x49, 0x49);

Lights1 sans_cap_metal_wing_Metal_Wing_Base_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x49, 0x49, 0x49);

Gfx sans_cap_metal_wing_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 sans_cap_metal_wing_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/sans/Metal_Shade.rgba16.inc.c"
};

Gfx sans_cap_metal_wing_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 sans_cap_metal_wing_Metal_Light_rgba16_rgba16[] = {
	#include "actors/sans/Metal_Light.rgba16.inc.c"
};

Gfx sans_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 sans_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16[] = {
	#include "actors/sans/custom_mario_metal_wing_tip_shade.rgba16.inc.c"
};

Gfx sans_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 sans_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16[] = {
	#include "actors/sans/custom_mario_metal_wing_tip_light.rgba16.inc.c"
};

Gfx sans_cap_metal_wing_custom_mario_metal_wing_shade_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 sans_cap_metal_wing_custom_mario_metal_wing_shade_rgba16[] = {
	#include "actors/sans/custom_mario_metal_wing_shade.rgba16.inc.c"
};

Gfx sans_cap_metal_wing_custom_mario_metal_wing_light_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 sans_cap_metal_wing_custom_mario_metal_wing_light_rgba16[] = {
	#include "actors/sans/custom_mario_metal_wing_light.rgba16.inc.c"
};

Vtx sans_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0[154] = {
	{{ {103, 1, -2}, 0, {150, -529}, {11, 133, 31, 255} }},
	{{ {85, 2, -50}, 0, {-260, -529}, {8, 129, 0, 255} }},
	{{ {138, 0, -17}, 0, {-260, -17}, {25, 132, 242, 255} }},
	{{ {108, 49, -85}, 0, {1204, -338}, {44, 112, 215, 255} }},
	{{ {88, 36, -115}, 0, {1203, -375}, {37, 73, 159, 255} }},
	{{ {53, 47, -86}, 0, {1033, -375}, {231, 121, 225, 255} }},
	{{ {34, 49, -42}, 0, {864, -385}, {173, 96, 250, 255} }},
	{{ {53, 47, -86}, 0, {864, -529}, {231, 121, 225, 255} }},
	{{ {33, 34, -54}, 0, {859, -383}, {137, 31, 224, 255} }},
	{{ {-103, 1, -2}, 0, {150, -529}, {245, 133, 31, 255} }},
	{{ {-138, 0, -17}, 0, {-260, -17}, {231, 132, 242, 255} }},
	{{ {-85, 2, -50}, 0, {-260, -529}, {248, 129, 0, 255} }},
	{{ {-108, 49, -85}, 0, {1204, -338}, {212, 112, 215, 255} }},
	{{ {-53, 47, -86}, 0, {1033, -375}, {25, 121, 225, 255} }},
	{{ {-88, 36, -115}, 0, {1203, -375}, {219, 73, 159, 255} }},
	{{ {-34, 49, -42}, 0, {864, -385}, {83, 96, 250, 255} }},
	{{ {-33, 34, -54}, 0, {859, -383}, {119, 31, 224, 255} }},
	{{ {-53, 47, -86}, 0, {864, -529}, {25, 121, 225, 255} }},
	{{ {91, 41, -6}, 0, {559, -529}, {44, 114, 35, 255} }},
	{{ {106, 0, 119}, 0, {1203, -17}, {81, 204, 83, 255} }},
	{{ {103, 1, -2}, 0, {150, -17}, {11, 133, 31, 255} }},
	{{ {129, 35, -12}, 0, {559, -17}, {0, 123, 32, 255} }},
	{{ {138, 0, -17}, 0, {-260, -529}, {25, 132, 242, 255} }},
	{{ {151, 0, 89}, 0, {-260, -93}, {4, 131, 20, 255} }},
	{{ {122, 13, 91}, 0, {150, -93}, {135, 246, 37, 255} }},
	{{ {149, 2, 95}, 0, {-260, -17}, {254, 163, 86, 255} }},
	{{ {125, 12, 95}, 0, {150, -17}, {172, 204, 80, 255} }},
	{{ {138, 25, 100}, 0, {559, -17}, {219, 77, 94, 255} }},
	{{ {149, 2, 95}, 0, {559, -17}, {254, 163, 86, 255} }},
	{{ {139, 26, 94}, 0, {559, -93}, {217, 121, 7, 255} }},
	{{ {170, 25, 96}, 0, {969, -17}, {44, 73, 94, 255} }},
	{{ {149, 2, 95}, 0, {969, -17}, {254, 163, 86, 255} }},
	{{ {170, 25, 96}, 0, {969, -17}, {44, 73, 94, 255} }},
	{{ {172, 26, 90}, 0, {969, -93}, {46, 118, 10, 255} }},
	{{ {139, 26, 94}, 0, {559, -93}, {217, 121, 7, 255} }},
	{{ {190, 13, 80}, 0, {1378, -93}, {125, 237, 12, 255} }},
	{{ {185, 12, 88}, 0, {1378, -17}, {86, 200, 75, 255} }},
	{{ {149, 2, 95}, 0, {1378, -17}, {254, 163, 86, 255} }},
	{{ {149, 2, 95}, 0, {1788, -17}, {254, 163, 86, 255} }},
	{{ {151, 0, 89}, 0, {1788, -93}, {4, 131, 20, 255} }},
	{{ {170, 18, -50}, 0, {1378, -529}, {116, 245, 207, 255} }},
	{{ {138, 0, -17}, 0, {1788, -529}, {25, 132, 242, 255} }},
	{{ {141, 34, -38}, 0, {969, -529}, {45, 119, 2, 255} }},
	{{ {129, 35, -12}, 0, {559, -529}, {0, 123, 32, 255} }},
	{{ {103, 1, -2}, 0, {150, -529}, {11, 133, 31, 255} }},
	{{ {122, 13, 91}, 0, {150, -93}, {135, 246, 37, 255} }},
	{{ {91, 41, -6}, 0, {1203, -17}, {44, 114, 35, 255} }},
	{{ {93, 37, 115}, 0, {1033, -17}, {56, 75, 86, 255} }},
	{{ {106, 0, 119}, 0, {1203, -17}, {81, 204, 83, 255} }},
	{{ {92, 20, 109}, 0, {1203, -17}, {221, 35, 117, 255} }},
	{{ {31, 16, 112}, 0, {1033, -17}, {160, 234, 81, 255} }},
	{{ {32, 32, 116}, 0, {864, -17}, {184, 58, 88, 255} }},
	{{ {91, 41, -6}, 0, {1033, -17}, {44, 114, 35, 255} }},
	{{ {34, 49, -42}, 0, {864, -275}, {173, 96, 250, 255} }},
	{{ {108, 49, -85}, 0, {1033, -340}, {44, 112, 215, 255} }},
	{{ {53, 47, -86}, 0, {864, -375}, {231, 121, 225, 255} }},
	{{ {91, 41, -6}, 0, {969, -529}, {44, 114, 35, 255} }},
	{{ {129, 35, -12}, 0, {559, -17}, {0, 123, 32, 255} }},
	{{ {141, 34, -38}, 0, {969, -17}, {45, 119, 2, 255} }},
	{{ {108, 49, -85}, 0, {1378, -529}, {44, 112, 215, 255} }},
	{{ {170, 18, -50}, 0, {1378, -17}, {116, 245, 207, 255} }},
	{{ {88, 36, -115}, 0, {1203, -375}, {37, 73, 159, 255} }},
	{{ {60, 10, -137}, 0, {1495, -375}, {26, 236, 133, 255} }},
	{{ {87, 0, -86}, 0, {1495, -375}, {24, 133, 238, 255} }},
	{{ {85, 2, -50}, 0, {1495, -203}, {8, 129, 0, 255} }},
	{{ {87, 0, -86}, 0, {1495, -375}, {24, 133, 238, 255} }},
	{{ {170, 18, -50}, 0, {1378, -17}, {116, 245, 207, 255} }},
	{{ {138, 0, -17}, 0, {-260, -17}, {25, 132, 242, 255} }},
	{{ {0, 0, -142}, 0, {1788, -375}, {0, 213, 136, 255} }},
	{{ {60, 10, -137}, 0, {1495, -375}, {26, 236, 133, 255} }},
	{{ {0, -1, -86}, 0, {1788, -375}, {0, 129, 3, 255} }},
	{{ {-87, 0, -86}, 0, {1495, -375}, {232, 133, 238, 255} }},
	{{ {-60, 10, -137}, 0, {1495, -375}, {230, 236, 133, 255} }},
	{{ {-170, 18, -50}, 0, {1378, -17}, {140, 245, 207, 255} }},
	{{ {-85, 2, -50}, 0, {1495, -203}, {248, 129, 0, 255} }},
	{{ {-138, 0, -17}, 0, {-260, -17}, {231, 132, 242, 255} }},
	{{ {-88, 36, -115}, 0, {1203, -375}, {219, 73, 159, 255} }},
	{{ {-53, 47, -86}, 0, {1495, -375}, {25, 121, 225, 255} }},
	{{ {0, 28, -104}, 0, {1788, -375}, {0, 118, 209, 255} }},
	{{ {53, 47, -86}, 0, {1495, -375}, {231, 121, 225, 255} }},
	{{ {88, 36, -115}, 0, {1203, -375}, {37, 73, 159, 255} }},
	{{ {-108, 49, -85}, 0, {1378, -529}, {212, 112, 215, 255} }},
	{{ {-141, 34, -38}, 0, {969, -17}, {211, 119, 2, 255} }},
	{{ {-91, 41, -6}, 0, {969, -529}, {212, 114, 35, 255} }},
	{{ {-129, 35, -12}, 0, {559, -17}, {0, 123, 32, 255} }},
	{{ {31, 16, 112}, 0, {859, -17}, {160, 234, 81, 255} }},
	{{ {32, 32, 116}, 0, {864, -17}, {184, 58, 88, 255} }},
	{{ {34, 49, -42}, 0, {864, -385}, {173, 96, 250, 255} }},
	{{ {33, 34, -54}, 0, {859, -375}, {137, 31, 224, 255} }},
	{{ {0, 15, 117}, 0, {-260, -17}, {0, 88, 91, 255} }},
	{{ {92, 20, 109}, 0, {1495, -17}, {221, 35, 117, 255} }},
	{{ {0, 28, -104}, 0, {-260, -375}, {0, 118, 209, 255} }},
	{{ {-92, 20, 109}, 0, {1495, -17}, {35, 35, 117, 255} }},
	{{ {106, 0, 119}, 0, {1495, -17}, {81, 204, 83, 255} }},
	{{ {0, 15, 117}, 0, {1788, -17}, {0, 88, 91, 255} }},
	{{ {0, 0, 119}, 0, {1788, -17}, {0, 172, 95, 255} }},
	{{ {-106, 0, 119}, 0, {1495, -17}, {175, 204, 83, 255} }},
	{{ {0, 0, 119}, 0, {1788, -17}, {0, 172, 95, 255} }},
	{{ {0, 15, 117}, 0, {1788, -17}, {0, 88, 91, 255} }},
	{{ {-92, 20, 109}, 0, {1495, -17}, {35, 35, 117, 255} }},
	{{ {-103, 1, -2}, 0, {1495, -17}, {245, 133, 31, 255} }},
	{{ {0, 2, -40}, 0, {1788, -203}, {0, 129, 3, 255} }},
	{{ {-85, 2, -50}, 0, {1495, -203}, {248, 129, 0, 255} }},
	{{ {-87, 0, -86}, 0, {1495, -312}, {232, 133, 238, 255} }},
	{{ {0, -1, -86}, 0, {1788, -312}, {0, 129, 3, 255} }},
	{{ {87, 0, -86}, 0, {1495, -312}, {24, 133, 238, 255} }},
	{{ {85, 2, -50}, 0, {1495, -203}, {8, 129, 0, 255} }},
	{{ {103, 1, -2}, 0, {1495, -17}, {11, 133, 31, 255} }},
	{{ {106, 0, 119}, 0, {1495, -17}, {81, 204, 83, 255} }},
	{{ {-91, 41, -6}, 0, {559, -529}, {212, 114, 35, 255} }},
	{{ {-103, 1, -2}, 0, {150, -17}, {245, 133, 31, 255} }},
	{{ {-106, 0, 119}, 0, {1203, -17}, {175, 204, 83, 255} }},
	{{ {-129, 35, -12}, 0, {559, -17}, {0, 123, 32, 255} }},
	{{ {-103, 1, -2}, 0, {150, -529}, {245, 133, 31, 255} }},
	{{ {-151, 0, 89}, 0, {-260, -93}, {252, 131, 20, 255} }},
	{{ {-138, 0, -17}, 0, {-260, -529}, {231, 132, 242, 255} }},
	{{ {-122, 13, 91}, 0, {150, -93}, {121, 246, 37, 255} }},
	{{ {-139, 26, 94}, 0, {559, -93}, {39, 121, 7, 255} }},
	{{ {-129, 35, -12}, 0, {559, -529}, {0, 123, 32, 255} }},
	{{ {-141, 34, -38}, 0, {969, -529}, {211, 119, 2, 255} }},
	{{ {-172, 26, 90}, 0, {969, -93}, {210, 118, 10, 255} }},
	{{ {-170, 18, -50}, 0, {1378, -529}, {140, 245, 207, 255} }},
	{{ {-190, 13, 80}, 0, {1378, -93}, {131, 237, 12, 255} }},
	{{ {-151, 0, 89}, 0, {1788, -93}, {252, 131, 20, 255} }},
	{{ {-138, 0, -17}, 0, {1788, -529}, {231, 132, 242, 255} }},
	{{ {-149, 2, 95}, 0, {1788, -17}, {2, 163, 86, 255} }},
	{{ {-185, 12, 88}, 0, {1378, -17}, {170, 200, 75, 255} }},
	{{ {-170, 25, 96}, 0, {969, -17}, {212, 73, 94, 255} }},
	{{ {-185, 12, 88}, 0, {1378, -17}, {170, 200, 75, 255} }},
	{{ {-149, 2, 95}, 0, {1378, -17}, {2, 163, 86, 255} }},
	{{ {-170, 25, 96}, 0, {969, -17}, {212, 73, 94, 255} }},
	{{ {-190, 13, 80}, 0, {1378, -93}, {131, 237, 12, 255} }},
	{{ {-172, 26, 90}, 0, {969, -93}, {210, 118, 10, 255} }},
	{{ {-139, 26, 94}, 0, {559, -93}, {39, 121, 7, 255} }},
	{{ {-138, 25, 100}, 0, {559, -17}, {37, 77, 94, 255} }},
	{{ {-149, 2, 95}, 0, {969, -17}, {2, 163, 86, 255} }},
	{{ {-122, 13, 91}, 0, {150, -93}, {121, 246, 37, 255} }},
	{{ {-125, 12, 95}, 0, {150, -17}, {84, 204, 80, 255} }},
	{{ {-149, 2, 95}, 0, {559, -17}, {2, 163, 86, 255} }},
	{{ {-149, 2, 95}, 0, {-260, -17}, {2, 163, 86, 255} }},
	{{ {-151, 0, 89}, 0, {-260, -93}, {252, 131, 20, 255} }},
	{{ {-91, 41, -6}, 0, {1203, -17}, {212, 114, 35, 255} }},
	{{ {-106, 0, 119}, 0, {1203, -17}, {175, 204, 83, 255} }},
	{{ {-93, 37, 115}, 0, {1033, -17}, {200, 75, 86, 255} }},
	{{ {-92, 20, 109}, 0, {1203, -17}, {35, 35, 117, 255} }},
	{{ {-31, 16, 112}, 0, {1033, -17}, {96, 234, 81, 255} }},
	{{ {-32, 32, 116}, 0, {864, -17}, {72, 58, 88, 255} }},
	{{ {-91, 41, -6}, 0, {1033, -17}, {212, 114, 35, 255} }},
	{{ {-34, 49, -42}, 0, {864, -275}, {83, 96, 250, 255} }},
	{{ {-108, 49, -85}, 0, {1033, -340}, {212, 112, 215, 255} }},
	{{ {-53, 47, -86}, 0, {864, -375}, {25, 121, 225, 255} }},
	{{ {-31, 16, 112}, 0, {859, -17}, {96, 234, 81, 255} }},
	{{ {-34, 49, -42}, 0, {864, -385}, {83, 96, 250, 255} }},
	{{ {-33, 34, -54}, 0, {859, -375}, {119, 31, 224, 255} }},
};

Gfx sans_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(sans_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
	gsSP2Triangles(0, 22, 23, 0, 0, 23, 24, 0),
	gsSP2Triangles(24, 23, 25, 0, 24, 25, 26, 0),
	gsSP2Triangles(27, 24, 26, 0, 27, 26, 28, 0),
	gsSP2Triangles(27, 29, 24, 0, 30, 29, 27, 0),
	gsSP1Triangle(30, 27, 31, 0),
	gsSPVertex(sans_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 0, 4, 0, 4, 0, 5, 0),
	gsSP2Triangles(6, 3, 4, 0, 6, 7, 3, 0),
	gsSP2Triangles(7, 8, 3, 0, 7, 9, 8, 0),
	gsSP2Triangles(8, 1, 3, 0, 8, 10, 1, 0),
	gsSP2Triangles(10, 2, 1, 0, 10, 11, 2, 0),
	gsSP2Triangles(2, 11, 12, 0, 2, 12, 13, 0),
	gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
	gsSP2Triangles(15, 18, 17, 0, 19, 18, 15, 0),
	gsSP2Triangles(20, 19, 15, 0, 20, 21, 19, 0),
	gsSP2Triangles(20, 22, 21, 0, 22, 23, 21, 0),
	gsSP2Triangles(24, 25, 26, 0, 27, 24, 26, 0),
	gsSP2Triangles(27, 26, 28, 0, 29, 27, 28, 0),
	gsSP2Triangles(29, 28, 30, 0, 31, 30, 28, 0),
	gsSPVertex(sans_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 64, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(1, 4, 5, 0, 1, 6, 4, 0),
	gsSP2Triangles(7, 4, 6, 0, 7, 8, 4, 0),
	gsSP2Triangles(7, 9, 8, 0, 10, 9, 7, 0),
	gsSP2Triangles(9, 10, 11, 0, 12, 8, 9, 0),
	gsSP2Triangles(12, 13, 8, 0, 4, 8, 13, 0),
	gsSP2Triangles(4, 13, 14, 0, 4, 14, 15, 0),
	gsSP2Triangles(4, 15, 5, 0, 16, 5, 15, 0),
	gsSP2Triangles(12, 9, 17, 0, 17, 9, 18, 0),
	gsSP2Triangles(17, 18, 19, 0, 19, 18, 20, 0),
	gsSP2Triangles(21, 22, 23, 0, 24, 21, 23, 0),
	gsSP2Triangles(25, 26, 15, 0, 25, 15, 27, 0),
	gsSP2Triangles(25, 27, 13, 0, 25, 13, 28, 0),
	gsSP2Triangles(29, 26, 30, 0, 29, 30, 31, 0),
	gsSPVertex(sans_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 96, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 1, 0, 0, 5, 1, 4, 0),
	gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
	gsSP2Triangles(5, 7, 8, 0, 5, 8, 9, 0),
	gsSP2Triangles(5, 9, 10, 0, 5, 10, 11, 0),
	gsSP2Triangles(5, 11, 1, 0, 11, 12, 1, 0),
	gsSP2Triangles(13, 14, 15, 0, 13, 16, 14, 0),
	gsSP2Triangles(17, 18, 19, 0, 17, 20, 18, 0),
	gsSP2Triangles(21, 20, 17, 0, 21, 17, 22, 0),
	gsSP2Triangles(23, 21, 22, 0, 23, 24, 21, 0),
	gsSP2Triangles(25, 24, 23, 0, 25, 26, 24, 0),
	gsSP2Triangles(27, 26, 25, 0, 27, 25, 28, 0),
	gsSP2Triangles(29, 26, 27, 0, 29, 30, 26, 0),
	gsSP1Triangle(26, 30, 31, 0),
	gsSPVertex(sans_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 128, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
	gsSP2Triangles(2, 5, 4, 0, 2, 6, 5, 0),
	gsSP2Triangles(2, 7, 6, 0, 6, 8, 5, 0),
	gsSP2Triangles(6, 9, 8, 0, 6, 10, 9, 0),
	gsSP2Triangles(8, 9, 11, 0, 8, 11, 12, 0),
	gsSP2Triangles(13, 14, 15, 0, 15, 14, 16, 0),
	gsSP2Triangles(15, 16, 17, 0, 18, 15, 17, 0),
	gsSP2Triangles(19, 15, 18, 0, 19, 18, 20, 0),
	gsSP2Triangles(19, 20, 21, 0, 21, 20, 22, 0),
	gsSP2Triangles(23, 24, 18, 0, 25, 24, 23, 0),
	gsSPEndDisplayList(),
};

Vtx sans_cap_metal_wing_Wings_mesh_layer_4_vtx_0[8] = {
	{{ {-175, -36, -197}, 0, {1008, 2032}, {166, 237, 88, 255} }},
	{{ {-117, -13, -131}, 0, {-16, 2032}, {167, 237, 88, 255} }},
	{{ {-227, 136, -212}, 0, {1008, -16}, {166, 237, 88, 255} }},
	{{ {-169, 160, -147}, 0, {-16, -16}, {166, 237, 88, 255} }},
	{{ {228, 136, -212}, 0, {1008, -16}, {90, 237, 88, 255} }},
	{{ {117, -13, -131}, 0, {-16, 2032}, {89, 237, 88, 255} }},
	{{ {176, -36, -197}, 0, {1008, 2032}, {90, 237, 88, 255} }},
	{{ {169, 160, -147}, 0, {-16, -16}, {90, 237, 88, 255} }},
};

Gfx sans_cap_metal_wing_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(sans_cap_metal_wing_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx sans_cap_metal_wing_Wings_mesh_layer_4_vtx_1[8] = {
	{{ {-117, -13, -131}, 0, {1008, 2032}, {167, 237, 88, 255} }},
	{{ {-58, 10, -68}, 0, {-16, 2032}, {167, 237, 88, 255} }},
	{{ {-169, 160, -147}, 0, {1008, -16}, {166, 237, 88, 255} }},
	{{ {-111, 183, -83}, 0, {-16, -16}, {167, 237, 88, 255} }},
	{{ {169, 160, -147}, 0, {1008, -16}, {90, 237, 88, 255} }},
	{{ {59, 10, -68}, 0, {-16, 2032}, {89, 237, 88, 255} }},
	{{ {117, -13, -131}, 0, {1008, 2032}, {89, 237, 88, 255} }},
	{{ {111, 183, -83}, 0, {-16, -16}, {89, 237, 88, 255} }},
};

Gfx sans_cap_metal_wing_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(sans_cap_metal_wing_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_sans_cap_metal_wing_Metal__METAL_[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, sans_cap_metal_wing_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, sans_cap_metal_wing_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_sans_cap_metal_wing_Metal__METAL_[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_sans_cap_metal_wing_Metal_Wing_Tip[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(sans_cap_metal_wing_Metal_Wing_Tip_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, sans_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, sans_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_sans_cap_metal_wing_Metal_Wing_Tip[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_sans_cap_metal_wing_Metal_Wing_Base[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(sans_cap_metal_wing_Metal_Wing_Base_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, sans_cap_metal_wing_custom_mario_metal_wing_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, sans_cap_metal_wing_custom_mario_metal_wing_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_sans_cap_metal_wing_Metal_Wing_Base[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx sans_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_sans_cap_metal_wing_Metal__METAL_),
	gsSPDisplayList(sans_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_sans_cap_metal_wing_Metal__METAL_),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx sans_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_sans_cap_metal_wing_Metal__METAL_),
	gsSPDisplayList(sans_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_sans_cap_metal_wing_Metal__METAL_),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx sans_cap_metal_wing_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_sans_cap_metal_wing_Metal_Wing_Tip),
	gsSPDisplayList(sans_cap_metal_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_sans_cap_metal_wing_Metal_Wing_Tip),
	gsSPDisplayList(mat_sans_cap_metal_wing_Metal_Wing_Base),
	gsSPDisplayList(sans_cap_metal_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_sans_cap_metal_wing_Metal_Wing_Base),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx sans_cap_metal_wing_Wings_mesh_layer_4_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_sans_cap_metal_wing_Metal__METAL_),
	gsSPDisplayList(sans_cap_metal_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(sans_cap_metal_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_sans_cap_metal_wing_Metal__METAL_),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

