Lights1 maurice_cap_wing_CAP_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 maurice_cap_wing_UNDERCAP_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 maurice_cap_wing_Metal_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Gfx maurice_cap_wing_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 maurice_cap_wing_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/maurice/Metal_Shade.rgba16.inc.c"
};

Gfx maurice_cap_wing_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 maurice_cap_wing_Metal_Light_rgba16_rgba16[] = {
	#include "actors/maurice/Metal_Light.rgba16.inc.c"
};

Gfx maurice_cap_wing_wing_2_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 maurice_cap_wing_wing_2_rgba16[] = {
	#include "actors/maurice/wing_2.rgba16.inc.c"
};

Gfx maurice_cap_wing_wing1_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 maurice_cap_wing_wing1_rgba16[] = {
	#include "actors/maurice/wing1.rgba16.inc.c"
};

Vtx maurice_cap_wing_Wing_Cap_mesh_layer_1_vtx_0[75] = {
	{{ {70, 36, -60}, 0, {491, 322}, {72, 178, 187, 255} }},
	{{ {69, -1, -63}, 0, {659, 322}, {77, 178, 192, 255} }},
	{{ {0, -1, -97}, 0, {573, -4}, {0, 183, 152, 255} }},
	{{ {0, 39, -92}, 0, {427, -4}, {0, 189, 148, 255} }},
	{{ {-70, 36, -60}, 0, {491, 322}, {184, 178, 187, 255} }},
	{{ {-69, -1, -63}, 0, {659, 322}, {179, 178, 192, 255} }},
	{{ {0, 53, -117}, 0, {310, -4}, {0, 172, 161, 255} }},
	{{ {93, 50, -79}, 0, {382, 322}, {63, 169, 189, 255} }},
	{{ {101, 69, -86}, 0, {310, 325}, {91, 22, 170, 255} }},
	{{ {0, 73, -127}, 0, {205, 5}, {0, 37, 134, 255} }},
	{{ {-101, 69, -86}, 0, {310, 325}, {165, 22, 170, 255} }},
	{{ {-93, 50, -79}, 0, {382, 322}, {193, 169, 189, 255} }},
	{{ {-125, 42, 6}, 0, {398, 545}, {174, 159, 254, 255} }},
	{{ {-86, 30, 4}, 0, {506, 545}, {165, 167, 1, 255} }},
	{{ {-69, -1, -63}, 0, {659, 321}, {179, 178, 192, 255} }},
	{{ {-79, 35, 89}, 0, {349, 751}, {203, 151, 47, 255} }},
	{{ {-59, 25, 62}, 0, {462, 751}, {183, 176, 66, 255} }},
	{{ {-82, -1, 11}, 0, {643, 545}, {165, 169, 15, 255} }},
	{{ {-69, -1, -63}, 0, {670, 316}, {179, 178, 192, 255} }},
	{{ {-64, -1, 63}, 0, {614, 751}, {179, 186, 73, 255} }},
	{{ {0, -1, 86}, 0, {535, 997}, {0, 174, 97, 255} }},
	{{ {0, 23, 87}, 0, {410, 997}, {0, 169, 92, 255} }},
	{{ {59, 25, 62}, 0, {462, 751}, {73, 176, 66, 255} }},
	{{ {64, -1, 63}, 0, {614, 751}, {77, 186, 73, 255} }},
	{{ {82, -1, 11}, 0, {643, 545}, {91, 169, 15, 255} }},
	{{ {86, 30, 4}, 0, {506, 545}, {91, 167, 1, 255} }},
	{{ {69, -1, -63}, 0, {670, 316}, {77, 178, 192, 255} }},
	{{ {79, 35, 89}, 0, {349, 751}, {53, 151, 47, 255} }},
	{{ {125, 42, 6}, 0, {398, 545}, {82, 159, 254, 255} }},
	{{ {69, -1, -63}, 0, {659, 321}, {77, 178, 192, 255} }},
	{{ {138, 61, 8}, 0, {315, 546}, {126, 11, 8, 255} }},
	{{ {109, 89, 10}, 0, {239, 540}, {49, 116, 13, 255} }},
	{{ {101, 69, -86}, 0, {310, 325}, {91, 22, 170, 255} }},
	{{ {79, 91, -74}, 0, {228, 336}, {29, 119, 221, 255} }},
	{{ {109, 89, 10}, 0, {239, 540}, {49, 116, 13, 255} }},
	{{ {0, 73, -127}, 0, {205, 5}, {0, 37, 134, 255} }},
	{{ {0, 80, -109}, 0, {89, 52}, {0, 124, 229, 255} }},
	{{ {-79, 91, -74}, 0, {228, 336}, {227, 119, 221, 255} }},
	{{ {-101, 69, -86}, 0, {310, 325}, {165, 22, 170, 255} }},
	{{ {-109, 89, 10}, 0, {239, 540}, {207, 116, 13, 255} }},
	{{ {-138, 61, 8}, 0, {315, 546}, {130, 11, 8, 255} }},
	{{ {-93, 50, -79}, 0, {382, 322}, {193, 169, 189, 255} }},
	{{ {-125, 42, 6}, 0, {398, 545}, {174, 159, 254, 255} }},
	{{ {-79, 35, 89}, 0, {349, 751}, {203, 151, 47, 255} }},
	{{ {-87, 53, 106}, 0, {264, 735}, {176, 1, 99, 255} }},
	{{ {0, 33, 116}, 0, {286, 997}, {0, 149, 69, 255} }},
	{{ {0, 23, 87}, 0, {410, 997}, {0, 169, 92, 255} }},
	{{ {-59, 25, 62}, 0, {462, 751}, {183, 176, 66, 255} }},
	{{ {79, 35, 89}, 0, {349, 751}, {53, 151, 47, 255} }},
	{{ {87, 53, 106}, 0, {264, 735}, {80, 1, 99, 255} }},
	{{ {138, 61, 8}, 0, {315, 546}, {126, 11, 8, 255} }},
	{{ {125, 42, 6}, 0, {398, 545}, {82, 159, 254, 255} }},
	{{ {69, 75, 90}, 0, {192, 715}, {23, 114, 51, 255} }},
	{{ {66, 83, 9}, 0, {144, 526}, {234, 125, 11, 255} }},
	{{ {48, 85, -44}, 0, {123, 362}, {234, 125, 11, 255} }},
	{{ {0, 78, -65}, 0, {2, 193}, {0, 126, 12, 255} }},
	{{ {-48, 85, -44}, 0, {123, 362}, {22, 125, 11, 255} }},
	{{ {-66, 83, 9}, 0, {144, 526}, {22, 125, 11, 255} }},
	{{ {-69, 75, 90}, 0, {192, 715}, {233, 114, 51, 255} }},
	{{ {0, 50, 134}, 0, {170, 986}, {0, 10, 127, 255} }},
	{{ {0, 60, 115}, 0, {59, 926}, {0, 119, 44, 255} }},
	{{ {0, 66, 71}, 0, {2, 787}, {0, 127, 10, 255} }},
	{{ {43, 75, 56}, 0, {102, 659}, {234, 125, 10, 255} }},
	{{ {0, 66, 3}, 0, {2, 496}, {0, 127, 11, 255} }},
	{{ {-66, 83, 9}, 0, {144, 526}, {22, 125, 11, 255} }},
	{{ {-43, 75, 56}, 0, {102, 659}, {22, 125, 10, 255} }},
	{{ {0, 66, 3}, 0, {2, 496}, {0, 127, 11, 255} }},
	{{ {-69, 75, 90}, 0, {192, 715}, {233, 114, 51, 255} }},
	{{ {0, 66, 71}, 0, {2, 787}, {0, 127, 10, 255} }},
	{{ {0, 60, 115}, 0, {59, 926}, {0, 119, 44, 255} }},
	{{ {0, 50, 134}, 0, {170, 986}, {0, 10, 127, 255} }},
	{{ {43, 75, 56}, 0, {102, 659}, {234, 125, 10, 255} }},
	{{ {79, 35, 89}, 0, {349, 751}, {53, 151, 47, 255} }},
	{{ {0, 23, 87}, 0, {410, 997}, {0, 169, 92, 255} }},
	{{ {59, 25, 62}, 0, {462, 751}, {73, 176, 66, 255} }},
};

Gfx maurice_cap_wing_Wing_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(maurice_cap_wing_Wing_Cap_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
	gsSP2Triangles(6, 3, 4, 0, 6, 0, 3, 0),
	gsSP2Triangles(6, 7, 0, 0, 8, 7, 6, 0),
	gsSP2Triangles(8, 6, 9, 0, 10, 9, 6, 0),
	gsSP2Triangles(10, 6, 11, 0, 6, 4, 11, 0),
	gsSP2Triangles(4, 12, 11, 0, 4, 13, 12, 0),
	gsSP2Triangles(14, 13, 4, 0, 13, 15, 12, 0),
	gsSP2Triangles(13, 16, 15, 0, 17, 16, 13, 0),
	gsSP2Triangles(18, 17, 13, 0, 17, 19, 16, 0),
	gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
	gsSP2Triangles(22, 21, 20, 0, 22, 20, 23, 0),
	gsSP2Triangles(24, 22, 23, 0, 24, 25, 22, 0),
	gsSP2Triangles(26, 25, 24, 0, 25, 27, 22, 0),
	gsSP2Triangles(25, 28, 27, 0, 0, 28, 25, 0),
	gsSP2Triangles(29, 0, 25, 0, 0, 7, 28, 0),
	gsSP2Triangles(7, 30, 28, 0, 7, 8, 30, 0),
	gsSP1Triangle(8, 31, 30, 0),
	gsSPVertex(maurice_cap_wing_Wing_Cap_mesh_layer_1_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(1, 3, 4, 0, 5, 4, 3, 0),
	gsSP2Triangles(5, 3, 6, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 8, 7, 0, 9, 8, 6, 0),
	gsSP2Triangles(9, 10, 8, 0, 8, 10, 11, 0),
	gsSP2Triangles(8, 11, 12, 0, 12, 11, 13, 0),
	gsSP2Triangles(11, 14, 13, 0, 11, 15, 14, 0),
	gsSP2Triangles(16, 13, 14, 0, 17, 13, 16, 0),
	gsSP2Triangles(18, 17, 16, 0, 18, 16, 19, 0),
	gsSP2Triangles(2, 17, 18, 0, 2, 20, 17, 0),
	gsSP2Triangles(21, 20, 2, 0, 2, 22, 21, 0),
	gsSP2Triangles(2, 1, 22, 0, 1, 23, 22, 0),
	gsSP2Triangles(1, 4, 23, 0, 5, 23, 4, 0),
	gsSP2Triangles(5, 24, 23, 0, 7, 24, 5, 0),
	gsSP2Triangles(7, 25, 24, 0, 25, 7, 26, 0),
	gsSP2Triangles(7, 12, 26, 0, 7, 8, 12, 0),
	gsSP2Triangles(26, 12, 27, 0, 12, 13, 27, 0),
	gsSP2Triangles(17, 27, 13, 0, 20, 27, 17, 0),
	gsSP2Triangles(20, 28, 27, 0, 20, 29, 28, 0),
	gsSP2Triangles(20, 30, 29, 0, 21, 30, 20, 0),
	gsSP2Triangles(21, 31, 30, 0, 21, 22, 31, 0),
	gsSP2Triangles(22, 23, 31, 0, 24, 31, 23, 0),
	gsSP1Triangle(25, 31, 24, 0),
	gsSPVertex(maurice_cap_wing_Wing_Cap_mesh_layer_1_vtx_0 + 64, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
	gsSP2Triangles(3, 6, 5, 0, 1, 4, 2, 0),
	gsSP2Triangles(7, 2, 4, 0, 8, 9, 10, 0),
	gsSPEndDisplayList(),
};

Vtx maurice_cap_wing_Wing_Cap_mesh_layer_1_vtx_1[8] = {
	{{ {0, -1, -97}, 0, {573, -4}, {0, 183, 152, 255} }},
	{{ {69, -1, -63}, 0, {670, 316}, {77, 178, 192, 255} }},
	{{ {82, -1, 11}, 0, {643, 545}, {91, 169, 15, 255} }},
	{{ {-82, -1, 11}, 0, {643, 545}, {165, 169, 15, 255} }},
	{{ {0, -1, 86}, 0, {535, 997}, {0, 174, 97, 255} }},
	{{ {64, -1, 63}, 0, {614, 751}, {77, 186, 73, 255} }},
	{{ {-64, -1, 63}, 0, {614, 751}, {179, 186, 73, 255} }},
	{{ {-69, -1, -63}, 0, {670, 316}, {179, 178, 192, 255} }},
};

Gfx maurice_cap_wing_Wing_Cap_mesh_layer_1_tri_1[] = {
	gsSPVertex(maurice_cap_wing_Wing_Cap_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
	gsSP2Triangles(4, 6, 3, 0, 3, 7, 0, 0),
	gsSPEndDisplayList(),
};

Vtx maurice_cap_wing_Wings_mesh_layer_4_vtx_0[8] = {
	{{ {126, -27, -65}, 0, {-16, 1978}, {90, 71, 54, 255} }},
	{{ {196, -60, -137}, 0, {974, 1978}, {90, 72, 54, 255} }},
	{{ {142, 102, -263}, 0, {974, -34}, {90, 71, 54, 255} }},
	{{ {73, 135, -191}, 0, {-16, -34}, {90, 71, 54, 255} }},
	{{ {-126, -27, -65}, 0, {-16, 1978}, {166, 71, 54, 255} }},
	{{ {-142, 102, -263}, 0, {974, -34}, {166, 71, 54, 255} }},
	{{ {-196, -60, -137}, 0, {974, 1978}, {166, 72, 54, 255} }},
	{{ {-73, 135, -191}, 0, {-16, -34}, {166, 71, 54, 255} }},
};

Gfx maurice_cap_wing_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(maurice_cap_wing_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx maurice_cap_wing_Wings_mesh_layer_4_vtx_1[8] = {
	{{ {4, 168, -118}, 0, {-16, -34}, {90, 71, 54, 255} }},
	{{ {126, -27, -65}, 0, {974, 1978}, {90, 71, 54, 255} }},
	{{ {73, 135, -191}, 0, {974, -34}, {90, 71, 54, 255} }},
	{{ {57, 6, 7}, 0, {-16, 1978}, {90, 71, 54, 255} }},
	{{ {-4, 168, -118}, 0, {-16, -34}, {166, 71, 54, 255} }},
	{{ {-73, 135, -191}, 0, {974, -34}, {166, 71, 54, 255} }},
	{{ {-126, -27, -65}, 0, {974, 1978}, {166, 71, 54, 255} }},
	{{ {-57, 6, 7}, 0, {-16, 1978}, {166, 71, 54, 255} }},
};

Gfx maurice_cap_wing_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(maurice_cap_wing_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_maurice_cap_wing_CAP[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_maurice_cap_wing_UNDERCAP[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, ENVIRONMENT, SHADE, 0, PRIMITIVE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 115, 115, 115, 255),
	gsSPEndDisplayList(),
};

Gfx mat_maurice_cap_wing_Metal[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, maurice_cap_wing_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, maurice_cap_wing_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_maurice_cap_wing_Metal[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_maurice_cap_wing_Wing_Tip[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, maurice_cap_wing_wing_2_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_maurice_cap_wing_Wing_Tip[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_maurice_cap_wing_Wing_Base[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, maurice_cap_wing_wing1_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_maurice_cap_wing_Wing_Base[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx maurice_cap_wing_Wing_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_maurice_cap_wing_CAP),
	gsSPDisplayList(maurice_cap_wing_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_maurice_cap_wing_UNDERCAP),
	gsSPDisplayList(maurice_cap_wing_Wing_Cap_mesh_layer_1_tri_1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx maurice_cap_wing_Wing_Cap_mesh_layer_1_mat_override_Metal_0[] = {
	gsSPDisplayList(mat_maurice_cap_wing_Metal),
	gsSPDisplayList(maurice_cap_wing_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(maurice_cap_wing_Wing_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_maurice_cap_wing_Metal),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx maurice_cap_wing_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_maurice_cap_wing_Wing_Tip),
	gsSPDisplayList(maurice_cap_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_maurice_cap_wing_Wing_Tip),
	gsSPDisplayList(mat_maurice_cap_wing_Wing_Base),
	gsSPDisplayList(maurice_cap_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_maurice_cap_wing_Wing_Base),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx maurice_cap_wing_Wings_mesh_layer_4_mat_override_Metal_0[] = {
	gsSPDisplayList(mat_maurice_cap_wing_Wing_Tip),
	gsSPDisplayList(maurice_cap_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_maurice_cap_wing_Wing_Tip),
	gsSPDisplayList(mat_maurice_cap_wing_Wing_Base),
	gsSPDisplayList(maurice_cap_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_maurice_cap_wing_Wing_Base),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

