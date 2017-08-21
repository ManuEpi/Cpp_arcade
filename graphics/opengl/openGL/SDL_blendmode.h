GL_EXT_fragment_lighting
http://www.opengl.org/registry/specs/EXT/fragment_lighting.txt
GL_EXT_fragment_lighting

	GL_FRAGMENT_LIGHTING_EXT 0x8400
	GL_FRAGMENT_COLOR_MATERIAL_EXT 0x8401
	GL_FRAGMENT_COLOR_MATERIAL_FACE_EXT 0x8402
	GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_EXT 0x8403
	GL_MAX_FRAGMENT_LIGHTS_EXT 0x8404
	GL_MAX_ACTIVE_LIGHTS_EXT 0x8405
	GL_CURRENT_RASTER_NORMAL_EXT 0x8406
	GL_LIGHT_ENV_MODE_EXT 0x8407
	GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_EXT 0x8408
	GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_EXT 0x8409
	GL_FRAGMENT_LIGHT_MODEL_AMBIENT_EXT 0x840A
	GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_EXT 0x840B
	GL_FRAGMENT_LIGHT0_EXT 0x840C
	GL_FRAGMENT_LIGHT7_EXT 0x8413
	void glFragmentColorMaterialEXT (GLenum face, GLenum mode)
	void glFragmentLightModelfEXT (GLenum pname, GLfloat param)
	void glFragmentLightModelfvEXT (GLenum pname, GLfloat* params)
	void glFragmentLightModeliEXT (GLenum pname, GLint param)
	void glFragmentLightModelivEXT (GLenum pname, GLint* params)
	void glFragmentLightfEXT (GLenum light, GLenum pname, GLfloat param)
	void glFragmentLightfvEXT (GLenum light, GLenum pname, GLfloat* params)
	void glFragmentLightiEXT (GLenum light, GLenum pname, GLint param)
	void glFragmentLightivEXT (GLenum light, GLenum pname, GLint* params)
	void glFragmentMaterialfEXT (GLenum face, GLenum pname, const GLfloat param)
	void glFragmentMaterialfvEXT (GLenum face, GLenum pname, const GLfloat* params)
	void glFragmentMaterialiEXT (GLenum face, GLenum pname, const GLint param)
	void glFragmentMaterialivEXT (GLenum face, GLenum pname, const GLint* params)
	void glGetFragmentLightfvEXT (GLenum light, GLenum pname, GLfloat* params)
	void glGetFragmentLightivEXT (GLenum light, GLenum pname, GLint* params)
	void glGetFragmentMaterialfvEXT (GLenum face, GLenum pname, const GLfloat* params)
	void glGetFragmentMaterialivEXT (GLenum face, GLenum pname, const GLint* params)
	void glLightEnviEXT (GLenum pname, GLint param)
                                                                                                                                                                                                                                                                                                                      