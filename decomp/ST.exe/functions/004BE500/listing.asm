FUN_004be500:
004BE500  55                        PUSH EBP
004BE501  8B EC                     MOV EBP,ESP
004BE503  83 EC 48                  SUB ESP,0x48
004BE506  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004BE509  56                        PUSH ESI
004BE50A  85 C0                     TEST EAX,EAX
004BE50C  57                        PUSH EDI
004BE50D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004BE510  74 10                     JZ 0x004be522
004BE512  8B 01                     MOV EAX,dword ptr [ECX]
004BE514  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
004BE51A  85 C0                     TEST EAX,EAX
004BE51C  0F 84 28 01 00 00         JZ 0x004be64a
LAB_004be522:
004BE522  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
004BE528  8D 45 BC                  LEA EAX,[EBP + -0x44]
004BE52B  8D 55 B8                  LEA EDX,[EBP + -0x48]
004BE52E  6A 00                     PUSH 0x0
004BE530  50                        PUSH EAX
004BE531  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
004BE534  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004BE53A  E8 B1 F2 26 00            CALL 0x0072d7f0
004BE53F  8B F0                     MOV ESI,EAX
004BE541  83 C4 08                  ADD ESP,0x8
004BE544  85 F6                     TEST ESI,ESI
004BE546  0F 85 C6 00 00 00         JNZ 0x004be612
004BE54C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004BE54F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004BE552  51                        PUSH ECX
004BE553  8B CE                     MOV ECX,ESI
004BE555  8B BE 1D 02 00 00         MOV EDI,dword ptr [ESI + 0x21d]
004BE55B  E8 2A 69 F4 FF            CALL 0x00404e8a
004BE560  8B 86 1D 02 00 00         MOV EAX,dword ptr [ESI + 0x21d]
004BE566  85 C0                     TEST EAX,EAX
004BE568  74 7F                     JZ 0x004be5e9
004BE56A  85 FF                     TEST EDI,EDI
004BE56C  75 7B                     JNZ 0x004be5e9
004BE56E  8A 96 3D 02 00 00         MOV DL,byte ptr [ESI + 0x23d]
004BE574  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BE57A  52                        PUSH EDX
004BE57B  E8 37 64 F4 FF            CALL 0x004049b7
004BE580  8A C8                     MOV CL,AL
004BE582  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004BE588  81 E1 FF 00 00 00         AND ECX,0xff
004BE58E  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004BE591  03 CA                     ADD ECX,EDX
004BE593  8B 04 8D 00 5C 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x795c00]
004BE59A  85 C0                     TEST EAX,EAX
004BE59C  74 4B                     JZ 0x004be5e9
004BE59E  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
004BE5A1  33 C9                     XOR ECX,ECX
004BE5A3  8A 88 2D 11 00 00         MOV CL,byte ptr [EAX + 0x112d]
004BE5A9  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004BE5AC  3B C1                     CMP EAX,ECX
004BE5AE  75 39                     JNZ 0x004be5e9
004BE5B0  8A 96 3D 02 00 00         MOV DL,byte ptr [ESI + 0x23d]
004BE5B6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BE5BC  8B 3E                     MOV EDI,dword ptr [ESI]
004BE5BE  52                        PUSH EDX
004BE5BF  E8 F3 63 F4 FF            CALL 0x004049b7
004BE5C4  8A C8                     MOV CL,AL
004BE5C6  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004BE5CC  81 E1 FF 00 00 00         AND ECX,0xff
004BE5D2  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004BE5D5  03 CA                     ADD ECX,EDX
004BE5D7  8B 04 8D 00 5C 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x795c00]
004BE5DE  8B CE                     MOV ECX,ESI
004BE5E0  50                        PUSH EAX
004BE5E1  6A 04                     PUSH 0x4
004BE5E3  FF 97 90 00 00 00         CALL dword ptr [EDI + 0x90]
LAB_004be5e9:
004BE5E9  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004BE5EF  8B 04 8D 94 4D 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x794d94]
004BE5F6  85 C0                     TEST EAX,EAX
004BE5F8  74 07                     JZ 0x004be601
004BE5FA  8B CE                     MOV ECX,ESI
004BE5FC  E8 DE 68 F4 FF            CALL 0x00404edf
LAB_004be601:
004BE601  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004BE604  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004BE60A  5F                        POP EDI
004BE60B  5E                        POP ESI
004BE60C  8B E5                     MOV ESP,EBP
004BE60E  5D                        POP EBP
004BE60F  C2 04 00                  RET 0x4
LAB_004be612:
004BE612  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004BE615  68 D0 C8 7A 00            PUSH 0x7ac8d0
004BE61A  68 CC 4C 7A 00            PUSH 0x7a4ccc
004BE61F  56                        PUSH ESI
004BE620  6A 00                     PUSH 0x0
004BE622  6A 2F                     PUSH 0x2f
004BE624  68 A8 C8 7A 00            PUSH 0x7ac8a8
004BE629  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BE62E  E8 9D EE 1E 00            CALL 0x006ad4d0
004BE633  83 C4 18                  ADD ESP,0x18
004BE636  85 C0                     TEST EAX,EAX
004BE638  74 01                     JZ 0x004be63b
004BE63A  CC                        INT3
LAB_004be63b:
004BE63B  6A 30                     PUSH 0x30
004BE63D  68 A8 C8 7A 00            PUSH 0x7ac8a8
004BE642  6A 00                     PUSH 0x0
004BE644  56                        PUSH ESI
004BE645  E8 F6 77 1E 00            CALL 0x006a5e40
LAB_004be64a:
004BE64A  5F                        POP EDI
004BE64B  5E                        POP ESI
004BE64C  8B E5                     MOV ESP,EBP
004BE64E  5D                        POP EBP
004BE64F  C2 04 00                  RET 0x4
