Lights1 noise_cap_metal_wing_Metal_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 noise_cap_metal_wing_Wing_Tip_Metal_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x49, 0x49, 0x49);

Lights1 noise_cap_metal_wing_Wing_Base_Metal_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x49, 0x49, 0x49);

Gfx noise_cap_metal_wing_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 noise_cap_metal_wing_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/noise/Metal_Shade.rgba16.inc.c"
};

Gfx noise_cap_metal_wing_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 noise_cap_metal_wing_Metal_Light_rgba16_rgba16[] = {
	#include "actors/noise/Metal_Light.rgba16.inc.c"
};

Gfx noise_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 noise_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16[] = {
	#include "actors/noise/custom_mario_metal_wing_tip_shade.rgba16.inc.c"
};

Gfx noise_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 noise_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16[] = {
	#include "actors/noise/custom_mario_metal_wing_tip_light.rgba16.inc.c"
};

Gfx noise_cap_metal_wing_custom_mario_metal_wing_shade_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 noise_cap_metal_wing_custom_mario_metal_wing_shade_rgba16[] = {
	#include "actors/noise/custom_mario_metal_wing_shade.rgba16.inc.c"
};

Gfx noise_cap_metal_wing_custom_mario_metal_wing_light_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 noise_cap_metal_wing_custom_mario_metal_wing_light_rgba16[] = {
	#include "actors/noise/custom_mario_metal_wing_light.rgba16.inc.c"
};

Vtx noise_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0[123] = {
	{{ {61, 0, 58}, 0, {-184, 210}, {63, 185, 84, 255} }},
	{{ {0, 37, 68}, 0, {345, 426}, {0, 185, 106, 255} }},
	{{ {0, 0, 82}, 0, {-41, 484}, {0, 193, 110, 255} }},
	{{ {58, 38, 51}, 0, {202, 179}, {63, 176, 76, 255} }},
	{{ {90, 0, 15}, 0, {-241, -43}, {107, 189, 16, 255} }},
	{{ {63, 0, -51}, 0, {-184, -286}, {69, 186, 175, 255} }},
	{{ {0, 0, -70}, 0, {-41, -524}, {0, 183, 152, 255} }},
	{{ {0, 0, 82}, 0, {-41, 484}, {0, 193, 110, 255} }},
	{{ {-61, 0, 58}, 0, {-184, 210}, {193, 185, 84, 255} }},
	{{ {-58, 38, 51}, 0, {202, 179}, {193, 176, 76, 255} }},
	{{ {0, 47, 111}, 0, {711, 451}, {0, 157, 80, 255} }},
	{{ {-89, 47, 80}, 0, {490, 158}, {197, 161, 60, 255} }},
	{{ {-96, 67, 89}, 0, {777, 151}, {173, 35, 89, 255} }},
	{{ {0, 67, 124}, 0, {1130, 438}, {0, 32, 123, 255} }},
	{{ {-75, 80, 67}, 0, {1003, 129}, {232, 122, 25, 255} }},
	{{ {0, 80, 93}, 0, {1418, 344}, {0, 123, 32, 255} }},
	{{ {-51, 82, 42}, 0, {1257, 93}, {2, 127, 254, 255} }},
	{{ {0, 82, 61}, 0, {1630, 239}, {0, 127, 252, 255} }},
	{{ {0, 72, -2}, 0, {1760, -29}, {0, 127, 1, 255} }},
	{{ {-65, 82, -3}, 0, {1242, -36}, {5, 127, 0, 255} }},
	{{ {-51, 82, -44}, 0, {1288, -153}, {2, 127, 2, 255} }},
	{{ {0, 82, -59}, 0, {1698, -274}, {0, 127, 5, 255} }},
	{{ {0, 80, -93}, 0, {1498, -388}, {0, 122, 222, 255} }},
	{{ {-73, 80, -69}, 0, {1054, -197}, {232, 122, 230, 255} }},
	{{ {0, 67, -122}, 0, {1251, -480}, {0, 31, 133, 255} }},
	{{ {-91, 67, -91}, 0, {848, -227}, {177, 34, 163, 255} }},
	{{ {0, 47, -109}, 0, {847, -501}, {0, 155, 179, 255} }},
	{{ {-85, 47, -81}, 0, {563, -239}, {200, 159, 195, 255} }},
	{{ {-57, 39, -46}, 0, {202, -252}, {196, 172, 181, 255} }},
	{{ {0, 39, -63}, 0, {345, -486}, {0, 174, 159, 255} }},
	{{ {0, 0, -70}, 0, {-41, -524}, {0, 183, 152, 255} }},
	{{ {-63, 0, -51}, 0, {-184, -286}, {187, 186, 175, 255} }},
	{{ {-63, 0, -51}, 0, {-184, -286}, {187, 186, 175, 255} }},
	{{ {-81, 39, -1}, 0, {145, -52}, {161, 172, 247, 255} }},
	{{ {-57, 39, -46}, 0, {202, -252}, {196, 172, 181, 255} }},
	{{ {-90, 0, 15}, 0, {-241, -43}, {149, 189, 16, 255} }},
	{{ {-61, 0, 58}, 0, {-184, 210}, {193, 185, 84, 255} }},
	{{ {0, 0, -70}, 0, {-41, -524}, {0, 183, 152, 255} }},
	{{ {-58, 38, 51}, 0, {202, 179}, {193, 176, 76, 255} }},
	{{ {-89, 47, 80}, 0, {490, 158}, {197, 161, 60, 255} }},
	{{ {-123, 47, -3}, 0, {460, -43}, {172, 161, 253, 255} }},
	{{ {-134, 67, -3}, 0, {721, -40}, {135, 37, 253, 255} }},
	{{ {-96, 67, 89}, 0, {777, 151}, {173, 35, 89, 255} }},
	{{ {-75, 80, 67}, 0, {1003, 129}, {232, 122, 25, 255} }},
	{{ {-102, 80, -3}, 0, {969, -38}, {224, 123, 255, 255} }},
	{{ {-51, 82, 42}, 0, {1257, 93}, {2, 127, 254, 255} }},
	{{ {-65, 82, -3}, 0, {1242, -36}, {5, 127, 0, 255} }},
	{{ {-51, 82, -44}, 0, {1288, -153}, {2, 127, 2, 255} }},
	{{ {-73, 80, -69}, 0, {1054, -197}, {232, 122, 230, 255} }},
	{{ {-91, 67, -91}, 0, {848, -227}, {177, 34, 163, 255} }},
	{{ {-85, 47, -81}, 0, {563, -239}, {200, 159, 195, 255} }},
	{{ {58, 38, 51}, 0, {202, 179}, {63, 176, 76, 255} }},
	{{ {0, 47, 111}, 0, {711, 451}, {0, 157, 80, 255} }},
	{{ {0, 37, 68}, 0, {345, 426}, {0, 185, 106, 255} }},
	{{ {89, 47, 80}, 0, {490, 158}, {59, 161, 60, 255} }},
	{{ {81, 39, -1}, 0, {145, -52}, {95, 172, 247, 255} }},
	{{ {90, 0, 15}, 0, {-241, -43}, {107, 189, 16, 255} }},
	{{ {63, 0, -51}, 0, {-184, -286}, {69, 186, 175, 255} }},
	{{ {57, 39, -46}, 0, {202, -252}, {60, 172, 181, 255} }},
	{{ {0, 39, -63}, 0, {345, -486}, {0, 174, 159, 255} }},
	{{ {0, 47, -109}, 0, {847, -501}, {0, 155, 179, 255} }},
	{{ {85, 47, -81}, 0, {563, -239}, {56, 159, 195, 255} }},
	{{ {91, 67, -91}, 0, {848, -227}, {79, 34, 163, 255} }},
	{{ {0, 67, -122}, 0, {1251, -480}, {0, 31, 133, 255} }},
	{{ {0, 67, -122}, 0, {1251, -480}, {0, 31, 133, 255} }},
	{{ {73, 80, -69}, 0, {1054, -197}, {24, 122, 230, 255} }},
	{{ {91, 67, -91}, 0, {848, -227}, {79, 34, 163, 255} }},
	{{ {0, 80, -93}, 0, {1498, -388}, {0, 122, 222, 255} }},
	{{ {51, 82, -44}, 0, {1288, -153}, {254, 127, 2, 255} }},
	{{ {0, 82, -59}, 0, {1698, -274}, {0, 127, 5, 255} }},
	{{ {0, 72, -2}, 0, {1760, -29}, {0, 127, 1, 255} }},
	{{ {65, 82, -3}, 0, {1242, -36}, {251, 127, 0, 255} }},
	{{ {51, 82, 42}, 0, {1257, 93}, {254, 127, 254, 255} }},
	{{ {0, 82, 61}, 0, {1630, 239}, {0, 127, 252, 255} }},
	{{ {0, 80, 93}, 0, {1418, 344}, {0, 123, 32, 255} }},
	{{ {75, 80, 67}, 0, {1003, 129}, {24, 122, 25, 255} }},
	{{ {0, 67, 124}, 0, {1130, 438}, {0, 32, 123, 255} }},
	{{ {96, 67, 89}, 0, {777, 151}, {83, 35, 89, 255} }},
	{{ {0, 47, 111}, 0, {711, 451}, {0, 157, 80, 255} }},
	{{ {89, 47, 80}, 0, {490, 158}, {59, 161, 60, 255} }},
	{{ {134, 67, -3}, 0, {721, -40}, {121, 37, 253, 255} }},
	{{ {123, 47, -3}, 0, {460, -43}, {84, 161, 253, 255} }},
	{{ {81, 39, -1}, 0, {145, -52}, {95, 172, 247, 255} }},
	{{ {85, 47, -81}, 0, {563, -239}, {56, 159, 195, 255} }},
	{{ {57, 39, -46}, 0, {202, -252}, {60, 172, 181, 255} }},
	{{ {102, 80, -3}, 0, {969, -38}, {32, 123, 255, 255} }},
	{{ {168, 6, -58}, 0, {98, 179}, {192, 94, 57, 255} }},
	{{ {135, -9, -35}, 0, {773, 472}, {183, 190, 176, 255} }},
	{{ {137, -3, -31}, 0, {744, 363}, {245, 127, 2, 255} }},
	{{ {167, 1, -63}, 0, {119, 277}, {225, 199, 147, 255} }},
	{{ {176, 26, -70}, 0, {-82, -214}, {245, 2, 130, 255} }},
	{{ {176, 27, -65}, 0, {-77, -237}, {168, 240, 90, 255} }},
	{{ {182, 27, -64}, 0, {-194, -237}, {122, 17, 32, 255} }},
	{{ {172, 1, -57}, 0, {3, 272}, {105, 197, 40, 255} }},
	{{ {141, -9, -28}, 0, {665, 472}, {73, 192, 82, 255} }},
	{{ {90, 0, 15}, 0, {1722, 261}, {165, 13, 88, 255} }},
	{{ {176, 26, -70}, 0, {-82, -214}, {245, 2, 130, 255} }},
	{{ {170, 36, -67}, 0, {47, -426}, {206, 38, 146, 255} }},
	{{ {182, 27, -64}, 0, {-194, -237}, {122, 17, 32, 255} }},
	{{ {176, 27, -65}, 0, {-77, -237}, {168, 240, 90, 255} }},
	{{ {171, 34, -61}, 0, {23, -388}, {244, 145, 61, 255} }},
	{{ {175, 38, -60}, 0, {-54, -473}, {83, 85, 45, 255} }},
	{{ {149, 36, -50}, 0, {487, -421}, {160, 25, 177, 255} }},
	{{ {153, 33, -47}, 0, {412, -369}, {54, 141, 9, 255} }},
	{{ {154, 38, -45}, 0, {381, -471}, {29, 86, 89, 255} }},
	{{ {139, 23, -36}, 0, {692, -163}, {180, 180, 68, 255} }},
	{{ {-168, 6, -58}, 0, {98, 179}, {64, 94, 57, 255} }},
	{{ {-137, -3, -31}, 0, {744, 363}, {11, 127, 2, 255} }},
	{{ {-135, -9, -35}, 0, {773, 472}, {73, 190, 176, 255} }},
	{{ {-172, 1, -57}, 0, {3, 272}, {151, 197, 40, 255} }},
	{{ {-182, 27, -64}, 0, {-194, -237}, {134, 17, 32, 255} }},
	{{ {-176, 27, -65}, 0, {-77, -237}, {88, 240, 90, 255} }},
	{{ {-176, 26, -70}, 0, {-82, -214}, {11, 2, 130, 255} }},
	{{ {-167, 1, -63}, 0, {119, 277}, {31, 199, 147, 255} }},
	{{ {-141, -9, -28}, 0, {665, 472}, {183, 192, 82, 255} }},
	{{ {-90, 0, 15}, 0, {1722, 261}, {91, 13, 88, 255} }},
	{{ {-170, 36, -67}, 0, {47, -426}, {50, 38, 146, 255} }},
	{{ {-175, 38, -60}, 0, {-54, -473}, {173, 85, 45, 255} }},
	{{ {-171, 34, -61}, 0, {23, -388}, {12, 145, 61, 255} }},
	{{ {-149, 36, -50}, 0, {487, -421}, {96, 25, 177, 255} }},
	{{ {-154, 38, -45}, 0, {381, -471}, {227, 86, 89, 255} }},
	{{ {-153, 33, -47}, 0, {412, -369}, {202, 141, 9, 255} }},
	{{ {-139, 23, -36}, 0, {692, -163}, {76, 180, 68, 255} }},
};

Gfx noise_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(noise_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 0, 5, 0),
	gsSP2Triangles(6, 5, 0, 0, 0, 7, 6, 0),
	gsSP2Triangles(7, 8, 6, 0, 8, 7, 1, 0),
	gsSP2Triangles(8, 1, 9, 0, 9, 1, 10, 0),
	gsSP2Triangles(9, 10, 11, 0, 10, 12, 11, 0),
	gsSP2Triangles(10, 13, 12, 0, 13, 14, 12, 0),
	gsSP2Triangles(13, 15, 14, 0, 15, 16, 14, 0),
	gsSP2Triangles(15, 17, 16, 0, 17, 18, 16, 0),
	gsSP2Triangles(16, 18, 19, 0, 19, 18, 20, 0),
	gsSP2Triangles(20, 18, 21, 0, 22, 20, 21, 0),
	gsSP2Triangles(22, 23, 20, 0, 24, 23, 22, 0),
	gsSP2Triangles(24, 25, 23, 0, 26, 25, 24, 0),
	gsSP2Triangles(26, 27, 25, 0, 28, 27, 26, 0),
	gsSP2Triangles(28, 26, 29, 0, 30, 28, 29, 0),
	gsSP1Triangle(30, 31, 28, 0),
	gsSPVertex(noise_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 5, 4, 0, 0),
	gsSP2Triangles(3, 4, 6, 0, 3, 6, 1, 0),
	gsSP2Triangles(1, 6, 7, 0, 1, 7, 8, 0),
	gsSP2Triangles(7, 9, 8, 0, 7, 10, 9, 0),
	gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
	gsSP2Triangles(12, 11, 13, 0, 12, 13, 14, 0),
	gsSP2Triangles(12, 14, 15, 0, 12, 15, 16, 0),
	gsSP2Triangles(9, 12, 16, 0, 9, 16, 17, 0),
	gsSP2Triangles(18, 9, 17, 0, 18, 8, 9, 0),
	gsSP2Triangles(1, 8, 18, 0, 1, 18, 2, 0),
	gsSP2Triangles(19, 20, 21, 0, 19, 22, 20, 0),
	gsSP2Triangles(23, 22, 19, 0, 24, 23, 19, 0),
	gsSP2Triangles(25, 23, 24, 0, 25, 26, 23, 0),
	gsSP2Triangles(5, 26, 25, 0, 5, 27, 26, 0),
	gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
	gsSP2Triangles(28, 30, 29, 0, 28, 31, 30, 0),
	gsSPVertex(noise_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 64, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
	gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
	gsSP2Triangles(8, 7, 6, 0, 9, 8, 6, 0),
	gsSP2Triangles(10, 8, 9, 0, 10, 11, 8, 0),
	gsSP2Triangles(12, 11, 10, 0, 12, 13, 11, 0),
	gsSP2Triangles(14, 13, 12, 0, 14, 15, 13, 0),
	gsSP2Triangles(15, 16, 13, 0, 15, 17, 16, 0),
	gsSP2Triangles(18, 17, 15, 0, 18, 19, 17, 0),
	gsSP2Triangles(18, 20, 19, 0, 19, 16, 17, 0),
	gsSP2Triangles(19, 2, 16, 0, 16, 2, 1, 0),
	gsSP2Triangles(16, 1, 21, 0, 21, 1, 4, 0),
	gsSP2Triangles(21, 4, 7, 0, 21, 7, 8, 0),
	gsSP2Triangles(21, 8, 11, 0, 16, 21, 11, 0),
	gsSP2Triangles(16, 11, 13, 0, 22, 23, 24, 0),
	gsSP2Triangles(22, 25, 23, 0, 22, 26, 25, 0),
	gsSP2Triangles(22, 27, 26, 0, 28, 27, 22, 0),
	gsSP2Triangles(28, 22, 29, 0, 29, 22, 24, 0),
	gsSP2Triangles(29, 24, 30, 0, 30, 24, 31, 0),
	gsSP2Triangles(24, 23, 31, 0, 23, 30, 31, 0),
	gsSP2Triangles(23, 29, 30, 0, 23, 25, 29, 0),
	gsSP2Triangles(25, 28, 29, 0, 25, 26, 28, 0),
	gsSPVertex(noise_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 96, 27, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 4, 1, 0, 5, 4, 3, 0),
	gsSP2Triangles(5, 3, 2, 0, 1, 5, 2, 0),
	gsSP2Triangles(6, 5, 1, 0, 4, 6, 1, 0),
	gsSP2Triangles(4, 7, 6, 0, 8, 7, 4, 0),
	gsSP2Triangles(8, 4, 5, 0, 6, 8, 5, 0),
	gsSP2Triangles(6, 9, 8, 0, 9, 6, 7, 0),
	gsSP2Triangles(9, 7, 8, 0, 10, 11, 12, 0),
	gsSP2Triangles(13, 11, 10, 0, 14, 13, 10, 0),
	gsSP2Triangles(14, 10, 15, 0, 10, 16, 15, 0),
	gsSP2Triangles(10, 17, 16, 0, 10, 12, 17, 0),
	gsSP2Triangles(12, 13, 17, 0, 12, 18, 13, 0),
	gsSP2Triangles(18, 12, 19, 0, 12, 11, 19, 0),
	gsSP2Triangles(11, 18, 19, 0, 13, 18, 11, 0),
	gsSP2Triangles(17, 13, 14, 0, 17, 14, 16, 0),
	gsSP2Triangles(16, 14, 20, 0, 20, 14, 21, 0),
	gsSP2Triangles(21, 14, 15, 0, 21, 15, 22, 0),
	gsSP2Triangles(15, 20, 22, 0, 15, 16, 20, 0),
	gsSP2Triangles(22, 20, 23, 0, 23, 20, 21, 0),
	gsSP2Triangles(23, 21, 24, 0, 24, 21, 22, 0),
	gsSP2Triangles(24, 22, 25, 0, 22, 23, 25, 0),
	gsSP2Triangles(26, 25, 23, 0, 23, 24, 26, 0),
	gsSP1Triangle(26, 24, 25, 0),
	gsSPEndDisplayList(),
};

Vtx noise_cap_metal_wing_Wings_mesh_layer_4_vtx_0[8] = {
	{{ {147, -27, -42}, 0, {-16, 1978}, {90, 76, 48, 255} }},
	{{ {217, -66, -111}, 0, {974, 1978}, {90, 76, 48, 255} }},
	{{ {163, 85, -250}, 0, {974, -34}, {90, 76, 48, 255} }},
	{{ {94, 124, -181}, 0, {-16, -34}, {90, 76, 48, 255} }},
	{{ {-147, -27, -42}, 0, {-16, 1978}, {90, 180, 208, 255} }},
	{{ {-217, -66, -111}, 0, {974, 1978}, {90, 180, 208, 255} }},
	{{ {-163, 85, -250}, 0, {974, -34}, {90, 180, 208, 255} }},
	{{ {-94, 124, -181}, 0, {-16, -34}, {90, 180, 208, 255} }},
};

Gfx noise_cap_metal_wing_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(noise_cap_metal_wing_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Vtx noise_cap_metal_wing_Wings_mesh_layer_4_vtx_1[8] = {
	{{ {25, 163, -112}, 0, {-16, -34}, {90, 76, 48, 255} }},
	{{ {78, 12, 27}, 0, {-16, 1978}, {90, 76, 48, 255} }},
	{{ {147, -27, -42}, 0, {974, 1978}, {90, 76, 48, 255} }},
	{{ {94, 124, -181}, 0, {974, -34}, {90, 76, 48, 255} }},
	{{ {-25, 163, -112}, 0, {-16, -34}, {90, 180, 208, 255} }},
	{{ {-147, -27, -42}, 0, {974, 1978}, {90, 180, 208, 255} }},
	{{ {-94, 124, -181}, 0, {974, -34}, {90, 180, 208, 255} }},
	{{ {-78, 12, 27}, 0, {-16, 1978}, {90, 180, 208, 255} }},
};

Gfx noise_cap_metal_wing_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(noise_cap_metal_wing_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_noise_cap_metal_wing_Metal[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, noise_cap_metal_wing_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, noise_cap_metal_wing_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_noise_cap_metal_wing_Metal[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_noise_cap_metal_wing_Wing_Tip_Metal[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(noise_cap_metal_wing_Wing_Tip_Metal_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, noise_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, noise_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_noise_cap_metal_wing_Wing_Tip_Metal[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_noise_cap_metal_wing_Wing_Base_Metal[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(noise_cap_metal_wing_Wing_Base_Metal_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, noise_cap_metal_wing_custom_mario_metal_wing_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, noise_cap_metal_wing_custom_mario_metal_wing_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_noise_cap_metal_wing_Wing_Base_Metal[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx noise_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_noise_cap_metal_wing_Metal),
	gsSPDisplayList(noise_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_noise_cap_metal_wing_Metal),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx noise_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_mat_override_Metal_0[] = {
	gsSPDisplayList(mat_noise_cap_metal_wing_Metal),
	gsSPDisplayList(noise_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_noise_cap_metal_wing_Metal),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx noise_cap_metal_wing_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_noise_cap_metal_wing_Wing_Tip_Metal),
	gsSPDisplayList(noise_cap_metal_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_noise_cap_metal_wing_Wing_Tip_Metal),
	gsSPDisplayList(mat_noise_cap_metal_wing_Wing_Base_Metal),
	gsSPDisplayList(noise_cap_metal_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_noise_cap_metal_wing_Wing_Base_Metal),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx noise_cap_metal_wing_Wings_mesh_layer_4_mat_override_Metal_0[] = {
	gsSPDisplayList(mat_noise_cap_metal_wing_Metal),
	gsSPDisplayList(noise_cap_metal_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(noise_cap_metal_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_noise_cap_metal_wing_Metal),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

