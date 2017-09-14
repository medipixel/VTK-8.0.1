/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkRenderingVolumeOpenGLObjectFactory.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef __vtkRenderingVolumeOpenGLObjectFactory_h
#define __vtkRenderingVolumeOpenGLObjectFactory_h

#include "vtkRenderingVolumeOpenGLModule.h" // For export macro
#include "vtkObjectFactory.h"

class VTKRENDERINGVOLUMEOPENGL_EXPORT vtkRenderingVolumeOpenGLObjectFactory : public vtkObjectFactory
{
public:
  static vtkRenderingVolumeOpenGLObjectFactory * New();
  vtkTypeMacro(vtkRenderingVolumeOpenGLObjectFactory, vtkObjectFactory)

  const char * GetDescription() VTK_OVERRIDE { return "vtkRenderingVolumeOpenGL factory overrides."; }

  const char * GetVTKSourceVersion() VTK_OVERRIDE;

  void PrintSelf(ostream &os, vtkIndent indent) VTK_OVERRIDE;

protected:
  vtkRenderingVolumeOpenGLObjectFactory();

private:
  vtkRenderingVolumeOpenGLObjectFactory(const vtkRenderingVolumeOpenGLObjectFactory&) VTK_DELETE_FUNCTION;
  void operator=(const vtkRenderingVolumeOpenGLObjectFactory&) VTK_DELETE_FUNCTION;
};

#endif // __vtkRenderingVolumeOpenGLObjectFactory_h
