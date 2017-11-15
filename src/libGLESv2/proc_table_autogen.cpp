// GENERATED FILE - DO NOT EDIT.
// Generated by ./gen_proc_table.py using data from proc_table_data.json.
//
// Copyright 2017 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// getProcAddress loader table:
//   Mapping from a string entry point name to function address.
//

#include "libGLESv2/proc_table.h"

#include "libGLESv2/entry_points_egl.h"
#include "libGLESv2/entry_points_egl_ext.h"
#include "libGLESv2/entry_points_gles_2_0_autogen.h"
#include "libGLESv2/entry_points_gles_2_0_ext.h"
#include "libGLESv2/entry_points_gles_3_0_autogen.h"
#include "libGLESv2/entry_points_gles_3_1_autogen.h"
#include "platform/Platform.h"

#define P(FUNC) reinterpret_cast<__eglMustCastToProperFunctionPointerType>(FUNC)

namespace egl
{
ProcEntry g_procTable[] = {
    {"ANGLEGetDisplayPlatform", P(ANGLEGetDisplayPlatform)},
    {"ANGLEResetDisplayPlatform", P(ANGLEResetDisplayPlatform)},
    {"eglBindAPI", P(egl::BindAPI)},
    {"eglBindTexImage", P(egl::BindTexImage)},
    {"eglChooseConfig", P(egl::ChooseConfig)},
    {"eglClientWaitSync", P(egl::ClientWaitSync)},
    {"eglCopyBuffers", P(egl::CopyBuffers)},
    {"eglCreateContext", P(egl::CreateContext)},
    {"eglCreateDeviceANGLE", P(egl::CreateDeviceANGLE)},
    {"eglCreateImage", P(egl::CreateImage)},
    {"eglCreateImageKHR", P(egl::CreateImageKHR)},
    {"eglCreatePbufferFromClientBuffer", P(egl::CreatePbufferFromClientBuffer)},
    {"eglCreatePbufferSurface", P(egl::CreatePbufferSurface)},
    {"eglCreatePixmapSurface", P(egl::CreatePixmapSurface)},
    {"eglCreatePlatformPixmapSurface", P(egl::CreatePlatformPixmapSurface)},
    {"eglCreatePlatformWindowSurface", P(egl::CreatePlatformWindowSurface)},
    {"eglCreateStreamKHR", P(egl::CreateStreamKHR)},
    {"eglCreateStreamProducerD3DTextureANGLE", P(egl::CreateStreamProducerD3DTextureANGLE)},
    {"eglCreateSync", P(egl::CreateSync)},
    {"eglCreateWindowSurface", P(egl::CreateWindowSurface)},
    {"eglDestroyContext", P(egl::DestroyContext)},
    {"eglDestroyImage", P(egl::DestroyImage)},
    {"eglDestroyImageKHR", P(egl::DestroyImageKHR)},
    {"eglDestroyStreamKHR", P(egl::DestroyStreamKHR)},
    {"eglDestroySurface", P(egl::DestroySurface)},
    {"eglDestroySync", P(egl::DestroySync)},
    {"eglGetConfigAttrib", P(egl::GetConfigAttrib)},
    {"eglGetConfigs", P(egl::GetConfigs)},
    {"eglGetCurrentContext", P(egl::GetCurrentContext)},
    {"eglGetCurrentDisplay", P(egl::GetCurrentDisplay)},
    {"eglGetCurrentSurface", P(egl::GetCurrentSurface)},
    {"eglGetDisplay", P(egl::GetDisplay)},
    {"eglGetError", P(egl::GetError)},
    {"eglGetPlatformDisplay", P(egl::GetPlatformDisplay)},
    {"eglGetPlatformDisplayEXT", P(egl::GetPlatformDisplayEXT)},
    {"eglGetProcAddress", P(egl::GetProcAddress)},
    {"eglGetSyncAttrib", P(egl::GetSyncAttrib)},
    {"eglGetSyncValuesCHROMIUM", P(egl::GetSyncValuesCHROMIUM)},
    {"eglInitialize", P(egl::Initialize)},
    {"eglMakeCurrent", P(egl::MakeCurrent)},
    {"eglPostSubBufferNV", P(egl::PostSubBufferNV)},
    {"eglProgramCacheGetAttribANGLE", P(egl::ProgramCacheGetAttribANGLE)},
    {"eglProgramCachePopulateANGLE", P(egl::ProgramCachePopulateANGLE)},
    {"eglProgramCacheQueryANGLE", P(egl::ProgramCacheQueryANGLE)},
    {"eglProgramCacheResizeANGLE", P(egl::ProgramCacheResizeANGLE)},
    {"eglQueryAPI", P(egl::QueryAPI)},
    {"eglQueryContext", P(egl::QueryContext)},
    {"eglQueryDeviceAttribEXT", P(egl::QueryDeviceAttribEXT)},
    {"eglQueryDeviceStringEXT", P(egl::QueryDeviceStringEXT)},
    {"eglQueryDisplayAttribEXT", P(egl::QueryDisplayAttribEXT)},
    {"eglQueryStreamKHR", P(egl::QueryStreamKHR)},
    {"eglQueryStreamu64KHR", P(egl::QueryStreamu64KHR)},
    {"eglQueryString", P(egl::QueryString)},
    {"eglQuerySurface", P(egl::QuerySurface)},
    {"eglQuerySurfacePointerANGLE", P(egl::QuerySurfacePointerANGLE)},
    {"eglReleaseDeviceANGLE", P(egl::ReleaseDeviceANGLE)},
    {"eglReleaseTexImage", P(egl::ReleaseTexImage)},
    {"eglReleaseThread", P(egl::ReleaseThread)},
    {"eglStreamAttribKHR", P(egl::StreamAttribKHR)},
    {"eglStreamConsumerAcquireKHR", P(egl::StreamConsumerAcquireKHR)},
    {"eglStreamConsumerGLTextureExternalAttribsNV",
     P(egl::StreamConsumerGLTextureExternalAttribsNV)},
    {"eglStreamConsumerGLTextureExternalKHR", P(egl::StreamConsumerGLTextureExternalKHR)},
    {"eglStreamConsumerReleaseKHR", P(egl::StreamConsumerReleaseKHR)},
    {"eglStreamPostD3DTextureANGLE", P(egl::StreamPostD3DTextureANGLE)},
    {"eglSurfaceAttrib", P(egl::SurfaceAttrib)},
    {"eglSwapBuffers", P(egl::SwapBuffers)},
    {"eglSwapBuffersWithDamageEXT", P(egl::SwapBuffersWithDamageEXT)},
    {"eglSwapInterval", P(egl::SwapInterval)},
    {"eglTerminate", P(egl::Terminate)},
    {"eglWaitClient", P(egl::WaitClient)},
    {"eglWaitGL", P(egl::WaitGL)},
    {"eglWaitNative", P(egl::WaitNative)},
    {"eglWaitSync", P(egl::WaitSync)},
    {"glActiveShaderProgram", P(gl::ActiveShaderProgram)},
    {"glActiveTexture", P(gl::ActiveTexture)},
    {"glAttachShader", P(gl::AttachShader)},
    {"glBeginQuery", P(gl::BeginQuery)},
    {"glBeginQueryEXT", P(gl::BeginQueryEXT)},
    {"glBeginTransformFeedback", P(gl::BeginTransformFeedback)},
    {"glBindAttribLocation", P(gl::BindAttribLocation)},
    {"glBindBuffer", P(gl::BindBuffer)},
    {"glBindBufferBase", P(gl::BindBufferBase)},
    {"glBindBufferRange", P(gl::BindBufferRange)},
    {"glBindFramebuffer", P(gl::BindFramebuffer)},
    {"glBindImageTexture", P(gl::BindImageTexture)},
    {"glBindProgramPipeline", P(gl::BindProgramPipeline)},
    {"glBindRenderbuffer", P(gl::BindRenderbuffer)},
    {"glBindSampler", P(gl::BindSampler)},
    {"glBindTexture", P(gl::BindTexture)},
    {"glBindTransformFeedback", P(gl::BindTransformFeedback)},
    {"glBindUniformLocationCHROMIUM", P(gl::BindUniformLocationCHROMIUM)},
    {"glBindVertexArray", P(gl::BindVertexArray)},
    {"glBindVertexArrayOES", P(gl::BindVertexArrayOES)},
    {"glBindVertexBuffer", P(gl::BindVertexBuffer)},
    {"glBlendColor", P(gl::BlendColor)},
    {"glBlendEquation", P(gl::BlendEquation)},
    {"glBlendEquationSeparate", P(gl::BlendEquationSeparate)},
    {"glBlendFunc", P(gl::BlendFunc)},
    {"glBlendFuncSeparate", P(gl::BlendFuncSeparate)},
    {"glBlitFramebuffer", P(gl::BlitFramebuffer)},
    {"glBlitFramebufferANGLE", P(gl::BlitFramebufferANGLE)},
    {"glBufferData", P(gl::BufferData)},
    {"glBufferSubData", P(gl::BufferSubData)},
    {"glCheckFramebufferStatus", P(gl::CheckFramebufferStatus)},
    {"glClear", P(gl::Clear)},
    {"glClearBufferfi", P(gl::ClearBufferfi)},
    {"glClearBufferfv", P(gl::ClearBufferfv)},
    {"glClearBufferiv", P(gl::ClearBufferiv)},
    {"glClearBufferuiv", P(gl::ClearBufferuiv)},
    {"glClearColor", P(gl::ClearColor)},
    {"glClearDepthf", P(gl::ClearDepthf)},
    {"glClearStencil", P(gl::ClearStencil)},
    {"glClientWaitSync", P(gl::ClientWaitSync)},
    {"glColorMask", P(gl::ColorMask)},
    {"glCompileShader", P(gl::CompileShader)},
    {"glCompressedCopyTextureCHROMIUM", P(gl::CompressedCopyTextureCHROMIUM)},
    {"glCompressedTexImage2D", P(gl::CompressedTexImage2D)},
    {"glCompressedTexImage2DRobustANGLE", P(gl::CompressedTexImage2DRobustANGLE)},
    {"glCompressedTexImage3D", P(gl::CompressedTexImage3D)},
    {"glCompressedTexImage3DRobustANGLE", P(gl::CompressedTexImage3DRobustANGLE)},
    {"glCompressedTexSubImage2D", P(gl::CompressedTexSubImage2D)},
    {"glCompressedTexSubImage2DRobustANGLE", P(gl::CompressedTexSubImage2DRobustANGLE)},
    {"glCompressedTexSubImage3D", P(gl::CompressedTexSubImage3D)},
    {"glCompressedTexSubImage3DRobustANGLE", P(gl::CompressedTexSubImage3DRobustANGLE)},
    {"glCopyBufferSubData", P(gl::CopyBufferSubData)},
    {"glCopySubTextureCHROMIUM", P(gl::CopySubTextureCHROMIUM)},
    {"glCopyTexImage2D", P(gl::CopyTexImage2D)},
    {"glCopyTexSubImage2D", P(gl::CopyTexSubImage2D)},
    {"glCopyTexSubImage3D", P(gl::CopyTexSubImage3D)},
    {"glCopyTextureCHROMIUM", P(gl::CopyTextureCHROMIUM)},
    {"glCreateProgram", P(gl::CreateProgram)},
    {"glCreateShader", P(gl::CreateShader)},
    {"glCreateShaderProgramv", P(gl::CreateShaderProgramv)},
    {"glCullFace", P(gl::CullFace)},
    {"glDebugMessageCallbackKHR", P(gl::DebugMessageCallbackKHR)},
    {"glDebugMessageControlKHR", P(gl::DebugMessageControlKHR)},
    {"glDebugMessageInsertKHR", P(gl::DebugMessageInsertKHR)},
    {"glDeleteBuffers", P(gl::DeleteBuffers)},
    {"glDeleteFencesNV", P(gl::DeleteFencesNV)},
    {"glDeleteFramebuffers", P(gl::DeleteFramebuffers)},
    {"glDeleteProgram", P(gl::DeleteProgram)},
    {"glDeleteProgramPipelines", P(gl::DeleteProgramPipelines)},
    {"glDeleteQueries", P(gl::DeleteQueries)},
    {"glDeleteQueriesEXT", P(gl::DeleteQueriesEXT)},
    {"glDeleteRenderbuffers", P(gl::DeleteRenderbuffers)},
    {"glDeleteSamplers", P(gl::DeleteSamplers)},
    {"glDeleteShader", P(gl::DeleteShader)},
    {"glDeleteSync", P(gl::DeleteSync)},
    {"glDeleteTextures", P(gl::DeleteTextures)},
    {"glDeleteTransformFeedbacks", P(gl::DeleteTransformFeedbacks)},
    {"glDeleteVertexArrays", P(gl::DeleteVertexArrays)},
    {"glDeleteVertexArraysOES", P(gl::DeleteVertexArraysOES)},
    {"glDepthFunc", P(gl::DepthFunc)},
    {"glDepthMask", P(gl::DepthMask)},
    {"glDepthRangef", P(gl::DepthRangef)},
    {"glDetachShader", P(gl::DetachShader)},
    {"glDisable", P(gl::Disable)},
    {"glDisableVertexAttribArray", P(gl::DisableVertexAttribArray)},
    {"glDiscardFramebufferEXT", P(gl::DiscardFramebufferEXT)},
    {"glDispatchCompute", P(gl::DispatchCompute)},
    {"glDispatchComputeIndirect", P(gl::DispatchComputeIndirect)},
    {"glDrawArrays", P(gl::DrawArrays)},
    {"glDrawArraysIndirect", P(gl::DrawArraysIndirect)},
    {"glDrawArraysInstanced", P(gl::DrawArraysInstanced)},
    {"glDrawArraysInstancedANGLE", P(gl::DrawArraysInstancedANGLE)},
    {"glDrawBuffers", P(gl::DrawBuffers)},
    {"glDrawBuffersEXT", P(gl::DrawBuffersEXT)},
    {"glDrawElements", P(gl::DrawElements)},
    {"glDrawElementsIndirect", P(gl::DrawElementsIndirect)},
    {"glDrawElementsInstanced", P(gl::DrawElementsInstanced)},
    {"glDrawElementsInstancedANGLE", P(gl::DrawElementsInstancedANGLE)},
    {"glDrawRangeElements", P(gl::DrawRangeElements)},
    {"glEGLImageTargetRenderbufferStorageOES", P(gl::EGLImageTargetRenderbufferStorageOES)},
    {"glEGLImageTargetTexture2DOES", P(gl::EGLImageTargetTexture2DOES)},
    {"glEnable", P(gl::Enable)},
    {"glEnableVertexAttribArray", P(gl::EnableVertexAttribArray)},
    {"glEndQuery", P(gl::EndQuery)},
    {"glEndQueryEXT", P(gl::EndQueryEXT)},
    {"glEndTransformFeedback", P(gl::EndTransformFeedback)},
    {"glFenceSync", P(gl::FenceSync)},
    {"glFinish", P(gl::Finish)},
    {"glFinishFenceNV", P(gl::FinishFenceNV)},
    {"glFlush", P(gl::Flush)},
    {"glFlushMappedBufferRange", P(gl::FlushMappedBufferRange)},
    {"glFlushMappedBufferRangeEXT", P(gl::FlushMappedBufferRangeEXT)},
    {"glFramebufferParameteri", P(gl::FramebufferParameteri)},
    {"glFramebufferRenderbuffer", P(gl::FramebufferRenderbuffer)},
    {"glFramebufferTexture2D", P(gl::FramebufferTexture2D)},
    {"glFramebufferTextureLayer", P(gl::FramebufferTextureLayer)},
    {"glFramebufferTextureMultiviewLayeredANGLE", P(gl::FramebufferTextureMultiviewLayeredANGLE)},
    {"glFramebufferTextureMultiviewSideBySideANGLE",
     P(gl::FramebufferTextureMultiviewSideBySideANGLE)},
    {"glFrontFace", P(gl::FrontFace)},
    {"glGenBuffers", P(gl::GenBuffers)},
    {"glGenFencesNV", P(gl::GenFencesNV)},
    {"glGenFramebuffers", P(gl::GenFramebuffers)},
    {"glGenProgramPipelines", P(gl::GenProgramPipelines)},
    {"glGenQueries", P(gl::GenQueries)},
    {"glGenQueriesEXT", P(gl::GenQueriesEXT)},
    {"glGenRenderbuffers", P(gl::GenRenderbuffers)},
    {"glGenSamplers", P(gl::GenSamplers)},
    {"glGenTextures", P(gl::GenTextures)},
    {"glGenTransformFeedbacks", P(gl::GenTransformFeedbacks)},
    {"glGenVertexArrays", P(gl::GenVertexArrays)},
    {"glGenVertexArraysOES", P(gl::GenVertexArraysOES)},
    {"glGenerateMipmap", P(gl::GenerateMipmap)},
    {"glGetActiveAttrib", P(gl::GetActiveAttrib)},
    {"glGetActiveUniform", P(gl::GetActiveUniform)},
    {"glGetActiveUniformBlockName", P(gl::GetActiveUniformBlockName)},
    {"glGetActiveUniformBlockiv", P(gl::GetActiveUniformBlockiv)},
    {"glGetActiveUniformBlockivRobustANGLE", P(gl::GetActiveUniformBlockivRobustANGLE)},
    {"glGetActiveUniformsiv", P(gl::GetActiveUniformsiv)},
    {"glGetAttachedShaders", P(gl::GetAttachedShaders)},
    {"glGetAttribLocation", P(gl::GetAttribLocation)},
    {"glGetBooleani_v", P(gl::GetBooleani_v)},
    {"glGetBooleani_vRobustANGLE", P(gl::GetBooleani_vRobustANGLE)},
    {"glGetBooleanv", P(gl::GetBooleanv)},
    {"glGetBooleanvRobustANGLE", P(gl::GetBooleanvRobustANGLE)},
    {"glGetBufferParameteri64v", P(gl::GetBufferParameteri64v)},
    {"glGetBufferParameteri64vRobustANGLE", P(gl::GetBufferParameteri64vRobustANGLE)},
    {"glGetBufferParameteriv", P(gl::GetBufferParameteriv)},
    {"glGetBufferParameterivRobustANGLE", P(gl::GetBufferParameterivRobustANGLE)},
    {"glGetBufferPointerv", P(gl::GetBufferPointerv)},
    {"glGetBufferPointervOES", P(gl::GetBufferPointervOES)},
    {"glGetBufferPointervRobustANGLE", P(gl::GetBufferPointervRobustANGLE)},
    {"glGetDebugMessageLogKHR", P(gl::GetDebugMessageLogKHR)},
    {"glGetError", P(gl::GetError)},
    {"glGetFenceivNV", P(gl::GetFenceivNV)},
    {"glGetFloatv", P(gl::GetFloatv)},
    {"glGetFloatvRobustANGLE", P(gl::GetFloatvRobustANGLE)},
    {"glGetFragDataLocation", P(gl::GetFragDataLocation)},
    {"glGetFramebufferAttachmentParameteriv", P(gl::GetFramebufferAttachmentParameteriv)},
    {"glGetFramebufferAttachmentParameterivRobustANGLE",
     P(gl::GetFramebufferAttachmentParameterivRobustANGLE)},
    {"glGetFramebufferParameteriv", P(gl::GetFramebufferParameteriv)},
    {"glGetFramebufferParameterivRobustANGLE", P(gl::GetFramebufferParameterivRobustANGLE)},
    {"glGetGraphicsResetStatusEXT", P(gl::GetGraphicsResetStatusEXT)},
    {"glGetInteger64i_v", P(gl::GetInteger64i_v)},
    {"glGetInteger64i_vRobustANGLE", P(gl::GetInteger64i_vRobustANGLE)},
    {"glGetInteger64v", P(gl::GetInteger64v)},
    {"glGetInteger64vRobustANGLE", P(gl::GetInteger64vRobustANGLE)},
    {"glGetIntegeri_v", P(gl::GetIntegeri_v)},
    {"glGetIntegeri_vRobustANGLE", P(gl::GetIntegeri_vRobustANGLE)},
    {"glGetIntegerv", P(gl::GetIntegerv)},
    {"glGetIntegervRobustANGLE", P(gl::GetIntegervRobustANGLE)},
    {"glGetInternalformativ", P(gl::GetInternalformativ)},
    {"glGetInternalformativRobustANGLE", P(gl::GetInternalformativRobustANGLE)},
    {"glGetMultisamplefv", P(gl::GetMultisamplefv)},
    {"glGetMultisamplefvRobustANGLE", P(gl::GetMultisamplefvRobustANGLE)},
    {"glGetObjectLabelKHR", P(gl::GetObjectLabelKHR)},
    {"glGetObjectPtrLabelKHR", P(gl::GetObjectPtrLabelKHR)},
    {"glGetPointervKHR", P(gl::GetPointervKHR)},
    {"glGetPointervRobustANGLERobustANGLE", P(gl::GetPointervRobustANGLERobustANGLE)},
    {"glGetProgramBinary", P(gl::GetProgramBinary)},
    {"glGetProgramBinaryOES", P(gl::GetProgramBinaryOES)},
    {"glGetProgramInfoLog", P(gl::GetProgramInfoLog)},
    {"glGetProgramInterfaceiv", P(gl::GetProgramInterfaceiv)},
    {"glGetProgramInterfaceivRobustANGLE", P(gl::GetProgramInterfaceivRobustANGLE)},
    {"glGetProgramPipelineInfoLog", P(gl::GetProgramPipelineInfoLog)},
    {"glGetProgramPipelineiv", P(gl::GetProgramPipelineiv)},
    {"glGetProgramResourceIndex", P(gl::GetProgramResourceIndex)},
    {"glGetProgramResourceLocation", P(gl::GetProgramResourceLocation)},
    {"glGetProgramResourceName", P(gl::GetProgramResourceName)},
    {"glGetProgramResourceiv", P(gl::GetProgramResourceiv)},
    {"glGetProgramiv", P(gl::GetProgramiv)},
    {"glGetProgramivRobustANGLE", P(gl::GetProgramivRobustANGLE)},
    {"glGetQueryObjecti64vEXT", P(gl::GetQueryObjecti64vEXT)},
    {"glGetQueryObjecti64vRobustANGLE", P(gl::GetQueryObjecti64vRobustANGLE)},
    {"glGetQueryObjectivEXT", P(gl::GetQueryObjectivEXT)},
    {"glGetQueryObjectivRobustANGLE", P(gl::GetQueryObjectivRobustANGLE)},
    {"glGetQueryObjectui64vEXT", P(gl::GetQueryObjectui64vEXT)},
    {"glGetQueryObjectui64vRobustANGLE", P(gl::GetQueryObjectui64vRobustANGLE)},
    {"glGetQueryObjectuiv", P(gl::GetQueryObjectuiv)},
    {"glGetQueryObjectuivEXT", P(gl::GetQueryObjectuivEXT)},
    {"glGetQueryObjectuivRobustANGLE", P(gl::GetQueryObjectuivRobustANGLE)},
    {"glGetQueryiv", P(gl::GetQueryiv)},
    {"glGetQueryivEXT", P(gl::GetQueryivEXT)},
    {"glGetQueryivRobustANGLE", P(gl::GetQueryivRobustANGLE)},
    {"glGetRenderbufferParameteriv", P(gl::GetRenderbufferParameteriv)},
    {"glGetRenderbufferParameterivRobustANGLE", P(gl::GetRenderbufferParameterivRobustANGLE)},
    {"glGetSamplerParameterIivRobustANGLE", P(gl::GetSamplerParameterIivRobustANGLE)},
    {"glGetSamplerParameterIuivRobustANGLE", P(gl::GetSamplerParameterIuivRobustANGLE)},
    {"glGetSamplerParameterfv", P(gl::GetSamplerParameterfv)},
    {"glGetSamplerParameterfvRobustANGLE", P(gl::GetSamplerParameterfvRobustANGLE)},
    {"glGetSamplerParameteriv", P(gl::GetSamplerParameteriv)},
    {"glGetSamplerParameterivRobustANGLE", P(gl::GetSamplerParameterivRobustANGLE)},
    {"glGetShaderInfoLog", P(gl::GetShaderInfoLog)},
    {"glGetShaderPrecisionFormat", P(gl::GetShaderPrecisionFormat)},
    {"glGetShaderSource", P(gl::GetShaderSource)},
    {"glGetShaderiv", P(gl::GetShaderiv)},
    {"glGetShaderivRobustANGLE", P(gl::GetShaderivRobustANGLE)},
    {"glGetString", P(gl::GetString)},
    {"glGetStringi", P(gl::GetStringi)},
    {"glGetSynciv", P(gl::GetSynciv)},
    {"glGetTexLevelParameterfv", P(gl::GetTexLevelParameterfv)},
    {"glGetTexLevelParameterfvRobustANGLE", P(gl::GetTexLevelParameterfvRobustANGLE)},
    {"glGetTexLevelParameteriv", P(gl::GetTexLevelParameteriv)},
    {"glGetTexLevelParameterivRobustANGLE", P(gl::GetTexLevelParameterivRobustANGLE)},
    {"glGetTexParameterIivRobustANGLE", P(gl::GetTexParameterIivRobustANGLE)},
    {"glGetTexParameterIuivRobustANGLE", P(gl::GetTexParameterIuivRobustANGLE)},
    {"glGetTexParameterfv", P(gl::GetTexParameterfv)},
    {"glGetTexParameterfvRobustANGLE", P(gl::GetTexParameterfvRobustANGLE)},
    {"glGetTexParameteriv", P(gl::GetTexParameteriv)},
    {"glGetTexParameterivRobustANGLE", P(gl::GetTexParameterivRobustANGLE)},
    {"glGetTransformFeedbackVarying", P(gl::GetTransformFeedbackVarying)},
    {"glGetTranslatedShaderSourceANGLE", P(gl::GetTranslatedShaderSourceANGLE)},
    {"glGetUniformBlockIndex", P(gl::GetUniformBlockIndex)},
    {"glGetUniformIndices", P(gl::GetUniformIndices)},
    {"glGetUniformLocation", P(gl::GetUniformLocation)},
    {"glGetUniformfv", P(gl::GetUniformfv)},
    {"glGetUniformfvRobustANGLE", P(gl::GetUniformfvRobustANGLE)},
    {"glGetUniformiv", P(gl::GetUniformiv)},
    {"glGetUniformivRobustANGLE", P(gl::GetUniformivRobustANGLE)},
    {"glGetUniformuiv", P(gl::GetUniformuiv)},
    {"glGetUniformuivRobustANGLE", P(gl::GetUniformuivRobustANGLE)},
    {"glGetVertexAttribIiv", P(gl::GetVertexAttribIiv)},
    {"glGetVertexAttribIivRobustANGLE", P(gl::GetVertexAttribIivRobustANGLE)},
    {"glGetVertexAttribIuiv", P(gl::GetVertexAttribIuiv)},
    {"glGetVertexAttribIuivRobustANGLE", P(gl::GetVertexAttribIuivRobustANGLE)},
    {"glGetVertexAttribPointerv", P(gl::GetVertexAttribPointerv)},
    {"glGetVertexAttribPointervRobustANGLE", P(gl::GetVertexAttribPointervRobustANGLE)},
    {"glGetVertexAttribfv", P(gl::GetVertexAttribfv)},
    {"glGetVertexAttribfvRobustANGLE", P(gl::GetVertexAttribfvRobustANGLE)},
    {"glGetVertexAttribiv", P(gl::GetVertexAttribiv)},
    {"glGetVertexAttribivRobustANGLE", P(gl::GetVertexAttribivRobustANGLE)},
    {"glGetnUniformfvEXT", P(gl::GetnUniformfvEXT)},
    {"glGetnUniformfvRobustANGLE", P(gl::GetnUniformfvRobustANGLE)},
    {"glGetnUniformivEXT", P(gl::GetnUniformivEXT)},
    {"glGetnUniformivRobustANGLE", P(gl::GetnUniformivRobustANGLE)},
    {"glGetnUniformuivRobustANGLE", P(gl::GetnUniformuivRobustANGLE)},
    {"glHint", P(gl::Hint)},
    {"glInsertEventMarkerEXT", P(gl::InsertEventMarkerEXT)},
    {"glInvalidateFramebuffer", P(gl::InvalidateFramebuffer)},
    {"glInvalidateSubFramebuffer", P(gl::InvalidateSubFramebuffer)},
    {"glIsBuffer", P(gl::IsBuffer)},
    {"glIsEnabled", P(gl::IsEnabled)},
    {"glIsFenceNV", P(gl::IsFenceNV)},
    {"glIsFramebuffer", P(gl::IsFramebuffer)},
    {"glIsProgram", P(gl::IsProgram)},
    {"glIsProgramPipeline", P(gl::IsProgramPipeline)},
    {"glIsQuery", P(gl::IsQuery)},
    {"glIsQueryEXT", P(gl::IsQueryEXT)},
    {"glIsRenderbuffer", P(gl::IsRenderbuffer)},
    {"glIsSampler", P(gl::IsSampler)},
    {"glIsShader", P(gl::IsShader)},
    {"glIsSync", P(gl::IsSync)},
    {"glIsTexture", P(gl::IsTexture)},
    {"glIsTransformFeedback", P(gl::IsTransformFeedback)},
    {"glIsVertexArray", P(gl::IsVertexArray)},
    {"glIsVertexArrayOES", P(gl::IsVertexArrayOES)},
    {"glLineWidth", P(gl::LineWidth)},
    {"glLinkProgram", P(gl::LinkProgram)},
    {"glMapBufferOES", P(gl::MapBufferOES)},
    {"glMapBufferRange", P(gl::MapBufferRange)},
    {"glMapBufferRangeEXT", P(gl::MapBufferRangeEXT)},
    {"glMemoryBarrier", P(gl::MemoryBarrier)},
    {"glMemoryBarrierByRegion", P(gl::MemoryBarrierByRegion)},
    {"glObjectLabelKHR", P(gl::ObjectLabelKHR)},
    {"glObjectPtrLabelKHR", P(gl::ObjectPtrLabelKHR)},
    {"glPauseTransformFeedback", P(gl::PauseTransformFeedback)},
    {"glPixelStorei", P(gl::PixelStorei)},
    {"glPolygonOffset", P(gl::PolygonOffset)},
    {"glPopDebugGroupKHR", P(gl::PopDebugGroupKHR)},
    {"glPopGroupMarkerEXT", P(gl::PopGroupMarkerEXT)},
    {"glProgramBinary", P(gl::ProgramBinary)},
    {"glProgramBinaryOES", P(gl::ProgramBinaryOES)},
    {"glProgramParameteri", P(gl::ProgramParameteri)},
    {"glProgramUniform1f", P(gl::ProgramUniform1f)},
    {"glProgramUniform1fv", P(gl::ProgramUniform1fv)},
    {"glProgramUniform1i", P(gl::ProgramUniform1i)},
    {"glProgramUniform1iv", P(gl::ProgramUniform1iv)},
    {"glProgramUniform1ui", P(gl::ProgramUniform1ui)},
    {"glProgramUniform1uiv", P(gl::ProgramUniform1uiv)},
    {"glProgramUniform2f", P(gl::ProgramUniform2f)},
    {"glProgramUniform2fv", P(gl::ProgramUniform2fv)},
    {"glProgramUniform2i", P(gl::ProgramUniform2i)},
    {"glProgramUniform2iv", P(gl::ProgramUniform2iv)},
    {"glProgramUniform2ui", P(gl::ProgramUniform2ui)},
    {"glProgramUniform2uiv", P(gl::ProgramUniform2uiv)},
    {"glProgramUniform3f", P(gl::ProgramUniform3f)},
    {"glProgramUniform3fv", P(gl::ProgramUniform3fv)},
    {"glProgramUniform3i", P(gl::ProgramUniform3i)},
    {"glProgramUniform3iv", P(gl::ProgramUniform3iv)},
    {"glProgramUniform3ui", P(gl::ProgramUniform3ui)},
    {"glProgramUniform3uiv", P(gl::ProgramUniform3uiv)},
    {"glProgramUniform4f", P(gl::ProgramUniform4f)},
    {"glProgramUniform4fv", P(gl::ProgramUniform4fv)},
    {"glProgramUniform4i", P(gl::ProgramUniform4i)},
    {"glProgramUniform4iv", P(gl::ProgramUniform4iv)},
    {"glProgramUniform4ui", P(gl::ProgramUniform4ui)},
    {"glProgramUniform4uiv", P(gl::ProgramUniform4uiv)},
    {"glProgramUniformMatrix2fv", P(gl::ProgramUniformMatrix2fv)},
    {"glProgramUniformMatrix2x3fv", P(gl::ProgramUniformMatrix2x3fv)},
    {"glProgramUniformMatrix2x4fv", P(gl::ProgramUniformMatrix2x4fv)},
    {"glProgramUniformMatrix3fv", P(gl::ProgramUniformMatrix3fv)},
    {"glProgramUniformMatrix3x2fv", P(gl::ProgramUniformMatrix3x2fv)},
    {"glProgramUniformMatrix3x4fv", P(gl::ProgramUniformMatrix3x4fv)},
    {"glProgramUniformMatrix4fv", P(gl::ProgramUniformMatrix4fv)},
    {"glProgramUniformMatrix4x2fv", P(gl::ProgramUniformMatrix4x2fv)},
    {"glProgramUniformMatrix4x3fv", P(gl::ProgramUniformMatrix4x3fv)},
    {"glPushDebugGroupKHR", P(gl::PushDebugGroupKHR)},
    {"glPushGroupMarkerEXT", P(gl::PushGroupMarkerEXT)},
    {"glQueryCounterEXT", P(gl::QueryCounterEXT)},
    {"glReadBuffer", P(gl::ReadBuffer)},
    {"glReadPixels", P(gl::ReadPixels)},
    {"glReadPixelsRobustANGLE", P(gl::ReadPixelsRobustANGLE)},
    {"glReadnPixelsEXT", P(gl::ReadnPixelsEXT)},
    {"glReadnPixelsRobustANGLE", P(gl::ReadnPixelsRobustANGLE)},
    {"glReleaseShaderCompiler", P(gl::ReleaseShaderCompiler)},
    {"glRenderbufferStorage", P(gl::RenderbufferStorage)},
    {"glRenderbufferStorageMultisample", P(gl::RenderbufferStorageMultisample)},
    {"glRenderbufferStorageMultisampleANGLE", P(gl::RenderbufferStorageMultisampleANGLE)},
    {"glRequestExtensionANGLE", P(gl::RequestExtensionANGLE)},
    {"glResumeTransformFeedback", P(gl::ResumeTransformFeedback)},
    {"glSampleCoverage", P(gl::SampleCoverage)},
    {"glSampleMaski", P(gl::SampleMaski)},
    {"glSamplerParameterIivRobustANGLE", P(gl::SamplerParameterIivRobustANGLE)},
    {"glSamplerParameterIuivRobustANGLE", P(gl::SamplerParameterIuivRobustANGLE)},
    {"glSamplerParameterf", P(gl::SamplerParameterf)},
    {"glSamplerParameterfv", P(gl::SamplerParameterfv)},
    {"glSamplerParameterfvRobustANGLE", P(gl::SamplerParameterfvRobustANGLE)},
    {"glSamplerParameteri", P(gl::SamplerParameteri)},
    {"glSamplerParameteriv", P(gl::SamplerParameteriv)},
    {"glSamplerParameterivRobustANGLE", P(gl::SamplerParameterivRobustANGLE)},
    {"glScissor", P(gl::Scissor)},
    {"glSetFenceNV", P(gl::SetFenceNV)},
    {"glShaderBinary", P(gl::ShaderBinary)},
    {"glShaderSource", P(gl::ShaderSource)},
    {"glStencilFunc", P(gl::StencilFunc)},
    {"glStencilFuncSeparate", P(gl::StencilFuncSeparate)},
    {"glStencilMask", P(gl::StencilMask)},
    {"glStencilMaskSeparate", P(gl::StencilMaskSeparate)},
    {"glStencilOp", P(gl::StencilOp)},
    {"glStencilOpSeparate", P(gl::StencilOpSeparate)},
    {"glTestFenceNV", P(gl::TestFenceNV)},
    {"glTexImage2D", P(gl::TexImage2D)},
    {"glTexImage2DRobustANGLE", P(gl::TexImage2DRobustANGLE)},
    {"glTexImage3D", P(gl::TexImage3D)},
    {"glTexImage3DRobustANGLE", P(gl::TexImage3DRobustANGLE)},
    {"glTexParameterIivRobustANGLE", P(gl::TexParameterIivRobustANGLE)},
    {"glTexParameterIuivRobustANGLE", P(gl::TexParameterIuivRobustANGLE)},
    {"glTexParameterf", P(gl::TexParameterf)},
    {"glTexParameterfv", P(gl::TexParameterfv)},
    {"glTexParameterfvRobustANGLE", P(gl::TexParameterfvRobustANGLE)},
    {"glTexParameteri", P(gl::TexParameteri)},
    {"glTexParameteriv", P(gl::TexParameteriv)},
    {"glTexParameterivRobustANGLE", P(gl::TexParameterivRobustANGLE)},
    {"glTexStorage2D", P(gl::TexStorage2D)},
    {"glTexStorage2DEXT", P(gl::TexStorage2DEXT)},
    {"glTexStorage2DMultisample", P(gl::TexStorage2DMultisample)},
    {"glTexStorage3D", P(gl::TexStorage3D)},
    {"glTexSubImage2D", P(gl::TexSubImage2D)},
    {"glTexSubImage2DRobustANGLE", P(gl::TexSubImage2DRobustANGLE)},
    {"glTexSubImage3D", P(gl::TexSubImage3D)},
    {"glTexSubImage3DRobustANGLE", P(gl::TexSubImage3DRobustANGLE)},
    {"glTransformFeedbackVaryings", P(gl::TransformFeedbackVaryings)},
    {"glUniform1f", P(gl::Uniform1f)},
    {"glUniform1fv", P(gl::Uniform1fv)},
    {"glUniform1i", P(gl::Uniform1i)},
    {"glUniform1iv", P(gl::Uniform1iv)},
    {"glUniform1ui", P(gl::Uniform1ui)},
    {"glUniform1uiv", P(gl::Uniform1uiv)},
    {"glUniform2f", P(gl::Uniform2f)},
    {"glUniform2fv", P(gl::Uniform2fv)},
    {"glUniform2i", P(gl::Uniform2i)},
    {"glUniform2iv", P(gl::Uniform2iv)},
    {"glUniform2ui", P(gl::Uniform2ui)},
    {"glUniform2uiv", P(gl::Uniform2uiv)},
    {"glUniform3f", P(gl::Uniform3f)},
    {"glUniform3fv", P(gl::Uniform3fv)},
    {"glUniform3i", P(gl::Uniform3i)},
    {"glUniform3iv", P(gl::Uniform3iv)},
    {"glUniform3ui", P(gl::Uniform3ui)},
    {"glUniform3uiv", P(gl::Uniform3uiv)},
    {"glUniform4f", P(gl::Uniform4f)},
    {"glUniform4fv", P(gl::Uniform4fv)},
    {"glUniform4i", P(gl::Uniform4i)},
    {"glUniform4iv", P(gl::Uniform4iv)},
    {"glUniform4ui", P(gl::Uniform4ui)},
    {"glUniform4uiv", P(gl::Uniform4uiv)},
    {"glUniformBlockBinding", P(gl::UniformBlockBinding)},
    {"glUniformMatrix2fv", P(gl::UniformMatrix2fv)},
    {"glUniformMatrix2x3fv", P(gl::UniformMatrix2x3fv)},
    {"glUniformMatrix2x4fv", P(gl::UniformMatrix2x4fv)},
    {"glUniformMatrix3fv", P(gl::UniformMatrix3fv)},
    {"glUniformMatrix3x2fv", P(gl::UniformMatrix3x2fv)},
    {"glUniformMatrix3x4fv", P(gl::UniformMatrix3x4fv)},
    {"glUniformMatrix4fv", P(gl::UniformMatrix4fv)},
    {"glUniformMatrix4x2fv", P(gl::UniformMatrix4x2fv)},
    {"glUniformMatrix4x3fv", P(gl::UniformMatrix4x3fv)},
    {"glUnmapBuffer", P(gl::UnmapBuffer)},
    {"glUnmapBufferOES", P(gl::UnmapBufferOES)},
    {"glUseProgram", P(gl::UseProgram)},
    {"glUseProgramStages", P(gl::UseProgramStages)},
    {"glValidateProgram", P(gl::ValidateProgram)},
    {"glValidateProgramPipeline", P(gl::ValidateProgramPipeline)},
    {"glVertexAttrib1f", P(gl::VertexAttrib1f)},
    {"glVertexAttrib1fv", P(gl::VertexAttrib1fv)},
    {"glVertexAttrib2f", P(gl::VertexAttrib2f)},
    {"glVertexAttrib2fv", P(gl::VertexAttrib2fv)},
    {"glVertexAttrib3f", P(gl::VertexAttrib3f)},
    {"glVertexAttrib3fv", P(gl::VertexAttrib3fv)},
    {"glVertexAttrib4f", P(gl::VertexAttrib4f)},
    {"glVertexAttrib4fv", P(gl::VertexAttrib4fv)},
    {"glVertexAttribBinding", P(gl::VertexAttribBinding)},
    {"glVertexAttribDivisor", P(gl::VertexAttribDivisor)},
    {"glVertexAttribDivisorANGLE", P(gl::VertexAttribDivisorANGLE)},
    {"glVertexAttribFormat", P(gl::VertexAttribFormat)},
    {"glVertexAttribI4i", P(gl::VertexAttribI4i)},
    {"glVertexAttribI4iv", P(gl::VertexAttribI4iv)},
    {"glVertexAttribI4ui", P(gl::VertexAttribI4ui)},
    {"glVertexAttribI4uiv", P(gl::VertexAttribI4uiv)},
    {"glVertexAttribIFormat", P(gl::VertexAttribIFormat)},
    {"glVertexAttribIPointer", P(gl::VertexAttribIPointer)},
    {"glVertexAttribPointer", P(gl::VertexAttribPointer)},
    {"glVertexBindingDivisor", P(gl::VertexBindingDivisor)},
    {"glViewport", P(gl::Viewport)},
    {"glWaitSync", P(gl::WaitSync)}};

size_t g_numProcs = 516;
}  // namespace egl
