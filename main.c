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




typedef struct sample_model_t sample_model_t; struct sample_model_t {
MR_FOR4 (
	(PROTO, sample_model_t),
	MR_SER,
	P00_STRUCT_HANDLER,
	(uint32_t, number),
	(char, name, [8]),
	(size_t, children_size),
	(sample_model_t*, children),
)
MR_END_STRUCT_PROTO (84, sample_model_t,)
MR_TYPEDEF_DESC (84, sample_model_t, MR_TYPE_STRUCT)
MR_FOR4 (
	(DESC, sample_model_t),
	MR_SER,
	P00_STRUCT_HANDLER,
	(uint32_t, number),
	(char, name, [8]),
	(size_t, children_size),
	(sample_model_t*, children),
)
MR_END_STRUCT_DESC (84, sample_model_t,)



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