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



TYPEDEF_ATTR
(
	PROTO,
	84,
	STRUCT,
	ATTRIBUTES(),
	sample_model_t,
	(uint32_t, number),
	(char, name, [8]),
	(size_t, children_size),
	(sample_model_t*, children),
)
TYPEDEF_ATTR
(
	DESC,
	84,
	STRUCT,
	ATTRIBUTES(),
	sample_model_t,
	(uint32_t, number),
	(char, name, [8]),
	(size_t, children_size),
	(sample_model_t*, children),
)


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