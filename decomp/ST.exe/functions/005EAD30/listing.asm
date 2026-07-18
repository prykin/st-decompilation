FUN_005ead30:
005EAD30  55                        PUSH EBP
005EAD31  8B EC                     MOV EBP,ESP
005EAD33  51                        PUSH ECX
005EAD34  53                        PUSH EBX
005EAD35  56                        PUSH ESI
005EAD36  68 04 1B 00 00            PUSH 0x1b04
005EAD3B  E8 90 57 0C 00            CALL 0x006b04d0
005EAD40  8B F0                     MOV ESI,EAX
005EAD42  33 DB                     XOR EBX,EBX
005EAD44  3B F3                     CMP ESI,EBX
005EAD46  0F 84 51 01 00 00         JZ 0x005eae9d
005EAD4C  57                        PUSH EDI
005EAD4D  8B CE                     MOV ECX,ESI
005EAD4F  E8 5C B2 0F 00            CALL 0x006e5fb0
005EAD54  B9 08 00 00 00            MOV ECX,0x8
005EAD59  33 C0                     XOR EAX,EAX
005EAD5B  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005EAD5E  C7 06 18 C0 79 00         MOV dword ptr [ESI],0x79c018
005EAD64  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
005EAD67  89 5E 5D                  MOV dword ptr [ESI + 0x5d],EBX
005EAD6A  F3 AB                     STOSD.REP ES:EDI
005EAD6C  B9 08 00 00 00            MOV ECX,0x8
005EAD71  8D 7E 3D                  LEA EDI,[ESI + 0x3d]
005EAD74  F3 AB                     STOSD.REP ES:EDI
005EAD76  89 1D 9C 87 80 00         MOV dword ptr [0x0080879c],EBX
005EAD7C  8D BE 74 01 00 00         LEA EDI,[ESI + 0x174]
005EAD82  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
LAB_005ead89:
005EAD89  8D 8F 6F FF FF FF         LEA ECX,[EDI + 0xffffff6f]
005EAD8F  E8 8C AA 12 00            CALL 0x00715820
005EAD94  8B CF                     MOV ECX,EDI
005EAD96  E8 85 AA 12 00            CALL 0x00715820
005EAD9B  8D 8F 91 00 00 00         LEA ECX,[EDI + 0x91]
005EADA1  E8 7A AA 12 00            CALL 0x00715820
005EADA6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EADA9  81 C7 FB 01 00 00         ADD EDI,0x1fb
005EADAF  48                        DEC EAX
005EADB0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005EADB3  75 D4                     JNZ 0x005ead89
005EADB5  B9 0D 00 00 00            MOV ECX,0xd
005EADBA  33 C0                     XOR EAX,EAX
005EADBC  8D 7E 66                  LEA EDI,[ESI + 0x66]
005EADBF  C7 06 08 C0 79 00         MOV dword ptr [ESI],0x79c008
005EADC5  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005EADC9  88 9E 9A 00 00 00         MOV byte ptr [ESI + 0x9a],BL
005EADCF  F3 AB                     STOSD.REP ES:EDI
005EADD1  8D 96 BC 00 00 00         LEA EDX,[ESI + 0xbc]
005EADD7  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
LAB_005eadde:
005EADDE  B9 09 00 00 00            MOV ECX,0x9
005EADE3  33 C0                     XOR EAX,EAX
005EADE5  8B FA                     MOV EDI,EDX
005EADE7  81 C2 FB 01 00 00         ADD EDX,0x1fb
005EADED  F3 AB                     STOSD.REP ES:EDI
005EADEF  66 AB                     STOSW ES:EDI
005EADF1  AA                        STOSB ES:EDI
005EADF2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EADF5  48                        DEC EAX
005EADF6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005EADF9  75 E3                     JNZ 0x005eadde
005EADFB  B8 01 00 00 00            MOV EAX,0x1
005EAE00  8D BE 94 1A 00 00         LEA EDI,[ESI + 0x1a94]
005EAE06  89 86 60 1A 00 00         MOV dword ptr [ESI + 0x1a60],EAX
005EAE0C  89 86 64 1A 00 00         MOV dword ptr [ESI + 0x1a64],EAX
005EAE12  89 86 68 1A 00 00         MOV dword ptr [ESI + 0x1a68],EAX
005EAE18  83 C8 FF                  OR EAX,0xffffffff
005EAE1B  B9 16 00 00 00            MOV ECX,0x16
005EAE20  C7 06 4C C2 79 00         MOV dword ptr [ESI],0x79c24c
005EAE26  88 9E 74 1A 00 00         MOV byte ptr [ESI + 0x1a74],BL
005EAE2C  89 9E 6C 1A 00 00         MOV dword ptr [ESI + 0x1a6c],EBX
005EAE32  89 9E 70 1A 00 00         MOV dword ptr [ESI + 0x1a70],EBX
005EAE38  88 9E 75 1A 00 00         MOV byte ptr [ESI + 0x1a75],BL
005EAE3E  89 9E 87 1A 00 00         MOV dword ptr [ESI + 0x1a87],EBX
005EAE44  89 9E 8B 1A 00 00         MOV dword ptr [ESI + 0x1a8b],EBX
005EAE4A  89 86 8F 1A 00 00         MOV dword ptr [ESI + 0x1a8f],EAX
005EAE50  88 9E 93 1A 00 00         MOV byte ptr [ESI + 0x1a93],BL
005EAE56  88 9E 76 1A 00 00         MOV byte ptr [ESI + 0x1a76],BL
005EAE5C  89 9E 77 1A 00 00         MOV dword ptr [ESI + 0x1a77],EBX
005EAE62  89 9E 7B 1A 00 00         MOV dword ptr [ESI + 0x1a7b],EBX
005EAE68  89 9E 83 1A 00 00         MOV dword ptr [ESI + 0x1a83],EBX
005EAE6E  F3 AB                     STOSD.REP ES:EDI
005EAE70  89 9E F0 1A 00 00         MOV dword ptr [ESI + 0x1af0],EBX
005EAE76  89 9E F4 1A 00 00         MOV dword ptr [ESI + 0x1af4],EBX
005EAE7C  89 9E EC 1A 00 00         MOV dword ptr [ESI + 0x1aec],EBX
005EAE82  89 9E 00 1B 00 00         MOV dword ptr [ESI + 0x1b00],EBX
005EAE88  89 9E FC 1A 00 00         MOV dword ptr [ESI + 0x1afc],EBX
005EAE8E  89 9E F8 1A 00 00         MOV dword ptr [ESI + 0x1af8],EBX
005EAE94  8B C6                     MOV EAX,ESI
005EAE96  5F                        POP EDI
005EAE97  5E                        POP ESI
005EAE98  5B                        POP EBX
005EAE99  8B E5                     MOV ESP,EBP
005EAE9B  5D                        POP EBP
005EAE9C  C3                        RET
LAB_005eae9d:
005EAE9D  5E                        POP ESI
005EAE9E  33 C0                     XOR EAX,EAX
005EAEA0  5B                        POP EBX
005EAEA1  8B E5                     MOV ESP,EBP
005EAEA3  5D                        POP EBP
005EAEA4  C3                        RET
