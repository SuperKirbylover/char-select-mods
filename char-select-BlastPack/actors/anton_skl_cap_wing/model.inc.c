Lights1 anton_skl_cap_wing_Cap__CAP__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 anton_skl_cap_wing_Metal__METAL__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Gfx anton_skl_cap_wing_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 anton_skl_cap_wing_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/anton_skl/Metal_Shade.rgba16.inc.c"
};

Gfx anton_skl_cap_wing_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 anton_skl_cap_wing_Metal_Light_rgba16_rgba16[] = {
	#include "actors/anton_skl/Metal_Light.rgba16.inc.c"
};

Gfx anton_skl_cap_wing_wing_2_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 anton_skl_cap_wing_wing_2_rgba16[] = {
	#include "actors/anton_skl/wing_2.rgba16.inc.c"
};

Gfx anton_skl_cap_wing_wing1_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 anton_skl_cap_wing_wing1_rgba16[] = {
	#include "actors/anton_skl/wing1.rgba16.inc.c"
};

Vtx anton_skl_cap_wing_Wing_Cap_mesh_layer_1_vtx_0[60] = {
	{{ {0, 51, -47}, 0, {598, 240}, {0, 90, 166, 255} }},
	{{ {0, 62, -13}, 0, {496, -16}, {0, 127, 0, 255} }},
	{{ {32, 51, -24}, 0, {394, 240}, {85, 90, 228, 255} }},
	{{ {41, 35, -26}, 0, {394, 496}, {119, 24, 217, 255} }},
	{{ {25, 35, 21}, 0, {189, 496}, {73, 24, 101, 255} }},
	{{ {20, 51, 14}, 0, {189, 240}, {53, 90, 73, 255} }},
	{{ {0, 62, -13}, 0, {291, -16}, {0, 127, 0, 255} }},
	{{ {-20, 51, 14}, 0, {-16, 240}, {203, 90, 73, 255} }},
	{{ {0, 62, -13}, 0, {86, -16}, {0, 127, 0, 255} }},
	{{ {-25, 35, 21}, 0, {-16, 496}, {183, 24, 101, 255} }},
	{{ {-24, 16, 20}, 0, {-16, 752}, {216, 107, 55, 255} }},
	{{ {24, 16, 20}, 0, {189, 752}, {40, 107, 55, 255} }},
	{{ {39, 16, -26}, 0, {394, 752}, {119, 255, 210, 255} }},
	{{ {0, 35, -56}, 0, {598, 496}, {0, 24, 131, 255} }},
	{{ {0, 16, -54}, 0, {598, 752}, {0, 250, 129, 255} }},
	{{ {0, 8, -54}, 0, {598, 752}, {0, 180, 154, 255} }},
	{{ {39, 8, -26}, 0, {394, 752}, {92, 179, 215, 255} }},
	{{ {33, 16, 28}, 0, {400, 1008}, {90, 83, 35, 255} }},
	{{ {33, 8, 28}, 0, {400, 1008}, {90, 173, 35, 255} }},
	{{ {16, 16, 51}, 0, {400, 1008}, {45, 78, 89, 255} }},
	{{ {16, 8, 51}, 0, {400, 1008}, {45, 178, 89, 255} }},
	{{ {-16, 8, 51}, 0, {400, 1008}, {211, 178, 89, 255} }},
	{{ {-16, 16, 51}, 0, {400, 1008}, {211, 78, 89, 255} }},
	{{ {-33, 16, 28}, 0, {400, 1008}, {166, 83, 35, 255} }},
	{{ {-33, 8, 28}, 0, {400, 1008}, {166, 173, 35, 255} }},
	{{ {-39, 8, -26}, 0, {803, 752}, {164, 179, 215, 255} }},
	{{ {-39, 16, -26}, 0, {803, 752}, {137, 255, 210, 255} }},
	{{ {-41, 35, -26}, 0, {803, 496}, {137, 24, 217, 255} }},
	{{ {-25, 35, 21}, 0, {1008, 496}, {183, 24, 101, 255} }},
	{{ {-24, 16, 20}, 0, {1008, 752}, {216, 107, 55, 255} }},
	{{ {-20, 51, 14}, 0, {1008, 240}, {203, 90, 73, 255} }},
	{{ {-32, 51, -24}, 0, {803, 240}, {171, 90, 228, 255} }},
	{{ {-20, 51, 14}, 0, {1008, 240}, {203, 90, 73, 255} }},
	{{ {0, 62, -13}, 0, {905, -16}, {0, 127, 0, 255} }},
	{{ {-32, 51, -24}, 0, {803, 240}, {171, 90, 228, 255} }},
	{{ {0, 35, -56}, 0, {598, 496}, {0, 24, 131, 255} }},
	{{ {-41, 35, -26}, 0, {803, 496}, {137, 24, 217, 255} }},
	{{ {0, 51, -47}, 0, {598, 240}, {0, 90, 166, 255} }},
	{{ {0, 62, -13}, 0, {701, -16}, {0, 127, 0, 255} }},
	{{ {41, 35, -26}, 0, {394, 496}, {119, 24, 217, 255} }},
	{{ {0, 16, -54}, 0, {598, 752}, {0, 250, 129, 255} }},
	{{ {0, 8, -54}, 0, {598, 752}, {0, 180, 154, 255} }},
	{{ {-39, 8, -26}, 0, {803, 752}, {164, 179, 215, 255} }},
	{{ {24, 16, 20}, 0, {400, 1008}, {0, 127, 0, 255} }},
	{{ {33, 16, 28}, 0, {400, 1008}, {0, 127, 0, 255} }},
	{{ {39, 16, -26}, 0, {394, 752}, {0, 127, 0, 255} }},
	{{ {-33, 16, 28}, 0, {400, 1008}, {0, 127, 0, 255} }},
	{{ {-24, 16, 20}, 0, {400, 1008}, {0, 127, 0, 255} }},
	{{ {-39, 16, -26}, 0, {803, 752}, {0, 127, 0, 255} }},
	{{ {-16, 16, 51}, 0, {400, 1008}, {0, 127, 0, 255} }},
	{{ {16, 16, 51}, 0, {400, 1008}, {0, 127, 0, 255} }},
	{{ {-39, 8, -26}, 0, {803, 752}, {0, 129, 0, 255} }},
	{{ {0, 8, -54}, 0, {598, 752}, {0, 129, 0, 255} }},
	{{ {39, 8, -26}, 0, {394, 752}, {0, 129, 0, 255} }},
	{{ {-33, 8, 28}, 0, {400, 1008}, {0, 129, 0, 255} }},
	{{ {33, 8, 28}, 0, {189, 752}, {0, 129, 0, 255} }},
	{{ {33, 8, 28}, 0, {1008, 803}, {0, 129, 0, 255} }},
	{{ {-16, 8, 51}, 0, {1008, 1008}, {0, 129, 0, 255} }},
	{{ {-33, 8, 28}, 0, {1008, 1008}, {0, 129, 0, 255} }},
	{{ {16, 8, 51}, 0, {1008, 803}, {0, 129, 0, 255} }},
};

Gfx anton_skl_cap_wing_Wing_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(anton_skl_cap_wing_Wing_Cap_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
	gsSP2Triangles(2, 6, 5, 0, 4, 5, 7, 0),
	gsSP2Triangles(5, 8, 7, 0, 4, 7, 9, 0),
	gsSP2Triangles(4, 9, 10, 0, 4, 10, 11, 0),
	gsSP2Triangles(3, 4, 11, 0, 3, 11, 12, 0),
	gsSP2Triangles(13, 3, 12, 0, 13, 12, 14, 0),
	gsSP2Triangles(12, 15, 14, 0, 12, 16, 15, 0),
	gsSP2Triangles(16, 12, 17, 0, 16, 17, 18, 0),
	gsSP2Triangles(19, 18, 17, 0, 19, 20, 18, 0),
	gsSP2Triangles(21, 20, 19, 0, 21, 19, 22, 0),
	gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
	gsSP2Triangles(25, 24, 23, 0, 25, 23, 26, 0),
	gsSP2Triangles(14, 25, 26, 0, 27, 14, 26, 0),
	gsSP2Triangles(28, 27, 26, 0, 28, 26, 29, 0),
	gsSP2Triangles(30, 27, 28, 0, 30, 31, 27, 0),
	gsSPVertex(anton_skl_cap_wing_Wing_Cap_mesh_layer_1_vtx_0 + 32, 28, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
	gsSP2Triangles(2, 5, 3, 0, 2, 6, 5, 0),
	gsSP2Triangles(5, 7, 3, 0, 4, 3, 8, 0),
	gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
	gsSP2Triangles(14, 12, 11, 0, 14, 11, 15, 0),
	gsSP2Triangles(16, 14, 15, 0, 17, 12, 14, 0),
	gsSP2Triangles(17, 18, 12, 0, 19, 20, 21, 0),
	gsSP2Triangles(21, 22, 19, 0, 21, 23, 22, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
	gsSPEndDisplayList(),
};

Vtx anton_skl_cap_wing_Wings_mesh_layer_4_vtx_0[8] = {
	{{ {63, 2, -66}, 0, {-16, 1978}, {90, 76, 48, 255} }},
	{{ {98, -17, -100}, 0, {974, 1978}, {90, 76, 48, 255} }},
	{{ {71, 58, -170}, 0, {974, -34}, {90, 76, 48, 255} }},
	{{ {36, 78, -135}, 0, {-16, -34}, {90, 76, 48, 255} }},
	{{ {-63, 2, -66}, 0, {-16, 1978}, {90, 180, 208, 255} }},
	{{ {-98, -17, -100}, 0, {974, 1978}, {90, 180, 208, 255} }},
	{{ {-71, 58, -170}, 0, {974, -34}, {90, 180, 208, 255} }},
	{{ {-36, 78, -135}, 0, {-16, -34}, {90, 180, 208, 255} }},
};

Gfx anton_skl_cap_wing_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(anton_skl_cap_wing_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Vtx anton_skl_cap_wing_Wings_mesh_layer_4_vtx_1[8] = {
	{{ {2, 97, -101}, 0, {-16, -34}, {90, 76, 48, 255} }},
	{{ {63, 2, -66}, 0, {974, 1978}, {90, 76, 48, 255} }},
	{{ {36, 78, -135}, 0, {974, -34}, {90, 76, 48, 255} }},
	{{ {28, 22, -31}, 0, {-16, 1978}, {90, 76, 48, 255} }},
	{{ {-2, 97, -101}, 0, {-16, -34}, {90, 180, 208, 255} }},
	{{ {-63, 2, -66}, 0, {974, 1978}, {90, 180, 208, 255} }},
	{{ {-36, 78, -135}, 0, {974, -34}, {90, 180, 208, 255} }},
	{{ {-28, 22, -31}, 0, {-16, 1978}, {90, 180, 208, 255} }},
};

Gfx anton_skl_cap_wing_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(anton_skl_cap_wing_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_anton_skl_cap_wing_Cap__CAP_[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_anton_skl_cap_wing_Metal__METAL_[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, anton_skl_cap_wing_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, anton_skl_cap_wing_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_anton_skl_cap_wing_Metal__METAL_[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_anton_skl_cap_wing_Wing_Tip[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, anton_skl_cap_wing_wing_2_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_anton_skl_cap_wing_Wing_Tip[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_anton_skl_cap_wing_Wing_Base[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, anton_skl_cap_wing_wing1_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_anton_skl_cap_wing_Wing_Base[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx anton_skl_cap_wing_Wing_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_anton_skl_cap_wing_Cap__CAP_),
	gsSPDisplayList(anton_skl_cap_wing_Wing_Cap_mesh_layer_1_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx anton_skl_cap_wing_Wing_Cap_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_anton_skl_cap_wing_Metal__METAL_),
	gsSPDisplayList(anton_skl_cap_wing_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_anton_skl_cap_wing_Metal__METAL_),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx anton_skl_cap_wing_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_anton_skl_cap_wing_Wing_Tip),
	gsSPDisplayList(anton_skl_cap_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_anton_skl_cap_wing_Wing_Tip),
	gsSPDisplayList(mat_anton_skl_cap_wing_Wing_Base),
	gsSPDisplayList(anton_skl_cap_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_anton_skl_cap_wing_Wing_Base),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx anton_skl_cap_wing_Wings_mesh_layer_4_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_anton_skl_cap_wing_Wing_Tip),
	gsSPDisplayList(anton_skl_cap_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_anton_skl_cap_wing_Wing_Tip),
	gsSPDisplayList(mat_anton_skl_cap_wing_Wing_Base),
	gsSPDisplayList(anton_skl_cap_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_anton_skl_cap_wing_Wing_Base),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

