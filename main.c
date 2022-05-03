#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <threads.h>

#include "metaresc.h"

// TYPEDEF_STRUCT(sample_model_t,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children)
// );


// P00_TYPEDEF (
// 	STRUCT,
// 	sample_model_t,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children)
// );


// P00_TYPEDEF_ (
// 	__COUNTER__,
// 	STRUCT,
// 	sample_model_t,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children)
// );


// MR_IF_ELSE (MR_PASTE2 (MR_IS_MR_MODE_EQ_, MR_MODE))
// (
// 	P00_TYPEDEF_MODE (
// 		MR_MODE,
// 		84,
// 		STRUCT,
// 		sample_model_t,
// 		(uint32_t, number),
// 		(char, name, [8]),
// 		(size_t, children_size),
// 		(sample_model_t*, children)
// 	)
// )
// (
// 	P00_TYPEDEF_MODE (
// 		PROTO,
// 		84,
// 		STRUCT,
// 		sample_model_t,
// 		(uint32_t, number),
// 		(char, name, [8]),
// 		(size_t, children_size),
// 		(sample_model_t*, children)
// 	)
// 	P00_TYPEDEF_MODE (
// 		DESC,
// 		84,
// 		STRUCT,
// 		sample_model_t,
// 		(uint32_t, number),
// 		(char, name, [8]),
// 		(size_t, children_size),
// 		(sample_model_t*, children)
// 	)
// );


// P00_TYPEDEF_MODE (
// 	PROTO,
// 	84,
// 	STRUCT,
// 	sample_model_t,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children)
// )
// P00_TYPEDEF_MODE (
// 	DESC,
// 	84,
// 	STRUCT,
// 	sample_model_t,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children)
// )


// P00_TYPEDEF_MODE_ (
// 	PROTO,
// 	84,
// 	STRUCT,
// 	ATTRIBUTES (
// 		P00_GET_ATTRIBUTES (
// 			sample_model_t,
// 			(uint32_t, number),
// 			(char, name, [8]),
// 			(size_t, children_size),
// 			(sample_model_t*, children)
// 		)
// 	),
// 	P00_GET_NON_ATTRIBUTES (
// 		sample_model_t,
// 		(uint32_t, number),
// 		(char, name, [8]),
// 		(size_t, children_size),
// 		(sample_model_t*, children)
// 	)
// )
// P00_TYPEDEF_MODE_ (
// 	DESC,
// 	84,
// 	STRUCT,
// 	ATTRIBUTES (
// 		P00_GET_ATTRIBUTES (
// 			sample_model_t,
// 			(uint32_t, number),
// 			(char, name, [8]),
// 			(size_t, children_size),
// 			(sample_model_t*, children)
// 		)
// 	),
// 	P00_GET_NON_ATTRIBUTES (
// 		sample_model_t,
// 		(uint32_t, number),
// 		(char, name, [8]),
// 		(size_t, children_size),
// 		(sample_model_t*, children)
// 	)
// );




// P00_TYPEDEF_MODE_ (
// 	PROTO,
// 	84,
// 	STRUCT,
// 	ATTRIBUTES (
// 		MR_FOREACH (
// 			P00_EXTRACT_ATTRIBUTES,
// 			sample_model_t,
// 			(uint32_t, number),
// 			(char, name, [8]),
// 			(size_t, children_size),
// 			(sample_model_t*, children)
// 		)
// 	),
// 	MR_FOREACH (
// 		P00_EXTRACT_NON_ATTRIBUTES,
// 		sample_model_t,
// 		(uint32_t, number),
// 		(char, name, [8]),
// 		(size_t, children_size),
// 		(sample_model_t*, children)
// 	)
// )
// P00_TYPEDEF_MODE_ (
// 	DESC,
// 	84,
// 	STRUCT,
// 	ATTRIBUTES (
// 		MR_FOREACH (
// 			P00_EXTRACT_ATTRIBUTES,
// 			sample_model_t,
// 			(uint32_t, number), 
// 			(char, name, [8]),
// 			(size_t, children_size),
// 			(sample_model_t*, children)
// 		)
// 	),
// 	MR_FOREACH (
// 		P00_EXTRACT_NON_ATTRIBUTES,
// 		sample_model_t,
// 		(uint32_t, number),
// 		(char, name, [8]),
// 		(size_t, children_size),
// 		(sample_model_t*, children)
// 	)
// );




// P00_TYPEDEF_MODE_ (
// 	PROTO,
// 	84,
// 	STRUCT,
// 	ATTRIBUTES (
// 		P00_EXTRACT_ATTRIBUTES (sample_model_t)
// 		P00_EXTRACT_ATTRIBUTES ((uint32_t, number))
// 		P00_EXTRACT_ATTRIBUTES ((char, name, [8]))
// 		P00_EXTRACT_ATTRIBUTES ((size_t, children_size))
// 		P00_EXTRACT_ATTRIBUTES ((sample_model_t*, children))
// 	),
// 	P00_EXTRACT_NON_ATTRIBUTES (sample_model_t)
// 	P00_EXTRACT_NON_ATTRIBUTES ((uint32_t, number))
// 	P00_EXTRACT_NON_ATTRIBUTES ((char, name, [8]))
// 	P00_EXTRACT_NON_ATTRIBUTES ((size_t, children_size))
// 	P00_EXTRACT_NON_ATTRIBUTES ((sample_model_t*, children))
// )
// P00_TYPEDEF_MODE_ (
// 	DESC,
// 	84,
// 	STRUCT,
// 	ATTRIBUTES (
// 		P00_EXTRACT_ATTRIBUTES (sample_model_t)
// 		P00_EXTRACT_ATTRIBUTES ((uint32_t, number))
// 		P00_EXTRACT_ATTRIBUTES ((char, name, [8]))
// 		P00_EXTRACT_ATTRIBUTES ((size_t, children_size))
// 		P00_EXTRACT_ATTRIBUTES ((sample_model_t*, children))
// 	),
// 	P00_EXTRACT_NON_ATTRIBUTES (sample_model_t)
// 	P00_EXTRACT_NON_ATTRIBUTES ((uint32_t, number))
// 	P00_EXTRACT_NON_ATTRIBUTES ((char, name, [8]))
// 	P00_EXTRACT_NON_ATTRIBUTES ((size_t, children_size))
// 	P00_EXTRACT_NON_ATTRIBUTES ((sample_model_t*, children))
// );




// P00_TYPEDEF_MODE_ (
// 	PROTO,
// 	84,
// 	STRUCT,
// 	ATTRIBUTES (
// 		MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ sample_model_t))
// 		(

// 		)
// 		(
// 			MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, sample_model_t))
// 			(

// 			)
// 			(
// 				MR_PASTE2 (P00_REMOVE_, sample_model_t)
// 			)
// 		)

// 		MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ (uint32_t, number)))
// 		(

// 		)
// 		(
// 			MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, (uint32_t, number)))
// 			(

// 			)
// 			(
// 				MR_PASTE2 (P00_REMOVE_, (uint32_t, number))
// 			)
// 		)

// 		MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ (char, name, [8])))
// 		(

// 		)
// 		(
// 			MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, (char, name, [8])))
// 			(

// 			)
// 			(
// 				MR_PASTE2 (P00_REMOVE_, (char, name, [8]))
// 			)
// 		)

// 		MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ (size_t, children_size)))
// 		(

// 		)
// 		(
// 			MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, (size_t, children_size)))
// 			(

// 			)
// 			(
// 				MR_PASTE2 (P00_REMOVE_, (size_t, children_size))
// 			)
// 		)

// 		MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ (sample_model_t*, children)))
// 		(

// 		)
// 		(
// 			MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, (sample_model_t*, children)))
// 			(

// 			)
// 			(
// 				MR_PASTE2 (P00_REMOVE_, (sample_model_t*, children))
// 			)
// 		)

// 	),

// 	MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ sample_model_t))
// 	(
// 		sample_model_t,
// 	)
// 	(
// 		MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, sample_model_t))
// 		(
// 			sample_model_t,
// 		)
// 		(

// 		)
// 	)

// 	MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ (uint32_t, number)))
// 	(
// 		(uint32_t, number),
// 	)
// 	(
// 		MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, (uint32_t, number)))
// 		(
// 			(uint32_t, number),
// 		)
// 		(

// 		)
// 	)

// 	MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ (char, name, [8])))
// 	(
// 		(char, name, [8]),
// 	)
// 	(
// 		MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, (char, name, [8])))
// 		(
// 			(char, name, [8]),
// 		)
// 		(

// 		)
// 	)

// 	MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ (size_t, children_size)))
// 	(
// 		(size_t, children_size),
// 	)
// 	(
// 		MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, (size_t, children_size)))
// 		(
// 			(size_t, children_size),
// 		)
// 		(

// 		)
// 	)

// 	MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ (sample_model_t*, children)))
// 	(
// 		(sample_model_t*, children),
// 	)
// 	(
// 		MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, (sample_model_t*, children)))
// 		(
// 			(sample_model_t*, children),
// 		)
// 		(

// 		)
// 	)
// )
// P00_TYPEDEF_MODE_ (
// 	DESC,
// 	84,
// 	STRUCT,
// 	ATTRIBUTES (
// 		MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ sample_model_t))
// 		(

// 		)
// 		(
// 			MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, sample_model_t))
// 			(

// 			)
// 			(
// 				MR_PASTE2 (P00_REMOVE_, sample_model_t)
// 			)
// 		)

// 		MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ (uint32_t, number)))
// 		(

// 		)
// 		(
// 			MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, (uint32_t, number)))
// 			(

// 			)
// 			(
// 				MR_PASTE2 (P00_REMOVE_, (uint32_t, number))
// 			)
// 		)

// 		MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ (char, name, [8])))
// 		(

// 		)
// 		(
// 			MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, (char, name, [8])))
// 			(

// 			)
// 			(
// 				MR_PASTE2 (P00_REMOVE_, (char, name, [8]))
// 			)
// 		)

// 		MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ (size_t, children_size)))
// 		(

// 		)
// 		(
// 			MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, (size_t, children_size)))
// 			(

// 			)
// 			(
// 				MR_PASTE2 (P00_REMOVE_, (size_t, children_size))
// 			)
// 		)

// 		MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ (sample_model_t*, children)))
// 		(

// 		)
// 		(
// 			MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, (sample_model_t*, children)))
// 			(

// 			)
// 			(
// 				MR_PASTE2 (P00_REMOVE_, (sample_model_t*, children))
// 			)
// 		)
// 	),
	
// 	MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ sample_model_t))
// 	(
// 		sample_model_t,
// 	)
// 	(
// 		MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, sample_model_t))
// 		(
// 			sample_model_t,
// 		)
// 		(

// 		)
// 	)

// 	MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ (uint32_t, number)))
// 	(
// 		(uint32_t, number),
// 	)
// 	(
// 		MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, (uint32_t, number)))
// 		(
// 			(uint32_t, number),
// 		)
// 		(

// 		)
// 	)

// 	MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ (char, name, [8])))
// 	(
// 		(char, name, [8]),
// 	)
// 	(
// 		MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, (char, name, [8])))
// 		(
// 			(char, name, [8]),
// 		)
// 		(

// 		)
// 	)

// 	MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ (size_t, children_size)))
// 	(
// 		(size_t, children_size),
// 	)
// 	(
// 		MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, (size_t, children_size)))
// 		(
// 			(size_t, children_size),
// 		)
// 		(

// 		)
// 	)

// 	MR_IF_ELSE (MR_HAS_COMMA (P00_IS__EQ__ (sample_model_t*, children)))
// 	(
// 		(sample_model_t*, children),
// 	)
// 	(
// 		MR_IF_ELSE (MR_PASTE2 (P00_IS_ATTRIBUTES_EQ_, (sample_model_t*, children)))
// 		(
// 			(sample_model_t*, children),
// 		)
// 		(

// 		)
// 	)
// );






// P00_TYPEDEF_MODE_ (
// 	PROTO,
// 	84,
// 	STRUCT,
// 	ATTRIBUTES(),
// 	sample_model_t,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children),
// )
// P00_TYPEDEF_MODE_ (
// 	DESC,
// 	84,
// 	STRUCT,
// 	ATTRIBUTES(),
// 	sample_model_t,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children),
// );



// P00_TYPEDEF_ATTR_STRUCT
// (
// 	PROTO,
// 	84,
// 	STRUCT,
// 	ATTRIBUTES(),
// 	sample_model_t,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children),
// )
// P00_TYPEDEF_ATTR_STRUCT
// (
// 	DESC,
// 	84,
// 	STRUCT,
// 	ATTRIBUTES(),
// 	sample_model_t,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children),
// )


// TYPEDEF_ATTR(
// 	PROTO,
// 	84,
// 	STRUCT,
// 	ATTRIBUTES(),
// 	sample_model_t,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children),
// );
// TYPEDEF_ATTR(
// 	DESC,
// 	84,
// 	STRUCT,
// 	ATTRIBUTES(),
// 	sample_model_t,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children),
// );






// P00_UNFOLD (
// 	MR_TYPEDEF_,
// 	STRUCT,
// 	PROTO,
// 	84,
// 	sample_model_t
// )
// MR_FOR (
// 	(PROTO, sample_model_t),
// 	MR_NARG (
// 		(uint32_t, number),
// 		(char, name, [8]),
// 		(size_t, children_size),
// 		(sample_model_t*, children),
// 	),
// 	MR_SER,
// 	MR_PASTE3 (
// 		P00_,
// 		STRUCT,
// 		_HANDLER
// 	),
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children),
// )
// P00_UNFOLD (
// 	MR_END_,
// 	STRUCT,
// 	PROTO,
// 	84,
// 	sample_model_t,
// 	MR_PASTE2 (
// 		P00_REMOVE_,
// 		ATTRIBUTES()
// 	)
// )
// P00_UNFOLD(
// 	MR_TYPEDEF_,
// 	STRUCT,
// 	DESC,
// 	84,
// 	sample_model_t
// )
// MR_FOR(
// 	(DESC, sample_model_t),
// 	MR_NARG(
// 		(uint32_t, number),
// 		(char, name, [8]),
// 		(size_t, children_size),
// 		(sample_model_t*, children),
// 		),
// 	MR_SER,
// 	MR_PASTE3(
// 		P00_,
// 		STRUCT,
// 		_HANDLER
// 	),
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children),
// )
// P00_UNFOLD(
// 	MR_END_,
// 	STRUCT,
// 	DESC,
// 	84,
// 	sample_model_t,
// 	MR_PASTE2(
// 		P00_REMOVE_,
// 		ATTRIBUTES()
// 	)
// )







// MR_PASTE4(MR_TYPEDEF_, STRUCT, _, PROTO) (84, sample_model_t)
// MR_FOR(
// 	(PROTO, sample_model_t),
// 	4,
// 	MR_SER,
// 	P00_STRUCT_HANDLER,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children),
// 	)
// P00_UNFOLD(
// 	MR_END_,
// 	STRUCT,
// 	PROTO,
// 	84,
// 	sample_model_t,
// 	P00_REMOVE_ATTRIBUTES()
// )
// MR_PASTE4(MR_TYPEDEF_, STRUCT, _, DESC) (84, sample_model_t)
// MR_FOR(
// 	(DESC, sample_model_t),
// 	4,
// 	MR_SER,
// 	P00_STRUCT_HANDLER,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children),
// )
// P00_UNFOLD(
// 	MR_END_,
// 	STRUCT,
// 	DESC,
// 	84,
// 	sample_model_t,
// 	P00_REMOVE_ATTRIBUTES()
// )



// MR_TYPEDEF_STRUCT_PROTO (84, sample_model_t)
// MR_FOR4 (
// 	(PROTO, sample_model_t),
// 	MR_SER,
// 	P00_STRUCT_HANDLER,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children),
// )
// P00_UNFOLD(
// 	MR_END_,
// 	STRUCT,
// 	PROTO,
// 	84,
// 	sample_model_t,
// )
// MR_TYPEDEF_STRUCT_DESC (84, sample_model_t)
// MR_FOR4 (
// 	(DESC, sample_model_t),
// 	MR_SER,
// 	P00_STRUCT_HANDLER,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children),
// )
// P00_UNFOLD(
// 	MR_END_,
// 	STRUCT,
// 	DESC,
// 	84,
// 	sample_model_t,
// )




// typedef struct MR_TYPEDEF_PREFIX (sample_model_t) sample_model_t; struct MR_TYPEDEF_PREFIX (sample_model_t) {
// MR_FOR4 (
// 	(PROTO, sample_model_t),
// 	MR_SER,
// 	P00_STRUCT_HANDLER,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children),
// )
// MR_PASTE4 (MR_END_, STRUCT, _, PROTO) (84, sample_model_t,)
// MR_TYPEDEF_DESC (84, sample_model_t, MR_TYPE_STRUCT)
// MR_FOR4 (
// 	(DESC, sample_model_t),
// 	MR_SER,
// 	P00_STRUCT_HANDLER,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children),
// )
// MR_PASTE4 (MR_END_, STRUCT, _, DESC) (84, sample_model_t,)













// typedef struct sample_model_t sample_model_t; struct sample_model_t {
// MR_SER (
// 	(PROTO, sample_model_t),
// 	3,
// 	P00_FIELD (
// 		(PROTO, sample_model_t),
// 		(uint32_t, number),
// 		4
// 	),
// 	MR_SER (
// 		(PROTO, sample_model_t),
// 		2,
// 		P00_FIELD (
// 			(PROTO, sample_model_t),
// 			(char, name, [8]),
// 			3
// 		),
// 		MR_SER (
// 			(PROTO, sample_model_t),
// 			1,
// 			P00_FIELD (
// 				(PROTO, sample_model_t),
// 				(size_t, children_size),
// 				2
// 			),
// 			P00_FIELD (
// 				(PROTO, sample_model_t),
// 				(sample_model_t*, children),
// 				1
// 			)
// 		)
// 	)
// )
// } ;

// MR_DESCRIPTOR_ATTR mr_td_t MR_DESCRIPTOR_PREFIX (84, sample_model_t) = {
// 	.type = {
// 		.str = "sample_model_t",
// 		.hash_value = 0,
// 	},
// 	.mr_type = MR_TYPE_STRUCT,
// 	.param = {
// 		.enum_param = {
// 			.mr_type_effective = MR_TYPE_DETECT (sample_model_t),
// 		},
// 	},
// 	.size = sizeof (sample_model_t),
// 	.fields_size = 0,
// 	.fields = (mr_fd_ptr_t[]){

// MR_SER (
// 	(DESC, sample_model_t),
// 	3,
// 	P00_FIELD (
// 		(DESC, sample_model_t),
// 		(uint32_t, number),
// 		4
// 	),
// 	MR_SER (
// 		(DESC, sample_model_t),
// 		2,
// 		P00_FIELD (
// 			(DESC, sample_model_t),
// 			(char, name, [8]),
// 			3
// 		),
// 		MR_SER (
// 			(DESC, sample_model_t),
// 			1,
// 			P00_FIELD (
// 				(DESC, sample_model_t),
// 				(size_t, children_size),
// 				2
// 			),
// 			P00_FIELD (
// 				(DESC, sample_model_t),
// 				(sample_model_t*, children),
// 				1
// 			)			
// 		)
// 	)	
// )

// MR_TYPEDEF_END_DESC (84, sample_model_t, )











typedef struct sample_model_t sample_model_t;
struct sample_model_t
{
	uint32_t number;
	char name[8];
	size_t children_size;
	sample_model_t *children;
};

static mr_td_t MR_DESCRIPTOR_PREFIX(84, sample_model_t) = {
	.type = {
		.str = "sample_model_t",
		.hash_value = 0,
	},
	.mr_type = MR_TYPE_STRUCT,
	.param = {
		.enum_param = {
			.mr_type_effective = MR_TYPE_DETECT(sample_model_t),
		},
	},
	.size = sizeof(sample_model_t),
	.fields_size = 0,
	.fields = (mr_fd_ptr_t[]){

		{(mr_fd_t[]){{
			.name = {
				.str = "number",
				.hash_value = 0,
			},
			.type = (char[]){"uint32_t"},
			.size = sizeof(((sample_model_t *)0)->number),
			.offset = __builtin_offsetof(sample_model_t, number),
			.mr_type = (0 | (__builtin_types_compatible_p(void, uint32_t) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool, uint32_t) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t, uint32_t) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t, uint32_t) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t, uint32_t) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t, uint32_t) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t, uint32_t) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t, uint32_t) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t, uint32_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t, uint32_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long, uint32_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long, uint32_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float, uint32_t) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float, uint32_t) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double, uint32_t) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double, uint32_t) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double, uint32_t) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double, uint32_t) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char, uint32_t) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]), uint32_t) | __builtin_types_compatible_p(__typeof__(const char[]), uint32_t) | __builtin_types_compatible_p(__typeof__(volatile char[]), uint32_t) | __builtin_types_compatible_p(__typeof__(const volatile char[]), uint32_t)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *), uint32_t) | __builtin_types_compatible_p(__typeof__(const char *), uint32_t) | __builtin_types_compatible_p(__typeof__(volatile char *), uint32_t) | __builtin_types_compatible_p(__typeof__(const volatile char *), uint32_t)) ? MR_TYPE_STRING : 0)),
			.mr_type_class = __builtin_classify_type(((sample_model_t *)0)->number),
			.meta = "",
			.self_ptr = __builtin_types_compatible_p(sample_model_t *, __typeof__(((sample_model_t *)0)->number)) | __builtin_types_compatible_p(sample_model_t const *, __typeof__(((sample_model_t *)0)->number)) | __builtin_types_compatible_p(sample_model_t volatile *, __typeof__(((sample_model_t *)0)->number)) | __builtin_types_compatible_p(sample_model_t const volatile *, __typeof__(((sample_model_t *)0)->number)),
			.mr_type_aux = ((0 | (__builtin_types_compatible_p(void *, uint32_t) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool *, uint32_t) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t *, uint32_t) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t *, uint32_t) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t *, uint32_t) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t *, uint32_t) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t *, uint32_t) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t *, uint32_t) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t *, uint32_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t *, uint32_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long *, uint32_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long *, uint32_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float *, uint32_t) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float *, uint32_t) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double *, uint32_t) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double *, uint32_t) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double *, uint32_t) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double *, uint32_t) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char *, uint32_t) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]) *, uint32_t) | __builtin_types_compatible_p(__typeof__(const char[]) *, uint32_t) | __builtin_types_compatible_p(__typeof__(volatile char[]) *, uint32_t) | __builtin_types_compatible_p(__typeof__(const volatile char[]) *, uint32_t)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *) *, uint32_t) | __builtin_types_compatible_p(__typeof__(const char *) *, uint32_t) | __builtin_types_compatible_p(__typeof__(volatile char *) *, uint32_t) | __builtin_types_compatible_p(__typeof__(const volatile char *) *, uint32_t)) ? MR_TYPE_STRING : 0)) | (0 | (__builtin_types_compatible_p(void const *, uint32_t) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool const *, uint32_t) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t const *, uint32_t) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t const *, uint32_t) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t const *, uint32_t) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t const *, uint32_t) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t const *, uint32_t) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t const *, uint32_t) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t const *, uint32_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t const *, uint32_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long const *, uint32_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long const *, uint32_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float const *, uint32_t) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float const *, uint32_t) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double const *, uint32_t) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double const *, uint32_t) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double const *, uint32_t) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double const *, uint32_t) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char const *, uint32_t) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]) const *, uint32_t) | __builtin_types_compatible_p(__typeof__(const char[]) const *, uint32_t) | __builtin_types_compatible_p(__typeof__(volatile char[]) const *, uint32_t) | __builtin_types_compatible_p(__typeof__(const volatile char[]) const *, uint32_t)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *) const *, uint32_t) | __builtin_types_compatible_p(__typeof__(const char *) const *, uint32_t) | __builtin_types_compatible_p(__typeof__(volatile char *) const *, uint32_t) | __builtin_types_compatible_p(__typeof__(const volatile char *) const *, uint32_t)) ? MR_TYPE_STRING : 0)) | (0 | (__builtin_types_compatible_p(void volatile *, uint32_t) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool volatile *, uint32_t) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t volatile *, uint32_t) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t volatile *, uint32_t) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t volatile *, uint32_t) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t volatile *, uint32_t) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t volatile *, uint32_t) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t volatile *, uint32_t) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t volatile *, uint32_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t volatile *, uint32_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long volatile *, uint32_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long volatile *, uint32_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float volatile *, uint32_t) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float volatile *, uint32_t) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double volatile *, uint32_t) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double volatile *, uint32_t) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double volatile *, uint32_t) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double volatile *, uint32_t) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char volatile *, uint32_t) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]) volatile *, uint32_t) | __builtin_types_compatible_p(__typeof__(const char[]) volatile *, uint32_t) | __builtin_types_compatible_p(__typeof__(volatile char[]) volatile *, uint32_t) | __builtin_types_compatible_p(__typeof__(const volatile char[]) volatile *, uint32_t)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *) volatile *, uint32_t) | __builtin_types_compatible_p(__typeof__(const char *) volatile *, uint32_t) | __builtin_types_compatible_p(__typeof__(volatile char *) volatile *, uint32_t) | __builtin_types_compatible_p(__typeof__(const volatile char *) volatile *, uint32_t)) ? MR_TYPE_STRING : 0)) | (0 | (__builtin_types_compatible_p(void const volatile *, uint32_t) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool const volatile *, uint32_t) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t const volatile *, uint32_t) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t const volatile *, uint32_t) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t const volatile *, uint32_t) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t const volatile *, uint32_t) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t const volatile *, uint32_t) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t const volatile *, uint32_t) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t const volatile *, uint32_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t const volatile *, uint32_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long const volatile *, uint32_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long const volatile *, uint32_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float const volatile *, uint32_t) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float const volatile *, uint32_t) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double const volatile *, uint32_t) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double const volatile *, uint32_t) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double const volatile *, uint32_t) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double const volatile *, uint32_t) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char const volatile *, uint32_t) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]) const volatile *, uint32_t) | __builtin_types_compatible_p(__typeof__(const char[]) const volatile *, uint32_t) | __builtin_types_compatible_p(__typeof__(volatile char[]) const volatile *, uint32_t) | __builtin_types_compatible_p(__typeof__(const volatile char[]) const volatile *, uint32_t)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *) const volatile *, uint32_t) | __builtin_types_compatible_p(__typeof__(const char *) const volatile *, uint32_t) | __builtin_types_compatible_p(__typeof__(volatile char *) const volatile *, uint32_t) | __builtin_types_compatible_p(__typeof__(const volatile char *) const volatile *, uint32_t)) ? MR_TYPE_STRING : 0))) + 0 / __builtin_types_compatible_p(uint32_t, __typeof__(((sample_model_t *)0)->number)),
		}}},
		{(mr_fd_t[]){{
			.name = {
				.str = "name",
				.hash_value = 0,
			},
			.type = (char[]){"char"},
			.size = sizeof(((sample_model_t *)0)->name),
			.offset = __builtin_offsetof(sample_model_t, name),
			.mr_type = MR_TYPE_ARRAY,
			.mr_type_aux = (0 | (__builtin_types_compatible_p(void, char) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool, char) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t, char) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t, char) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t, char) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t, char) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t, char) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t, char) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t, char) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t, char) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long, char) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long, char) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float, char) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float, char) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double, char) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double, char) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double, char) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double, char) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char, char) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]), char) | __builtin_types_compatible_p(__typeof__(const char[]), char) | __builtin_types_compatible_p(__typeof__(volatile char[]), char) | __builtin_types_compatible_p(__typeof__(const volatile char[]), char)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *), char) | __builtin_types_compatible_p(__typeof__(const char *), char) | __builtin_types_compatible_p(__typeof__(volatile char *), char) | __builtin_types_compatible_p(__typeof__(const volatile char *), char)) ? MR_TYPE_STRING : 0)),
			.mr_type_ptr = ((0 | (__builtin_types_compatible_p(void *, char) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool *, char) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t *, char) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t *, char) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t *, char) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t *, char) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t *, char) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t *, char) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t *, char) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t *, char) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long *, char) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long *, char) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float *, char) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float *, char) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double *, char) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double *, char) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double *, char) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double *, char) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char *, char) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]) *, char) | __builtin_types_compatible_p(__typeof__(const char[]) *, char) | __builtin_types_compatible_p(__typeof__(volatile char[]) *, char) | __builtin_types_compatible_p(__typeof__(const volatile char[]) *, char)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *) *, char) | __builtin_types_compatible_p(__typeof__(const char *) *, char) | __builtin_types_compatible_p(__typeof__(volatile char *) *, char) | __builtin_types_compatible_p(__typeof__(const volatile char *) *, char)) ? MR_TYPE_STRING : 0)) | (0 | (__builtin_types_compatible_p(void const *, char) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool const *, char) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t const *, char) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t const *, char) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t const *, char) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t const *, char) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t const *, char) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t const *, char) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t const *, char) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t const *, char) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long const *, char) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long const *, char) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float const *, char) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float const *, char) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double const *, char) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double const *, char) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double const *, char) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double const *, char) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char const *, char) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]) const *, char) | __builtin_types_compatible_p(__typeof__(const char[]) const *, char) | __builtin_types_compatible_p(__typeof__(volatile char[]) const *, char) | __builtin_types_compatible_p(__typeof__(const volatile char[]) const *, char)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *) const *, char) | __builtin_types_compatible_p(__typeof__(const char *) const *, char) | __builtin_types_compatible_p(__typeof__(volatile char *) const *, char) | __builtin_types_compatible_p(__typeof__(const volatile char *) const *, char)) ? MR_TYPE_STRING : 0)) | (0 | (__builtin_types_compatible_p(void volatile *, char) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool volatile *, char) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t volatile *, char) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t volatile *, char) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t volatile *, char) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t volatile *, char) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t volatile *, char) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t volatile *, char) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t volatile *, char) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t volatile *, char) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long volatile *, char) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long volatile *, char) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float volatile *, char) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float volatile *, char) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double volatile *, char) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double volatile *, char) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double volatile *, char) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double volatile *, char) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char volatile *, char) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]) volatile *, char) | __builtin_types_compatible_p(__typeof__(const char[]) volatile *, char) | __builtin_types_compatible_p(__typeof__(volatile char[]) volatile *, char) | __builtin_types_compatible_p(__typeof__(const volatile char[]) volatile *, char)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *) volatile *, char) | __builtin_types_compatible_p(__typeof__(const char *) volatile *, char) | __builtin_types_compatible_p(__typeof__(volatile char *) volatile *, char) | __builtin_types_compatible_p(__typeof__(const volatile char *) volatile *, char)) ? MR_TYPE_STRING : 0)) | (0 | (__builtin_types_compatible_p(void const volatile *, char) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool const volatile *, char) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t const volatile *, char) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t const volatile *, char) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t const volatile *, char) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t const volatile *, char) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t const volatile *, char) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t const volatile *, char) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t const volatile *, char) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t const volatile *, char) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long const volatile *, char) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long const volatile *, char) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float const volatile *, char) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float const volatile *, char) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double const volatile *, char) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double const volatile *, char) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double const volatile *, char) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double const volatile *, char) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char const volatile *, char) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]) const volatile *, char) | __builtin_types_compatible_p(__typeof__(const char[]) const volatile *, char) | __builtin_types_compatible_p(__typeof__(volatile char[]) const volatile *, char) | __builtin_types_compatible_p(__typeof__(const volatile char[]) const volatile *, char)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *) const volatile *, char) | __builtin_types_compatible_p(__typeof__(const char *) const volatile *, char) | __builtin_types_compatible_p(__typeof__(volatile char *) const volatile *, char) | __builtin_types_compatible_p(__typeof__(const volatile char *) const volatile *, char)) ? MR_TYPE_STRING : 0))),
			.mr_type_class = __builtin_classify_type(((sample_model_t *)0)->name),
			.param = {
				.array_param = {
					.count = sizeof(((sample_model_t *)0)->name) / __builtin_choose_expr(sizeof(char) == 0, 1, sizeof(char)),
					.row_count = sizeof(((sample_model_t *)0)->name[0]) / __builtin_choose_expr(sizeof(char) == 0, 1, sizeof(char)),
					.pointer_param = (mr_fd_t[]){{}},
				},
			},
			.meta = "",
		}}},
		{(mr_fd_t[]){{
			.name = {
				.str = "children_size",
				.hash_value = 0,
			},
			.type = (char[]){"size_t"},
			.size = sizeof(((sample_model_t *)0)->children_size),
			.offset = __builtin_offsetof(sample_model_t, children_size),
			.mr_type = (0 | (__builtin_types_compatible_p(void, size_t) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool, size_t) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t, size_t) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t, size_t) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t, size_t) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t, size_t) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t, size_t) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t, size_t) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t, size_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t, size_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long, size_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long, size_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float, size_t) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float, size_t) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double, size_t) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double, size_t) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double, size_t) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double, size_t) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char, size_t) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]), size_t) | __builtin_types_compatible_p(__typeof__(const char[]), size_t) | __builtin_types_compatible_p(__typeof__(volatile char[]), size_t) | __builtin_types_compatible_p(__typeof__(const volatile char[]), size_t)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *), size_t) | __builtin_types_compatible_p(__typeof__(const char *), size_t) | __builtin_types_compatible_p(__typeof__(volatile char *), size_t) | __builtin_types_compatible_p(__typeof__(const volatile char *), size_t)) ? MR_TYPE_STRING : 0)),
			.mr_type_class = __builtin_classify_type(((sample_model_t *)0)->children_size),
			.meta = "",
			.self_ptr = __builtin_types_compatible_p(sample_model_t *, __typeof__(((sample_model_t *)0)->children_size)) | __builtin_types_compatible_p(sample_model_t const *, __typeof__(((sample_model_t *)0)->children_size)) | __builtin_types_compatible_p(sample_model_t volatile *, __typeof__(((sample_model_t *)0)->children_size)) | __builtin_types_compatible_p(sample_model_t const volatile *, __typeof__(((sample_model_t *)0)->children_size)),
			.mr_type_aux = ((0 | (__builtin_types_compatible_p(void *, size_t) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool *, size_t) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t *, size_t) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t *, size_t) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t *, size_t) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t *, size_t) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t *, size_t) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t *, size_t) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t *, size_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t *, size_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long *, size_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long *, size_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float *, size_t) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float *, size_t) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double *, size_t) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double *, size_t) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double *, size_t) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double *, size_t) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char *, size_t) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]) *, size_t) | __builtin_types_compatible_p(__typeof__(const char[]) *, size_t) | __builtin_types_compatible_p(__typeof__(volatile char[]) *, size_t) | __builtin_types_compatible_p(__typeof__(const volatile char[]) *, size_t)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *) *, size_t) | __builtin_types_compatible_p(__typeof__(const char *) *, size_t) | __builtin_types_compatible_p(__typeof__(volatile char *) *, size_t) | __builtin_types_compatible_p(__typeof__(const volatile char *) *, size_t)) ? MR_TYPE_STRING : 0)) | (0 | (__builtin_types_compatible_p(void const *, size_t) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool const *, size_t) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t const *, size_t) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t const *, size_t) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t const *, size_t) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t const *, size_t) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t const *, size_t) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t const *, size_t) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t const *, size_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t const *, size_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long const *, size_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long const *, size_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float const *, size_t) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float const *, size_t) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double const *, size_t) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double const *, size_t) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double const *, size_t) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double const *, size_t) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char const *, size_t) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]) const *, size_t) | __builtin_types_compatible_p(__typeof__(const char[]) const *, size_t) | __builtin_types_compatible_p(__typeof__(volatile char[]) const *, size_t) | __builtin_types_compatible_p(__typeof__(const volatile char[]) const *, size_t)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *) const *, size_t) | __builtin_types_compatible_p(__typeof__(const char *) const *, size_t) | __builtin_types_compatible_p(__typeof__(volatile char *) const *, size_t) | __builtin_types_compatible_p(__typeof__(const volatile char *) const *, size_t)) ? MR_TYPE_STRING : 0)) | (0 | (__builtin_types_compatible_p(void volatile *, size_t) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool volatile *, size_t) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t volatile *, size_t) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t volatile *, size_t) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t volatile *, size_t) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t volatile *, size_t) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t volatile *, size_t) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t volatile *, size_t) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t volatile *, size_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t volatile *, size_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long volatile *, size_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long volatile *, size_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float volatile *, size_t) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float volatile *, size_t) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double volatile *, size_t) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double volatile *, size_t) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double volatile *, size_t) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double volatile *, size_t) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char volatile *, size_t) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]) volatile *, size_t) | __builtin_types_compatible_p(__typeof__(const char[]) volatile *, size_t) | __builtin_types_compatible_p(__typeof__(volatile char[]) volatile *, size_t) | __builtin_types_compatible_p(__typeof__(const volatile char[]) volatile *, size_t)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *) volatile *, size_t) | __builtin_types_compatible_p(__typeof__(const char *) volatile *, size_t) | __builtin_types_compatible_p(__typeof__(volatile char *) volatile *, size_t) | __builtin_types_compatible_p(__typeof__(const volatile char *) volatile *, size_t)) ? MR_TYPE_STRING : 0)) | (0 | (__builtin_types_compatible_p(void const volatile *, size_t) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool const volatile *, size_t) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t const volatile *, size_t) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t const volatile *, size_t) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t const volatile *, size_t) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t const volatile *, size_t) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t const volatile *, size_t) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t const volatile *, size_t) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t const volatile *, size_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t const volatile *, size_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long const volatile *, size_t) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long const volatile *, size_t) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float const volatile *, size_t) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float const volatile *, size_t) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double const volatile *, size_t) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double const volatile *, size_t) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double const volatile *, size_t) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double const volatile *, size_t) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char const volatile *, size_t) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]) const volatile *, size_t) | __builtin_types_compatible_p(__typeof__(const char[]) const volatile *, size_t) | __builtin_types_compatible_p(__typeof__(volatile char[]) const volatile *, size_t) | __builtin_types_compatible_p(__typeof__(const volatile char[]) const volatile *, size_t)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *) const volatile *, size_t) | __builtin_types_compatible_p(__typeof__(const char *) const volatile *, size_t) | __builtin_types_compatible_p(__typeof__(volatile char *) const volatile *, size_t) | __builtin_types_compatible_p(__typeof__(const volatile char *) const volatile *, size_t)) ? MR_TYPE_STRING : 0))) + 0 / __builtin_types_compatible_p(size_t, __typeof__(((sample_model_t *)0)->children_size)),
		}}},
		{(mr_fd_t[]){{
			.name = {
				.str = "children",
				.hash_value = 0,
			},
			.type = (char[]){"sample_model_t*"},
			.size = sizeof(((sample_model_t *)0)->children),
			.offset = __builtin_offsetof(sample_model_t, children),
			.mr_type = (0 | (__builtin_types_compatible_p(void, sample_model_t *) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool, sample_model_t *) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t, sample_model_t *) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t, sample_model_t *) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t, sample_model_t *) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t, sample_model_t *) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t, sample_model_t *) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t, sample_model_t *) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t, sample_model_t *) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t, sample_model_t *) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long, sample_model_t *) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long, sample_model_t *) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float, sample_model_t *) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float, sample_model_t *) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double, sample_model_t *) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double, sample_model_t *) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double, sample_model_t *) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double, sample_model_t *) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char, sample_model_t *) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]), sample_model_t *) | __builtin_types_compatible_p(__typeof__(const char[]), sample_model_t *) | __builtin_types_compatible_p(__typeof__(volatile char[]), sample_model_t *) | __builtin_types_compatible_p(__typeof__(const volatile char[]), sample_model_t *)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *), sample_model_t *) | __builtin_types_compatible_p(__typeof__(const char *), sample_model_t *) | __builtin_types_compatible_p(__typeof__(volatile char *), sample_model_t *) | __builtin_types_compatible_p(__typeof__(const volatile char *), sample_model_t *)) ? MR_TYPE_STRING : 0)),
			.mr_type_class = __builtin_classify_type(((sample_model_t *)0)->children),
			.meta = "",
			.self_ptr = __builtin_types_compatible_p(sample_model_t *, __typeof__(((sample_model_t *)0)->children)) | __builtin_types_compatible_p(sample_model_t const *, __typeof__(((sample_model_t *)0)->children)) | __builtin_types_compatible_p(sample_model_t volatile *, __typeof__(((sample_model_t *)0)->children)) | __builtin_types_compatible_p(sample_model_t const volatile *, __typeof__(((sample_model_t *)0)->children)),
			.mr_type_aux = ((0 | (__builtin_types_compatible_p(void *, sample_model_t *) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool *, sample_model_t *) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t *, sample_model_t *) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t *, sample_model_t *) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t *, sample_model_t *) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t *, sample_model_t *) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t *, sample_model_t *) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t *, sample_model_t *) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t *, sample_model_t *) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t *, sample_model_t *) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long *, sample_model_t *) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long *, sample_model_t *) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float *, sample_model_t *) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float *, sample_model_t *) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double *, sample_model_t *) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double *, sample_model_t *) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double *, sample_model_t *) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double *, sample_model_t *) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char *, sample_model_t *) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]) *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(const char[]) *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(volatile char[]) *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(const volatile char[]) *, sample_model_t *)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *) *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(const char *) *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(volatile char *) *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(const volatile char *) *, sample_model_t *)) ? MR_TYPE_STRING : 0)) | (0 | (__builtin_types_compatible_p(void const *, sample_model_t *) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool const *, sample_model_t *) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t const *, sample_model_t *) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t const *, sample_model_t *) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t const *, sample_model_t *) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t const *, sample_model_t *) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t const *, sample_model_t *) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t const *, sample_model_t *) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t const *, sample_model_t *) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t const *, sample_model_t *) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long const *, sample_model_t *) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long const *, sample_model_t *) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float const *, sample_model_t *) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float const *, sample_model_t *) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double const *, sample_model_t *) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double const *, sample_model_t *) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double const *, sample_model_t *) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double const *, sample_model_t *) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char const *, sample_model_t *) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]) const *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(const char[]) const *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(volatile char[]) const *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(const volatile char[]) const *, sample_model_t *)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *) const *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(const char *) const *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(volatile char *) const *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(const volatile char *) const *, sample_model_t *)) ? MR_TYPE_STRING : 0)) | (0 | (__builtin_types_compatible_p(void volatile *, sample_model_t *) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool volatile *, sample_model_t *) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t volatile *, sample_model_t *) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t volatile *, sample_model_t *) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t volatile *, sample_model_t *) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t volatile *, sample_model_t *) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t volatile *, sample_model_t *) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t volatile *, sample_model_t *) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t volatile *, sample_model_t *) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t volatile *, sample_model_t *) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long volatile *, sample_model_t *) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long volatile *, sample_model_t *) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float volatile *, sample_model_t *) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float volatile *, sample_model_t *) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double volatile *, sample_model_t *) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double volatile *, sample_model_t *) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double volatile *, sample_model_t *) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double volatile *, sample_model_t *) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char volatile *, sample_model_t *) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]) volatile *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(const char[]) volatile *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(volatile char[]) volatile *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(const volatile char[]) volatile *, sample_model_t *)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *) volatile *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(const char *) volatile *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(volatile char *) volatile *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(const volatile char *) volatile *, sample_model_t *)) ? MR_TYPE_STRING : 0)) | (0 | (__builtin_types_compatible_p(void const volatile *, sample_model_t *) ? MR_TYPE_VOID : 0) | (__builtin_types_compatible_p(_Bool const volatile *, sample_model_t *) ? MR_TYPE_BOOL : 0) | (__builtin_types_compatible_p(int8_t const volatile *, sample_model_t *) ? MR_TYPE_INT8 : 0) | (__builtin_types_compatible_p(uint8_t const volatile *, sample_model_t *) ? MR_TYPE_UINT8 : 0) | (__builtin_types_compatible_p(int16_t const volatile *, sample_model_t *) ? MR_TYPE_INT16 : 0) | (__builtin_types_compatible_p(uint16_t const volatile *, sample_model_t *) ? MR_TYPE_UINT16 : 0) | (__builtin_types_compatible_p(int32_t const volatile *, sample_model_t *) ? MR_TYPE_INT32 : 0) | (__builtin_types_compatible_p(uint32_t const volatile *, sample_model_t *) ? MR_TYPE_UINT32 : 0) | (__builtin_types_compatible_p(int64_t const volatile *, sample_model_t *) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(uint64_t const volatile *, sample_model_t *) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(long long const volatile *, sample_model_t *) ? MR_TYPE_INT64 : 0) | (__builtin_types_compatible_p(unsigned long long const volatile *, sample_model_t *) ? MR_TYPE_UINT64 : 0) | (__builtin_types_compatible_p(float const volatile *, sample_model_t *) ? MR_TYPE_FLOAT : 0) | (__builtin_types_compatible_p(_Complex float const volatile *, sample_model_t *) ? MR_TYPE_COMPLEX_FLOAT : 0) | (__builtin_types_compatible_p(double const volatile *, sample_model_t *) ? MR_TYPE_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex double const volatile *, sample_model_t *) ? MR_TYPE_COMPLEX_DOUBLE : 0) | (__builtin_types_compatible_p(long double const volatile *, sample_model_t *) ? MR_TYPE_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(_Complex long double const volatile *, sample_model_t *) ? MR_TYPE_COMPLEX_LONG_DOUBLE : 0) | (__builtin_types_compatible_p(char const volatile *, sample_model_t *) ? MR_TYPE_CHAR : 0) | ((__builtin_types_compatible_p(__typeof__(char[]) const volatile *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(const char[]) const volatile *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(volatile char[]) const volatile *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(const volatile char[]) const volatile *, sample_model_t *)) ? MR_TYPE_CHAR_ARRAY : 0) | ((__builtin_types_compatible_p(__typeof__(char *) const volatile *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(const char *) const volatile *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(volatile char *) const volatile *, sample_model_t *) | __builtin_types_compatible_p(__typeof__(const volatile char *) const volatile *, sample_model_t *)) ? MR_TYPE_STRING : 0))) + 0 / __builtin_types_compatible_p(sample_model_t *, __typeof__(((sample_model_t *)0)->children)),
		}}},

		{(mr_fd_t[]){{
			.type = "sample_model_t",
			.mr_type = MR_TYPE_LAST,
		}}}},
	.meta = ""};
static inline void __attribute__((constructor)) MR_CONSTRUCTOR_PREFIX(84, sample_model_t)(void) { mr_add_type(&MR_DESCRIPTOR_PREFIX(84, sample_model_t)); }






int main(int argc, char** argv)
{
	sample_model_t ms[] = {
		{
			.number = 11,
			.name = "j",
			.children_size = 0,
			.children = NULL
		},
		{
			.number = 12,
			.name = "i",
			.children_size = 0,
			.children = NULL
		}
	};

	sample_model_t m = {
		.number = 10,
		.name = "n",
		.children_size = 2,
		.children = ms
	};

	MR_PRINT((sample_model_t, &m, JSON));
	MR_FPRINT (stdout, (sample_model_t, &m, JSON));

	(MR_FOR (stdout, MR_NARG ((sample_model_t, &m, JSON)), MR_ADD, MR_PRINT_ONE_ELEMENT, (sample_model_t, &m, JSON)));

	const int na = MR_NARG();

	return 0;
}