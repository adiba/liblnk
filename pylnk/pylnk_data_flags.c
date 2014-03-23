/*
 * Python object definition of the liblnk data flags
 *
 * Copyright (C) 2009-2014, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <common.h>
#include <types.h>

#if defined( HAVE_STDLIB_H ) || defined( HAVE_WINAPI )
#include <stdlib.h>
#endif

#include "pylnk_data_flags.h"
#include "pylnk_liblnk.h"
#include "pylnk_python.h"
#include "pylnk_unused.h"

PyTypeObject pylnk_data_flags_type_object = {
	PyObject_HEAD_INIT( NULL )

	/* ob_size */
	0,
	/* tp_name */
	"pylnk.data_flags",
	/* tp_basicsize */
	sizeof( pylnk_data_flags_t ),
	/* tp_itemsize */
	0,
	/* tp_dealloc */
	(destructor) pylnk_data_flags_free,
	/* tp_print */
	0,
	/* tp_getattr */
	0,
	/* tp_setattr */
	0,
	/* tp_compare */
	0,
	/* tp_repr */
	0,
	/* tp_as_number */
	0,
	/* tp_as_sequence */
	0,
	/* tp_as_mapping */
	0,
	/* tp_hash */
	0,
	/* tp_call */
	0,
	/* tp_str */
	0,
	/* tp_getattro */
	0,
	/* tp_setattro */
	0,
	/* tp_as_buffer */
	0,
        /* tp_flags */
	Py_TPFLAGS_DEFAULT,
	/* tp_doc */
	"pylnk data flags object (wraps LIBLNK_DATA_FLAGS)",
	/* tp_traverse */
	0,
	/* tp_clear */
	0,
	/* tp_richcompare */
	0,
	/* tp_weaklistoffset */
	0,
	/* tp_iter */
	0,
	/* tp_iternext */
	0,
	/* tp_methods */
	0,
	/* tp_members */
	0,
	/* tp_getset */
	0,
	/* tp_base */
	0,
	/* tp_dict */
	0,
	/* tp_descr_get */
	0,
	/* tp_descr_set */
	0,
	/* tp_dictoffset */
	0,
	/* tp_init */
	(initproc) pylnk_data_flags_init,
	/* tp_alloc */
	0,
	/* tp_new */
	0,
	/* tp_free */
	0,
	/* tp_is_gc */
	0,
	/* tp_bases */
	NULL,
	/* tp_mro */
	NULL,
	/* tp_cache */
	NULL,
	/* tp_subclasses */
	NULL,
	/* tp_weaklist */
	NULL,
	/* tp_del */
	0
};

/* Initializes the type object
 * Returns 1 if successful or -1 on error
 */
int pylnk_data_flags_init_type(
     PyTypeObject *type_object )
{
	if( type_object == NULL )
	{
		return( -1 );
	}
	type_object->tp_dict = PyDict_New();

	if( type_object->tp_dict == NULL )
	{
		return( -1 );
	}
	if( PyDict_SetItemString(
             type_object->tp_dict,
             "HAS_LINK_TARGET_IDENTIFIER",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_HAS_LINK_TARGET_IDENTIFIER ) ) != 0 )
	{
		goto on_error;
	}
	if( PyDict_SetItemString(
             type_object->tp_dict,
             "HAS_LOCATION_INFORMATION",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_HAS_LOCATION_INFORMATION ) ) != 0 )
	{
		goto on_error;
	}
	if( PyDict_SetItemString(
             type_object->tp_dict,
             "HAS_DESCRIPTION_STRING",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_HAS_DESCRIPTION_STRING ) ) != 0 )
	{
		goto on_error;
	}
	if( PyDict_SetItemString(
             type_object->tp_dict,
             "HAS_RELATIVE_PATH_STRING",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_HAS_RELATIVE_PATH_STRING ) ) != 0 )
	{
		goto on_error;
	}
	if( PyDict_SetItemString(
             type_object->tp_dict,
             "HAS_WORKING_DIRECTORY_STRING",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_HAS_WORKING_DIRECTORY_STRING ) ) != 0 )
	{
		goto on_error;
	}
	if( PyDict_SetItemString(
             type_object->tp_dict,
             "HAS_COMMAND_LINE_ARGUMENTS_STRING",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_HAS_COMMAND_LINE_ARGUMENTS_STRING ) ) != 0 )
	{
		goto on_error;
	}
	if( PyDict_SetItemString(
             type_object->tp_dict,
             "HAS_ICON_LOCATION_STRING",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_HAS_ICON_LOCATION_STRING ) ) != 0 )
	{
		goto on_error;
	}
	if( PyDict_SetItemString(
             type_object->tp_dict,
             "IS_UNICODE",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_IS_UNICODE ) ) != 0 )
	{
		goto on_error;
	}
	if( PyDict_SetItemString(
             type_object->tp_dict,
             "FORCE_NO_LOCATION_INFORMATION",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_FORCE_NO_LOCATION_INFORMATION ) ) != 0 )
	{
		goto on_error;
	}
	if( PyDict_SetItemString(
             type_object->tp_dict,
             "HAS_ENVIRONMENT_VARIABLES_LOCATION_BLOCK",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_HAS_ENVIRONMENT_VARIABLES_LOCATION_BLOCK ) ) != 0 )
	{
		goto on_error;
	}
	if( PyDict_SetItemString(
             type_object->tp_dict,
             "RUN_IN_SEPARATE_PROCESS",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_RUN_IN_SEPARATE_PROCESS ) ) != 0 )
	{
		goto on_error;
	}

	if( PyDict_SetItemString(
             type_object->tp_dict,
             "HAS_DARWIN_IDENTIFIER",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_HAS_DARWIN_IDENTIFIER ) ) != 0 )
	{
		goto on_error;
	}
	if( PyDict_SetItemString(
             type_object->tp_dict,
             "RUN_AS_USER",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_RUN_AS_USER ) ) != 0 )
	{
		goto on_error;
	}
	if( PyDict_SetItemString(
             type_object->tp_dict,
             "HAS_ICON_LOCATION_BLOCK",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_HAS_ICON_LOCATION_BLOCK ) ) != 0 )
	{
		goto on_error;
	}
	if( PyDict_SetItemString(
             type_object->tp_dict,
             "NO_PIDL_ALIAS",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_NO_PIDL_ALIAS ) ) != 0 )
	{
		goto on_error;
	}

	if( PyDict_SetItemString(
             type_object->tp_dict,
             "RUN_WITH_SHIM_LAYER",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_RUN_WITH_SHIM_LAYER ) ) != 0 )
	{
		goto on_error;
	}
	if( PyDict_SetItemString(
             type_object->tp_dict,
             "NO_DISTRIBUTED_LINK_TRACKING_DATA_BLOCK",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_NO_DISTRIBUTED_LINK_TRACKING_DATA_BLOCK ) ) != 0 )
	{
		goto on_error;
	}
	if( PyDict_SetItemString(
             type_object->tp_dict,
             "HAS_METADATA_PROPERTY_STORE_DATA_BLOCK",
             PyInt_FromLong(
              LIBLNK_DATA_FLAG_HAS_METADATA_PROPERTY_STORE_DATA_BLOCK ) ) != 0 )
	{
		goto on_error;
	}
	return( 1 );

on_error:
	if( type_object->tp_dict != NULL )
	{
		Py_DecRef(
		 type_object->tp_dict );

		type_object->tp_dict = NULL;
	}
	return( -1 );
}

/* Creates a new data flags object
 * Returns a Python object if successful or NULL on error
 */
PyObject *pylnk_data_flags_new(
           void )
{
	pylnk_data_flags_t *pylnk_data_flags = NULL;
	static char *function                = "pylnk_data_flags_new";

	pylnk_data_flags = PyObject_New(
	                    struct pylnk_data_flags,
	                    &pylnk_data_flags_type_object );

	if( pylnk_data_flags == NULL )
	{
		PyErr_Format(
		 PyExc_MemoryError,
		 "%s: unable to initialize data flags.",
		 function );

		goto on_error;
	}
	if( pylnk_data_flags_init(
	     pylnk_data_flags ) != 0 )
	{
		PyErr_Format(
		 PyExc_MemoryError,
		 "%s: unable to initialize data flags.",
		 function );

		goto on_error;
	}
	return( (PyObject *) pylnk_data_flags );

on_error:
	if( pylnk_data_flags != NULL )
	{
		Py_DecRef(
		 (PyObject *) pylnk_data_flags );
	}
	return( NULL );
}

/* Intializes a data flags object
 * Returns 0 if successful or -1 on error
 */
int pylnk_data_flags_init(
     pylnk_data_flags_t *pylnk_data_flags )
{
	static char *function = "pylnk_data_flags_init";

	if( pylnk_data_flags == NULL )
	{
		PyErr_Format(
		 PyExc_TypeError,
		 "%s: invalid data flags.",
		 function );

		return( -1 );
	}
	return( 0 );
}

/* Frees a data flags object
 */
void pylnk_data_flags_free(
      pylnk_data_flags_t *pylnk_data_flags )
{
	static char *function = "pylnk_data_flags_free";

	if( pylnk_data_flags == NULL )
	{
		PyErr_Format(
		 PyExc_TypeError,
		 "%s: invalid data flags.",
		 function );

		return;
	}
	if( pylnk_data_flags->ob_type == NULL )
	{
		PyErr_Format(
		 PyExc_TypeError,
		 "%s: invalid data flags - missing ob_type.",
		 function );

		return;
	}
	if( pylnk_data_flags->ob_type->tp_free == NULL )
	{
		PyErr_Format(
		 PyExc_TypeError,
		 "%s: invalid data flags - invalid ob_type - missing tp_free.",
		 function );

		return;
	}
	pylnk_data_flags->ob_type->tp_free(
	 (PyObject*) pylnk_data_flags );
}

