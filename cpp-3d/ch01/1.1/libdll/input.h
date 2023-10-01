#include <bits/stdc++.h>
#include "Pen.h"
#include "MATH0.h"
#include "LoadModel.h"
#include "Model.h"
#include "sound.h"
#include "win.h"
#include "ctime"
#include <pthread.h>
#include <string>
#include <cstring>

void InputPenShow(string str);
void InputPenSpeed(int Right,string v1,string str);
void InputPenGo(int Right,string v1,string str);
void InputPenBack(int Right,string v1,string str);
void InputPenHome(string str);
void InputPenAngle(string v1,string v2,int Right,int Ncomma,string str);
void InputPenArc(string v1,string v2,string v3,int Right,string str);
void InputPenMove(string v1,string v2,string v3,int Right,int Ncomma,string str);
void InputPenMoveTo(string v1,string v2,string v3,int Right,int Ncomma,string str);
void InputPenDotWidth(string v1,int Right,string str);
void InputPenLineWidth(string v1,int Right,string str);
void InputPenLine(string v1,string v2,string v3,string v4,string v5,string v6,int Right,int Ncomma,string str);
void InputPenGetX(string str);
void InputPenGetY(string str);
void InputPenGetZ(string str);
void InputPenGetAngleXY(string str);
void InputPenGetAngleXZ(string str);
void InputPenFont(string v1,int Left,int Right,string str);
void InputPenFontSize(string v1,int Right,string str);
void InputPenText(string v1,string v2,string v3,string v4,int Right,int Ncomma,string str);
void InputPenColor(string v1,string v2,string v3,int Right,int Ncomma,string str);
void InputPenPoint(string v1,string v2,string v3,int Right,int Ncomma,string str);

void InputModelTeapot(string v1,string v2,int Right,string str);
void InputModelMaterial(string v1,int Left,int Right,string str);
void InputModelRotate(string v1,string v2,string v3,string v4,int Left,int Right,int Ncomma,string str);
void InputModelArc(string v1,string v2,string v3,string v4,int Right,string str);
void InputModelPentagram1(string v1,int Right,string str);
void InputModelPentagram2(string v1,int Right,string str);
void InputModelPentagram3(string v1,int Right,string str);
void InputModelPentagram3D(string v1,string v2,int Right,string str);
void InputModelRectangle1(string v1,string v2,int Right,string str);
void InputModelRectangle2(string v1,string v2,int Right,string str);
void InputModelTrangle(string v1,string v2,string v3,string v4,string v5,string v6,string v7,string v8,string v9,int Right,int Ncomma,string str);
void InputModelCircle1(string v1,int Right,string str);
void InputModelCircle2(string v1,int Right,string str);
void InputModelElliptic1(string v1,string v2,int Right,string str);
void InputModelElliptic2(string v1,string v2,int Right,string str);
void InputModelElliptic(string v1,string v2,string v3,int Right,string str);
void InputModelPentagon(string v1,int Right,string str);
void InputModelPolygon1(string v1,string v2,int Right,string str);
void InputModelPolygon2(string v1,string v2,int Right,string str);
void InputModelFan(string v1,string v2,string v3,int Right,int Ncomma,string str);
void InputModelSuperStar(string v1,string v2,int Right,string str);
void InputModelSuperSphere(string v1,string v2,int Right,string str);
void InputModelSuperElliptic(string v1,string v2,string v3,int Right,string str);
void InputModelCube(string v1,string v2,int Right,string str);
void InputModelSphere(string v1,string v2,string v3,int Right,string str);
void InputModelCone(string v1,string v2,string v3,string v4,int Right,string str);
void InputModelTorus(string v1,string v2,string v3,string v4,int Right,string str);
void InputModelCube4(string v1,string v2,int Right,string str);
void InputModelCube8(string v1,string v2,int Right,string str);
void InputModelCube16(string v1,string v2,int Right,string str);
void InputModelCube20(string v1,string v2,int Right,string str);
void InputModelColorPyramid(string v1,string v2,int Right,string str);
void InputModelPyramid(string v1,string v2,string v3,int Right,int Ncomma,string str);
void InputModelColorCuboid(string v1,string v2,string v3,int Right,string str);
void InputModelCuboid(string v1,string v2,string v3,int Right,string str);
void InputModelColorSphere(string v1,string v2,string v3,int Right,string str);
void InputModelMagicSphere(string v1,string v2,string v3,int Right,string str);
void InputModelColorElliptic(string v1,string v2,string v3,string v4,int Right,string str);
void InputModelMagicElliptic(string v1,string v2,string v3,string v4,int Right,string str);
void InputModelCylinder(string v1,string v2,string v3,int Right,string str);
void InputModelMagicCylinder(string v1,string v2,string v3,int Right,string str);
void InputModelMagicCup(string v1,string v2,string v3,int Right,string str);
void InputModelMagicCircular(string v1,string v2,string v3,int Right,string str);
void InputModelColorCircular(string v1,string v2,string v3,int Right,string str);
void InputModelColorCup(string v1,string v2,string v3,int Right,string str);
void InputModelCup(string v1,string v2,string v3,int Right,string str);
void InputModelColorCylinder(string v1,string v2,string v3,int Right,string str);
void InputModelCircular(string v1,string v2,string v3,int Right,string str);
void InputModelDisc(string v1,string v2,string v3,int Right,string str);
void InputModelPartDisc(string v1,string v2,string v3,string v4,string v5,int Right,string str);
void InputModelPyramid(string v1,string v2,string v3,int Right,int Ncomma,string str);
void InputModelTexture(string v1,string v2,string v3,string v4,string v5,string v6,string v7,string v8,string v9,string v10,int Right,string str);
void InputModelHalfSphere(string v1,string v2,int Right,string str);
void InputModelCut(string v1,string v2,int Right,int Ncomma,string str);
void InputModelPolygon2(string v1,string v2,string v3,int Right,int Ncomma,string str);
void InputModelPolygon4(string v1,string v2,string v3,int Right,int Ncomma,string str);
void InputModelHeart(string v1,string v2,int Right,string str);

void InputWinName(string v1,int Right,string str);
void InputWinSize(string v1,string v2,int Right,string str);
void InputWinPlace(string v1,string v2,int Right,string str);
void InputWinChessBoard(string v1,string v2,int Right,string str);
void InputWinBackColor(string v1,string v2,string v3,int Right,int Ncomma,string str);
void InputWinBackground(string v1,int Right,string str);
void InputWinSet3D(string v1,int Right,string str);
void InputWinShowXY(string v1,int Left,int Right,string str);
void InputWinRun(string v1,string v2,int Right,string str);
void InputWinFrogDesity(string v1,int Right,string str);
void InputWinFrog(string v1,int Right,string str);
void InputWinWait(string v1,int Right,string str);
void InputWinInfo(string v1,int Right,string str);
void InputWinMessage(string v1,int Right,string str);
void InputWinCout(string v1,int Right,string str);
void InputAdd(string v1,string v2,int Right,string str);
void InputSubtrack(string v1,string v2,int Right,string str);
void InputMultiply(string v1,string v2,int Right,string str);
void InputDivision(string v1,string v2,int Right,string str);
void InputFactorial(string v1,string v2,int Right,string str);
void InputConvert10_2(string v1,string v2,int Right,string str);
void InputConvert10_N(string v1,string v2,int Right,string str);
void InputConvertN_10(string v1,string v2,int Right,string str);
void InputSpeechSpeak(string v1,int Right,string str);
