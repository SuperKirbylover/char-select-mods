Lights1 homer_cap_wing_CAP_duff_lights = gdSPDefLights1(
	0x50, 0x8, 0x0,
	0xA5, 0x1C, 0x2, 0x49, 0x49, 0x49);

Lights1 homer_cap_wing_METAL_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x49, 0x49, 0x49);

Gfx homer_cap_wing_duff_beer_nocolor_ci4_aligner[] = {gsSPEndDisplayList()};
u8 homer_cap_wing_duff_beer_nocolor_ci4[] = {
	#include "actors/homer/duff_beer_nocolor.ci4.inc.c"
};

Gfx homer_cap_wing_duff_beer_nocolor_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 homer_cap_wing_duff_beer_nocolor_pal_rgba16[] = {
	#include "actors/homer/duff_beer_nocolor.rgba16.pal"
};

Gfx homer_cap_wing_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 homer_cap_wing_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/homer/Metal_Shade.rgba16.inc.c"
};

Gfx homer_cap_wing_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 homer_cap_wing_Metal_Light_rgba16_rgba16[] = {
	#include "actors/homer/Metal_Light.rgba16.inc.c"
};

Gfx homer_cap_wing_wing_2_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 homer_cap_wing_wing_2_rgba16[] = {
	#include "actors/homer/wing_2.rgba16.inc.c"
};

Gfx homer_cap_wing_wing1_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 homer_cap_wing_wing1_rgba16[] = {
	#include "actors/homer/wing1.rgba16.inc.c"
};

Vtx homer_cap_wing_Wing_Cap_mesh_layer_1_vtx_0[28] = {
	{{ {-30, 0, 52}, 0, {810, -3}, {0, 129, 0, 255} }},
	{{ {61, 0, 0}, 0, {810, -21}, {0, 129, 0, 255} }},
	{{ {30, 0, 52}, 0, {810, -2}, {0, 129, 0, 255} }},
	{{ {-61, 0, 0}, 0, {810, -24}, {0, 129, 0, 255} }},
	{{ {-30, 0, -52}, 0, {810, -43}, {0, 129, 0, 255} }},
	{{ {30, 0, -52}, 0, {810, -42}, {0, 129, 0, 255} }},
	{{ {-30, 0, 52}, 0, {2494, 2032}, {213, 191, 100, 255} }},
	{{ {-61, 178, 0}, 0, {1934, -73}, {148, 65, 243, 255} }},
	{{ {-61, 0, 0}, 0, {1934, 2032}, {148, 191, 13, 255} }},
	{{ {-30, 178, 52}, 0, {2494, -73}, {190, 65, 87, 255} }},
	{{ {30, 0, 52}, 0, {3202, 2032}, {66, 191, 87, 255} }},
	{{ {30, 178, 52}, 0, {3202, -73}, {43, 65, 100, 255} }},
	{{ {61, 0, 0}, 0, {3859, 2032}, {108, 191, 243, 255} }},
	{{ {61, 178, 0}, 0, {3859, -73}, {108, 65, 13, 255} }},
	{{ {-61, 178, 0}, 0, {-2289, -73}, {148, 65, 243, 255} }},
	{{ {-30, 178, -52}, 0, {-2356, -73}, {213, 65, 156, 255} }},
	{{ {-61, 0, 0}, 0, {-2289, 2032}, {148, 191, 13, 255} }},
	{{ {-30, 0, -52}, 0, {-2356, 2032}, {190, 191, 169, 255} }},
	{{ {30, 178, -52}, 0, {-2445, -73}, {66, 65, 169, 255} }},
	{{ {30, 0, -52}, 0, {-2445, 2032}, {43, 191, 156, 255} }},
	{{ {61, 178, 0}, 0, {-2531, -73}, {108, 65, 13, 255} }},
	{{ {61, 0, 0}, 0, {-2531, 2032}, {108, 191, 243, 255} }},
	{{ {30, 178, 52}, 0, {1016, -2}, {0, 127, 0, 255} }},
	{{ {61, 178, 0}, 0, {1016, -21}, {0, 127, 0, 255} }},
	{{ {-30, 178, 52}, 0, {1016, -3}, {0, 127, 0, 255} }},
	{{ {-61, 178, 0}, 0, {1016, -24}, {0, 127, 0, 255} }},
	{{ {-30, 178, -52}, 0, {1016, -43}, {0, 127, 0, 255} }},
	{{ {30, 178, -52}, 0, {1016, -42}, {0, 127, 0, 255} }},
};

Gfx homer_cap_wing_Wing_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(homer_cap_wing_Wing_Cap_mesh_layer_1_vtx_0 + 0, 28, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 1, 3, 0, 5, 1, 4, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
	gsSP2Triangles(10, 9, 6, 0, 11, 9, 10, 0),
	gsSP2Triangles(12, 11, 10, 0, 13, 11, 12, 0),
	gsSP2Triangles(14, 15, 16, 0, 16, 15, 17, 0),
	gsSP2Triangles(15, 18, 17, 0, 17, 18, 19, 0),
	gsSP2Triangles(18, 20, 19, 0, 19, 20, 21, 0),
	gsSP2Triangles(22, 23, 24, 0, 24, 23, 25, 0),
	gsSP2Triangles(25, 23, 26, 0, 26, 23, 27, 0),
	gsSPEndDisplayList(),
};

Vtx homer_cap_wing_Wings_mesh_layer_4_vtx_0[8] = {
	{{ {-145, 14, -117}, 0, {1008, 2032}, {166, 237, 88, 255} }},
	{{ {-87, 37, -51}, 0, {-16, 2032}, {167, 237, 88, 255} }},
	{{ {-197, 186, -132}, 0, {1008, -16}, {166, 237, 88, 255} }},
	{{ {-139, 210, -67}, 0, {-16, -16}, {166, 237, 88, 255} }},
	{{ {198, 186, -132}, 0, {1008, -16}, {90, 237, 88, 255} }},
	{{ {87, 37, -51}, 0, {-16, 2032}, {89, 237, 88, 255} }},
	{{ {146, 14, -117}, 0, {1008, 2032}, {90, 237, 88, 255} }},
	{{ {139, 210, -67}, 0, {-16, -16}, {90, 237, 88, 255} }},
};

Gfx homer_cap_wing_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(homer_cap_wing_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx homer_cap_wing_Wings_mesh_layer_4_vtx_1[8] = {
	{{ {-87, 37, -51}, 0, {1008, 2032}, {167, 237, 88, 255} }},
	{{ {-28, 60, 12}, 0, {-16, 2032}, {167, 237, 88, 255} }},
	{{ {-139, 210, -67}, 0, {1008, -16}, {166, 237, 88, 255} }},
	{{ {-81, 233, -3}, 0, {-16, -16}, {167, 237, 88, 255} }},
	{{ {139, 210, -67}, 0, {1008, -16}, {90, 237, 88, 255} }},
	{{ {29, 60, 12}, 0, {-16, 2032}, {89, 237, 88, 255} }},
	{{ {87, 37, -51}, 0, {1008, 2032}, {89, 237, 88, 255} }},
	{{ {81, 233, -3}, 0, {-16, -16}, {89, 237, 88, 255} }},
};

Gfx homer_cap_wing_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(homer_cap_wing_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_homer_cap_wing_CAP_duff[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, homer_cap_wing_duff_beer_nocolor_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 11),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, homer_cap_wing_duff_beer_nocolor_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_homer_cap_wing_CAP_duff[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_homer_cap_wing_METAL[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, homer_cap_wing_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, homer_cap_wing_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_homer_cap_wing_METAL[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_homer_cap_wing_Wing_Tip[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, homer_cap_wing_wing_2_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_homer_cap_wing_Wing_Tip[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_homer_cap_wing_Wing_Base[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, homer_cap_wing_wing1_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_homer_cap_wing_Wing_Base[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx homer_cap_wing_Wing_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_homer_cap_wing_CAP_duff),
	gsSPDisplayList(homer_cap_wing_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_homer_cap_wing_CAP_duff),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx homer_cap_wing_Wing_Cap_mesh_layer_1_mat_override_METAL_0[] = {
	gsSPDisplayList(mat_homer_cap_wing_METAL),
	gsSPDisplayList(homer_cap_wing_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_homer_cap_wing_METAL),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx homer_cap_wing_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_homer_cap_wing_Wing_Tip),
	gsSPDisplayList(homer_cap_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_homer_cap_wing_Wing_Tip),
	gsSPDisplayList(mat_homer_cap_wing_Wing_Base),
	gsSPDisplayList(homer_cap_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_homer_cap_wing_Wing_Base),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx homer_cap_wing_Wings_mesh_layer_4_mat_override_METAL_0[] = {
	gsSPDisplayList(mat_homer_cap_wing_Wing_Tip),
	gsSPDisplayList(homer_cap_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_homer_cap_wing_Wing_Tip),
	gsSPDisplayList(mat_homer_cap_wing_Wing_Base),
	gsSPDisplayList(homer_cap_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_homer_cap_wing_Wing_Base),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

