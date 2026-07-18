FSGSTy::NewGameCtrls:
0059E7F0  55                        PUSH EBP
0059E7F1  8B EC                     MOV EBP,ESP
0059E7F3  81 EC D4 08 00 00         SUB ESP,0x8d4
0059E7F9  56                        PUSH ESI
0059E7FA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059E7FD  57                        PUSH EDI
0059E7FE  B9 23 02 00 00            MOV ECX,0x223
0059E803  33 C0                     XOR EAX,EAX
0059E805  8D BD 2C F7 FF FF         LEA EDI,[EBP + 0xfffff72c]
0059E80B  F3 AB                     STOSD.REP ES:EDI
0059E80D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059E812  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059E815  8D 4D B8                  LEA ECX,[EBP + -0x48]
0059E818  6A 00                     PUSH 0x0
0059E81A  52                        PUSH EDX
0059E81B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059E81E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059E824  E8 C7 EF 18 00            CALL 0x0072d7f0
0059E829  8B F0                     MOV ESI,EAX
0059E82B  83 C4 08                  ADD ESP,0x8
0059E82E  85 F6                     TEST ESI,ESI
0059E830  0F 85 E0 01 00 00         JNZ 0x0059ea16
0059E836  6A 01                     PUSH 0x1
0059E838  6A 01                     PUSH 0x1
0059E83A  50                        PUSH EAX
0059E83B  E8 B0 6C 11 00            CALL 0x006b54f0
0059E840  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0059E843  68 1D 7E 80 00            PUSH 0x807e1d
0059E848  50                        PUSH EAX
0059E849  89 86 E8 1A 00 00         MOV dword ptr [ESI + 0x1ae8],EAX
0059E84F  E8 4C 72 11 00            CALL 0x006b5aa0
0059E854  6A 01                     PUSH 0x1
0059E856  6A 01                     PUSH 0x1
0059E858  6A 00                     PUSH 0x0
0059E85A  E8 91 6C 11 00            CALL 0x006b54f0
0059E85F  68 A0 16 80 00            PUSH 0x8016a0
0059E864  50                        PUSH EAX
0059E865  89 86 EC 1A 00 00         MOV dword ptr [ESI + 0x1aec],EAX
0059E86B  E8 30 72 11 00            CALL 0x006b5aa0
0059E870  B9 23 02 00 00            MOV ECX,0x223
0059E875  33 C0                     XOR EAX,EAX
0059E877  8D BD 2C F7 FF FF         LEA EDI,[EBP + 0xfffff72c]
0059E87D  6A 00                     PUSH 0x0
0059E87F  F3 AB                     STOSD.REP ES:EDI
0059E881  8B 86 73 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a73]
0059E887  8B 8E E8 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ae8]
0059E88D  89 85 34 F7 FF FF         MOV dword ptr [EBP + 0xfffff734],EAX
0059E893  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0059E896  89 85 B8 F7 FF FF         MOV dword ptr [EBP + 0xfffff7b8],EAX
0059E89C  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0059E89F  89 85 58 F7 FF FF         MOV dword ptr [EBP + 0xfffff758],EAX
0059E8A5  89 85 78 F7 FF FF         MOV dword ptr [EBP + 0xfffff778],EAX
0059E8AB  B8 02 00 00 00            MOV EAX,0x2
0059E8B0  89 8D 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ECX
0059E8B6  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059E8B9  89 85 BC F7 FF FF         MOV dword ptr [EBP + 0xfffff7bc],EAX
0059E8BF  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0059E8C2  89 85 5C F7 FF FF         MOV dword ptr [EBP + 0xfffff75c],EAX
0059E8C8  89 85 7C F7 FF FF         MOV dword ptr [EBP + 0xfffff77c],EAX
0059E8CE  8D 85 2C F7 FF FF         LEA EAX,[EBP + 0xfffff72c]
0059E8D4  50                        PUSH EAX
0059E8D5  8D 86 C4 1A 00 00         LEA EAX,[ESI + 0x1ac4]
0059E8DB  C7 85 2C F7 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff72c],0x1
0059E8E5  C7 85 30 F7 FF FF 89 00 00 00  MOV dword ptr [EBP + 0xfffff730],0x89
0059E8EF  C7 85 38 F7 FF FF D2 00 00 00  MOV dword ptr [EBP + 0xfffff738],0xd2
0059E8F9  C7 85 3C F7 FF FF 06 01 00 00  MOV dword ptr [EBP + 0xfffff73c],0x106
0059E903  C7 85 40 F7 FF FF 7C 01 00 00  MOV dword ptr [EBP + 0xfffff740],0x17c
0059E90D  C7 85 44 F7 FF FF 19 00 00 00  MOV dword ptr [EBP + 0xfffff744],0x19
0059E917  C7 85 48 F7 FF FF 20 00 00 00  MOV dword ptr [EBP + 0xfffff748],0x20
0059E921  C7 85 60 F7 FF FF FF 68 00 00  MOV dword ptr [EBP + 0xfffff760],0x68ff
0059E92B  C7 85 80 F7 FF FF 7F 69 00 00  MOV dword ptr [EBP + 0xfffff780],0x697f
0059E935  C7 45 A4 55 69 00 00      MOV dword ptr [EBP + -0x5c],0x6955
0059E93C  C7 85 C0 F7 FF FF FF 63 00 00  MOV dword ptr [EBP + 0xfffff7c0],0x63ff
0059E946  8B 11                     MOV EDX,dword ptr [ECX]
0059E948  6A 00                     PUSH 0x0
0059E94A  50                        PUSH EAX
0059E94B  6A 06                     PUSH 0x6
0059E94D  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059E950  8B 8E EC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1aec]
0059E956  8D 85 2C F7 FF FF         LEA EAX,[EBP + 0xfffff72c]
0059E95C  89 8D 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ECX
0059E962  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059E965  6A 00                     PUSH 0x0
0059E967  50                        PUSH EAX
0059E968  8D 86 C8 1A 00 00         LEA EAX,[ESI + 0x1ac8]
0059E96E  C7 85 3C F7 FF FF 3D 01 00 00  MOV dword ptr [EBP + 0xfffff73c],0x13d
0059E978  C7 85 40 F7 FF FF AA 00 00 00  MOV dword ptr [EBP + 0xfffff740],0xaa
0059E982  C7 85 44 F7 FF FF 14 00 00 00  MOV dword ptr [EBP + 0xfffff744],0x14
0059E98C  C7 85 48 F7 FF FF 10 00 00 00  MOV dword ptr [EBP + 0xfffff748],0x10
0059E996  8B 11                     MOV EDX,dword ptr [ECX]
0059E998  6A 00                     PUSH 0x0
0059E99A  50                        PUSH EAX
0059E99B  6A 06                     PUSH 0x6
0059E99D  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059E9A0  68 8B 69 00 00            PUSH 0x698b
0059E9A5  68 04 69 00 00            PUSH 0x6904
0059E9AA  6A 19                     PUSH 0x19
0059E9AC  68 86 01 00 00            PUSH 0x186
0059E9B1  68 6F 01 00 00            PUSH 0x16f
0059E9B6  C7 86 C2 1E 00 00 00 01 00 00  MOV dword ptr [ESI + 0x1ec2],0x100
0059E9C0  C7 86 C6 1E 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x1ec6],0xffffffff
0059E9CA  C7 86 CA 1E 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1eca],0x0
0059E9D4  68 CD 00 00 00            PUSH 0xcd
0059E9D9  6A 01                     PUSH 0x1
0059E9DB  6A 01                     PUSH 0x1
0059E9DD  8B CE                     MOV ECX,ESI
0059E9DF  E8 37 4C E6 FF            CALL 0x0040361b
0059E9E4  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059E9E7  89 86 B6 1E 00 00         MOV dword ptr [ESI + 0x1eb6],EAX
0059E9ED  51                        PUSH ECX
0059E9EE  6A 00                     PUSH 0x0
0059E9F0  6A 0F                     PUSH 0xf
0059E9F2  8B CE                     MOV ECX,ESI
0059E9F4  C7 46 2D 61 00 00 00      MOV dword ptr [ESI + 0x2d],0x61
0059E9FB  C7 46 35 00 00 00 00      MOV dword ptr [ESI + 0x35],0x0
0059EA02  E8 79 76 14 00            CALL 0x006e6080
0059EA07  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0059EA0A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059EA10  5F                        POP EDI
0059EA11  5E                        POP ESI
0059EA12  8B E5                     MOV ESP,EBP
0059EA14  5D                        POP EBP
0059EA15  C3                        RET
LAB_0059ea16:
0059EA16  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059EA19  68 6C C3 7C 00            PUSH 0x7cc36c
0059EA1E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059EA23  56                        PUSH ESI
0059EA24  6A 00                     PUSH 0x0
0059EA26  68 82 07 00 00            PUSH 0x782
0059EA2B  68 70 BF 7C 00            PUSH 0x7cbf70
0059EA30  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059EA35  E8 96 EA 10 00            CALL 0x006ad4d0
0059EA3A  83 C4 18                  ADD ESP,0x18
0059EA3D  85 C0                     TEST EAX,EAX
0059EA3F  74 01                     JZ 0x0059ea42
0059EA41  CC                        INT3
LAB_0059ea42:
0059EA42  68 82 07 00 00            PUSH 0x782
0059EA47  68 70 BF 7C 00            PUSH 0x7cbf70
0059EA4C  6A 00                     PUSH 0x0
0059EA4E  56                        PUSH ESI
0059EA4F  E8 EC 73 10 00            CALL 0x006a5e40
0059EA54  5F                        POP EDI
0059EA55  5E                        POP ESI
0059EA56  8B E5                     MOV ESP,EBP
0059EA58  5D                        POP EBP
0059EA59  C3                        RET
