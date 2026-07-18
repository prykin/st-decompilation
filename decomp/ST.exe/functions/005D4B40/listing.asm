FUN_005d4b40:
005D4B40  55                        PUSH EBP
005D4B41  8B EC                     MOV EBP,ESP
005D4B43  51                        PUSH ECX
005D4B44  53                        PUSH EBX
005D4B45  56                        PUSH ESI
005D4B46  68 45 22 00 00            PUSH 0x2245
005D4B4B  E8 80 B9 0D 00            CALL 0x006b04d0
005D4B50  8B F0                     MOV ESI,EAX
005D4B52  33 DB                     XOR EBX,EBX
005D4B54  3B F3                     CMP ESI,EBX
005D4B56  0F 84 7A 02 00 00         JZ 0x005d4dd6
005D4B5C  57                        PUSH EDI
005D4B5D  8B CE                     MOV ECX,ESI
005D4B5F  E8 4C 14 11 00            CALL 0x006e5fb0
005D4B64  C7 06 18 C0 79 00         MOV dword ptr [ESI],0x79c018
005D4B6A  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
005D4B6D  B9 08 00 00 00            MOV ECX,0x8
005D4B72  33 C0                     XOR EAX,EAX
005D4B74  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005D4B77  89 5E 5D                  MOV dword ptr [ESI + 0x5d],EBX
005D4B7A  F3 AB                     STOSD.REP ES:EDI
005D4B7C  B9 08 00 00 00            MOV ECX,0x8
005D4B81  8D 7E 3D                  LEA EDI,[ESI + 0x3d]
005D4B84  F3 AB                     STOSD.REP ES:EDI
005D4B86  89 1D 9C 87 80 00         MOV dword ptr [0x0080879c],EBX
005D4B8C  8D BE 74 01 00 00         LEA EDI,[ESI + 0x174]
005D4B92  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
LAB_005d4b99:
005D4B99  8D 8F 6F FF FF FF         LEA ECX,[EDI + 0xffffff6f]
005D4B9F  E8 7C 0C 14 00            CALL 0x00715820
005D4BA4  8B CF                     MOV ECX,EDI
005D4BA6  E8 75 0C 14 00            CALL 0x00715820
005D4BAB  8D 8F 91 00 00 00         LEA ECX,[EDI + 0x91]
005D4BB1  E8 6A 0C 14 00            CALL 0x00715820
005D4BB6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005D4BB9  81 C7 FB 01 00 00         ADD EDI,0x1fb
005D4BBF  48                        DEC EAX
005D4BC0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005D4BC3  75 D4                     JNZ 0x005d4b99
005D4BC5  C7 06 08 C0 79 00         MOV dword ptr [ESI],0x79c008
005D4BCB  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005D4BCF  B9 0D 00 00 00            MOV ECX,0xd
005D4BD4  33 C0                     XOR EAX,EAX
005D4BD6  8D 7E 66                  LEA EDI,[ESI + 0x66]
005D4BD9  88 9E 9A 00 00 00         MOV byte ptr [ESI + 0x9a],BL
005D4BDF  F3 AB                     STOSD.REP ES:EDI
005D4BE1  8D 96 BC 00 00 00         LEA EDX,[ESI + 0xbc]
005D4BE7  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
LAB_005d4bee:
005D4BEE  B9 09 00 00 00            MOV ECX,0x9
005D4BF3  33 C0                     XOR EAX,EAX
005D4BF5  8B FA                     MOV EDI,EDX
005D4BF7  81 C2 FB 01 00 00         ADD EDX,0x1fb
005D4BFD  F3 AB                     STOSD.REP ES:EDI
005D4BFF  66 AB                     STOSW ES:EDI
005D4C01  AA                        STOSB ES:EDI
005D4C02  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005D4C05  48                        DEC EAX
005D4C06  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005D4C09  75 E3                     JNZ 0x005d4bee
005D4C0B  8D 8E 6B 1C 00 00         LEA ECX,[ESI + 0x1c6b]
005D4C11  E8 0A 0C 14 00            CALL 0x00715820
005D4C16  8D 8E FC 1C 00 00         LEA ECX,[ESI + 0x1cfc]
005D4C1C  E8 FF 0B 14 00            CALL 0x00715820
005D4C21  8D 8E 8D 1D 00 00         LEA ECX,[ESI + 0x1d8d]
005D4C27  E8 F4 0B 14 00            CALL 0x00715820
005D4C2C  89 9E 5F 1C 00 00         MOV dword ptr [ESI + 0x1c5f],EBX
005D4C32  89 9E 63 1C 00 00         MOV dword ptr [ESI + 0x1c63],EBX
005D4C38  8D 8E E1 21 00 00         LEA ECX,[ESI + 0x21e1]
005D4C3E  89 9E 27 1E 00 00         MOV dword ptr [ESI + 0x1e27],EBX
005D4C44  33 C0                     XOR EAX,EAX
005D4C46  89 9E 2B 1E 00 00         MOV dword ptr [ESI + 0x1e2b],EBX
005D4C4C  89 01                     MOV dword ptr [ECX],EAX
005D4C4E  8D BE 61 21 00 00         LEA EDI,[ESI + 0x2161]
005D4C54  83 CA FF                  OR EDX,0xffffffff
005D4C57  66 89 41 04               MOV word ptr [ECX + 0x4],AX
005D4C5B  88 41 06                  MOV byte ptr [ECX + 0x6],AL
005D4C5E  B9 20 00 00 00            MOV ECX,0x20
005D4C63  F3 AB                     STOSD.REP ES:EDI
005D4C65  89 9E 2F 1E 00 00         MOV dword ptr [ESI + 0x1e2f],EBX
005D4C6B  89 9E 43 1F 00 00         MOV dword ptr [ESI + 0x1f43],EBX
005D4C71  89 9E 3F 1F 00 00         MOV dword ptr [ESI + 0x1f3f],EBX
005D4C77  89 9E 4F 1F 00 00         MOV dword ptr [ESI + 0x1f4f],EBX
005D4C7D  89 9E 4B 1F 00 00         MOV dword ptr [ESI + 0x1f4b],EBX
005D4C83  B9 50 00 00 00            MOV ECX,0x50
005D4C88  8D BE 8C 1F 00 00         LEA EDI,[ESI + 0x1f8c]
005D4C8E  89 9E 84 1F 00 00         MOV dword ptr [ESI + 0x1f84],EBX
005D4C94  F3 AB                     STOSD.REP ES:EDI
005D4C96  89 9E 1D 21 00 00         MOV dword ptr [ESI + 0x211d],EBX
005D4C9C  8D BE CC 20 00 00         LEA EDI,[ESI + 0x20cc]
005D4CA2  B9 0A 00 00 00            MOV ECX,0xa
005D4CA7  8B C2                     MOV EAX,EDX
005D4CA9  89 9E 88 1F 00 00         MOV dword ptr [ESI + 0x1f88],EBX
005D4CAF  F3 AB                     STOSD.REP ES:EDI
005D4CB1  B9 0A 00 00 00            MOV ECX,0xa
005D4CB6  33 C0                     XOR EAX,EAX
005D4CB8  8D BE F4 20 00 00         LEA EDI,[ESI + 0x20f4]
005D4CBE  F3 AB                     STOSD.REP ES:EDI
005D4CC0  89 9E 1E 1E 00 00         MOV dword ptr [ESI + 0x1e1e],EBX
005D4CC6  B9 0E 00 00 00            MOV ECX,0xe
005D4CCB  8D BE 25 21 00 00         LEA EDI,[ESI + 0x2125]
005D4CD1  89 96 22 1E 00 00         MOV dword ptr [ESI + 0x1e22],EDX
005D4CD7  F3 AB                     STOSD.REP ES:EDI
005D4CD9  89 9E 5D 21 00 00         MOV dword ptr [ESI + 0x215d],EBX
005D4CDF  89 9E F8 21 00 00         MOV dword ptr [ESI + 0x21f8],EBX
005D4CE5  89 9E F4 21 00 00         MOV dword ptr [ESI + 0x21f4],EBX
005D4CEB  89 9E F0 21 00 00         MOV dword ptr [ESI + 0x21f0],EBX
005D4CF1  89 9E EC 21 00 00         MOV dword ptr [ESI + 0x21ec],EBX
005D4CF7  B9 07 00 00 00            MOV ECX,0x7
005D4CFC  8D BE 60 1F 00 00         LEA EDI,[ESI + 0x1f60]
005D4D02  89 9E E8 21 00 00         MOV dword ptr [ESI + 0x21e8],EBX
005D4D08  89 96 80 1F 00 00         MOV dword ptr [ESI + 0x1f80],EDX
005D4D0E  89 9E 67 1C 00 00         MOV dword ptr [ESI + 0x1c67],EBX
005D4D14  89 9E 47 1F 00 00         MOV dword ptr [ESI + 0x1f47],EBX
005D4D1A  89 9E 7C 1F 00 00         MOV dword ptr [ESI + 0x1f7c],EBX
005D4D20  F3 AB                     STOSD.REP ES:EDI
005D4D22  B0 01                     MOV AL,0x1
005D4D24  89 9E 58 1F 00 00         MOV dword ptr [ESI + 0x1f58],EBX
005D4D2A  88 86 57 1F 00 00         MOV byte ptr [ESI + 0x1f57],AL
005D4D30  C6 86 5C 1F 00 00 04      MOV byte ptr [ESI + 0x1f5c],0x4
005D4D37  88 86 5D 1F 00 00         MOV byte ptr [ESI + 0x1f5d],AL
005D4D3D  88 86 5E 1F 00 00         MOV byte ptr [ESI + 0x1f5e],AL
005D4D43  88 86 5F 1F 00 00         MOV byte ptr [ESI + 0x1f5f],AL
005D4D49  C7 06 24 C1 79 00         MOV dword ptr [ESI],0x79c124
005D4D4F  89 9E FC 21 00 00         MOV dword ptr [ESI + 0x21fc],EBX
005D4D55  89 96 00 22 00 00         MOV dword ptr [ESI + 0x2200],EDX
005D4D5B  89 9E 04 22 00 00         MOV dword ptr [ESI + 0x2204],EBX
005D4D61  89 9E 11 22 00 00         MOV dword ptr [ESI + 0x2211],EBX
005D4D67  89 9E 21 22 00 00         MOV dword ptr [ESI + 0x2221],EBX
005D4D6D  89 9E 0D 22 00 00         MOV dword ptr [ESI + 0x220d],EBX
005D4D73  89 9E 09 22 00 00         MOV dword ptr [ESI + 0x2209],EBX
005D4D79  88 9E 25 22 00 00         MOV byte ptr [ESI + 0x2225],BL
005D4D7F  89 9E 1D 22 00 00         MOV dword ptr [ESI + 0x221d],EBX
005D4D85  89 9E 19 22 00 00         MOV dword ptr [ESI + 0x2219],EBX
005D4D8B  89 9E 15 22 00 00         MOV dword ptr [ESI + 0x2215],EBX
005D4D91  89 9E 26 22 00 00         MOV dword ptr [ESI + 0x2226],EBX
005D4D97  89 9E 2A 22 00 00         MOV dword ptr [ESI + 0x222a],EBX
005D4D9D  88 86 08 22 00 00         MOV byte ptr [ESI + 0x2208],AL
005D4DA3  88 9E 2E 22 00 00         MOV byte ptr [ESI + 0x222e],BL
005D4DA9  89 9E 2F 22 00 00         MOV dword ptr [ESI + 0x222f],EBX
005D4DAF  89 9E 37 22 00 00         MOV dword ptr [ESI + 0x2237],EBX
005D4DB5  88 86 43 22 00 00         MOV byte ptr [ESI + 0x2243],AL
005D4DBB  88 86 44 22 00 00         MOV byte ptr [ESI + 0x2244],AL
005D4DC1  89 9E 3B 22 00 00         MOV dword ptr [ESI + 0x223b],EBX
005D4DC7  89 9E 3F 22 00 00         MOV dword ptr [ESI + 0x223f],EBX
005D4DCD  8B C6                     MOV EAX,ESI
005D4DCF  5F                        POP EDI
005D4DD0  5E                        POP ESI
005D4DD1  5B                        POP EBX
005D4DD2  8B E5                     MOV ESP,EBP
005D4DD4  5D                        POP EBP
005D4DD5  C3                        RET
LAB_005d4dd6:
005D4DD6  5E                        POP ESI
005D4DD7  33 C0                     XOR EAX,EAX
005D4DD9  5B                        POP EBX
005D4DDA  8B E5                     MOV ESP,EBP
005D4DDC  5D                        POP EBP
005D4DDD  C3                        RET
