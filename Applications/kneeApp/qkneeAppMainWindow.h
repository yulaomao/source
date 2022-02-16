/*==============================================================================

  Copyright (c) Kitware, Inc.

  See http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware, Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qkneeAppMainWindow_h
#define __qkneeAppMainWindow_h

// knee includes
#include "qkneeAppExport.h"
class qkneeAppMainWindowPrivate;

// Slicer includes
#include "qSlicerMainWindow.h"

class Q_KNEE_APP_EXPORT qkneeAppMainWindow : public qSlicerMainWindow
{
  Q_OBJECT
public:
  typedef qSlicerMainWindow Superclass;

  qkneeAppMainWindow(QWidget *parent=0);
  virtual ~qkneeAppMainWindow();

public slots:
  void on_HelpAboutkneeAppAction_triggered();

protected:
  qkneeAppMainWindow(qkneeAppMainWindowPrivate* pimpl, QWidget* parent);

private:
  Q_DECLARE_PRIVATE(qkneeAppMainWindow);
  Q_DISABLE_COPY(qkneeAppMainWindow);
};

#endif
