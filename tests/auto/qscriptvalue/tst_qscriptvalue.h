/****************************************************************************
**
** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the test suite of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** No Commercial Usage
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the Technology Preview License Agreement accompanying
** this package.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef TST_QSCRIPTVALUE_H
#define TST_QSCRIPTVALUE_H

#include <QtCore/qobject.h>
#include <QtCore/qnumeric.h>
#include <QtScript/qscriptclass.h>
#include <QtScript/qscriptengine.h>
#include <QtScript/qscriptvalue.h>
#include <QtTest/QtTest>

Q_DECLARE_METATYPE(QVariant)
Q_DECLARE_METATYPE(QScriptValue)

class tst_QScriptValue : public QObject
{
    Q_OBJECT

public:
    tst_QScriptValue();
    virtual ~tst_QScriptValue();

private slots:
    void toObject();

    void ctor_invalid();
    void ctor_undefinedWithEngine();
    void ctor_undefined();
    void ctor_nullWithEngine();
    void ctor_null();
    void ctor_boolWithEngine();
    void ctor_bool();
    void ctor_intWithEngine();
    void ctor_int();
    void ctor_uintWithEngine();
    void ctor_uint();
    void ctor_floatWithEngine();
    void ctor_float();
    void ctor_stringWithEngine();
    void ctor_string();
    void ctor_copyAndAssignWithEngine();
    void ctor_copyAndAssign();
    void ctor_nullEngine();

    void toString();
    void toNumber();
    void toBoolean();
    void toBool();
    void toInteger();
    void toInt32();
    void toUInt32();
    void toUInt16();
    void toVariant();
    void toQObject_nonQObject_data();
    void toQObject_nonQObject();
    void toQObject();
    void toDateTime();
    void toRegExp();
    void instanceOf_twoEngines();
    void instanceOf();
    void isArray_data();
    void isArray();
    void isDate();
    void isDate_data();
    void isError_propertiesOfGlobalObject();
    void isError_data();
    void isError();
    void isRegExp_data();
    void isRegExp();

    void lessThan();
    void equals();
    void strictlyEquals();

    void getSetPrototype_cyclicPrototype();
    void getSetPrototype_evalCyclicPrototype();
    void getSetPrototype_eval();
    void getSetPrototype_invalidPrototype();
    void getSetPrototype_twoEngines();
    void getSetPrototype_null();
    void getSetPrototype_notObjectOrNull();
    void getSetPrototype();
    void getSetScope();
    void getSetProperty_HooliganTask162051();
    void getSetProperty_HooliganTask183072();
    void getSetProperty_propertyRemoval();
    void getSetProperty_resolveMode();
    void getSetProperty_twoEngines();
    void getSetProperty_gettersAndSetters();
    void getSetProperty_gettersAndSettersThrowErrorNative();
    void getSetProperty_gettersAndSettersThrowErrorJS();
    void getSetProperty_gettersAndSettersOnNative();
    void getSetProperty_gettersAndSettersOnGlobalObject();
    void getSetProperty_gettersAndSettersChange();
    void getSetProperty_array();
    void getSetProperty();
    void arrayElementGetterSetter();
    void getSetData_objects_data();
    void getSetData_objects();
    void getSetData_nonObjects_data();
    void getSetData_nonObjects();
    void setData_QTBUG15144();
    void getSetScriptClass_emptyClass_data();
    void getSetScriptClass_emptyClass();
    void getSetScriptClass_JSObjectFromCpp();
    void getSetScriptClass_JSObjectFromJS();
    void getSetScriptClass_QVariant();
    void getSetScriptClass_QObject();
    void call_function();
    void call_object();
    void call_newObjects();
    void call_this();
    void call_arguments();
    void call();
    void call_invalidArguments();
    void call_invalidReturn();
    void call_twoEngines();
    void call_array();
    void call_nonFunction_data();
    void call_nonFunction();
    void construct_nonFunction_data();
    void construct_nonFunction();
    void construct_simple();
    void construct_newObjectJS();
    void construct_undefined();
    void construct_newObjectCpp();
    void construct_arg();
    void construct_proto();
    void construct_returnInt();
    void construct_throw();
    void construct();
    void construct_twoEngines();
    void construct_constructorThrowsPrimitive();
    void castToPointer();
    void prettyPrinter_data();
    void prettyPrinter();
    void engineDeleted();
    void valueOfWithClosure();
    void objectId();
    void nestedObjectToVariant_data();
    void nestedObjectToVariant();
    void propertyFlags_data();
    void propertyFlags();


private:
    void newEngine()
    {
        if (engine)
            delete engine;
        engine = new QScriptEngine();
    }
    QScriptEngine *engine;
};

#endif
