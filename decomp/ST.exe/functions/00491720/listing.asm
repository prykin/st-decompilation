FUN_00491720:
00491720  55                        PUSH EBP
00491721  8B EC                     MOV EBP,ESP
00491723  83 EC 28                  SUB ESP,0x28
00491726  53                        PUSH EBX
00491727  56                        PUSH ESI
00491728  8B F1                     MOV ESI,ECX
0049172A  33 C0                     XOR EAX,EAX
0049172C  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
00491732  33 DB                     XOR EBX,EBX
00491734  3B C8                     CMP ECX,EAX
00491736  57                        PUSH EDI
00491737  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0049173A  74 72                     JZ 0x004917ae
0049173C  66 8B 4E 24               MOV CX,word ptr [ESI + 0x24]
00491740  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
00491744  8D BE A6 05 00 00         LEA EDI,[ESI + 0x5a6]
0049174A  66 89 4D EC               MOV word ptr [EBP + -0x14],CX
0049174E  C7 45 E8 D3 5D 00 00      MOV dword ptr [EBP + -0x18],0x5dd3
00491755  66 89 55 EE               MOV word ptr [EBP + -0x12],DX
00491759  39 07                     CMP dword ptr [EDI],EAX
0049175B  75 2F                     JNZ 0x0049178c
0049175D  8B 86 A2 05 00 00         MOV EAX,dword ptr [ESI + 0x5a2]
00491763  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00491769  57                        PUSH EDI
0049176A  50                        PUSH EAX
0049176B  E8 60 4B 25 00            CALL 0x006e62d0
00491770  83 F8 FC                  CMP EAX,-0x4
00491773  75 17                     JNZ 0x0049178c
00491775  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049177B  68 1F 50 00 00            PUSH 0x501f
00491780  68 3C 9D 7A 00            PUSH 0x7a9d3c
00491785  51                        PUSH ECX
00491786  50                        PUSH EAX
00491787  E8 B4 46 21 00            CALL 0x006a5e40
LAB_0049178c:
0049178C  8B 3F                     MOV EDI,dword ptr [EDI]
0049178E  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
00491794  66 8B 57 24               MOV DX,word ptr [EDI + 0x24]
00491798  66 89 55 F0               MOV word ptr [EBP + -0x10],DX
0049179C  66 8B 47 32               MOV AX,word ptr [EDI + 0x32]
004917A0  66 89 45 F2               MOV word ptr [EBP + -0xe],AX
004917A4  8B 11                     MOV EDX,dword ptr [ECX]
004917A6  8D 45 D8                  LEA EAX,[EBP + -0x28]
004917A9  50                        PUSH EAX
004917AA  FF 12                     CALL dword ptr [EDX]
004917AC  33 C0                     XOR EAX,EAX
LAB_004917ae:
004917AE  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004917B1  8A 96 8E 00 00 00         MOV DL,byte ptr [ESI + 0x8e]
004917B7  89 86 C0 05 00 00         MOV dword ptr [ESI + 0x5c0],EAX
004917BD  89 86 C2 07 00 00         MOV dword ptr [ESI + 0x7c2],EAX
004917C3  89 86 A6 05 00 00         MOV dword ptr [ESI + 0x5a6],EAX
004917C9  66 8B 46 5F               MOV AX,word ptr [ESI + 0x5f]
004917CD  51                        PUSH ECX
004917CE  66 8B 4E 5D               MOV CX,word ptr [ESI + 0x5d]
004917D2  56                        PUSH ESI
004917D3  52                        PUSH EDX
004917D4  66 8B 56 5B               MOV DX,word ptr [ESI + 0x5b]
004917D8  50                        PUSH EAX
004917D9  51                        PUSH ECX
004917DA  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004917E0  52                        PUSH EDX
004917E1  E8 3F FB F6 FF            CALL 0x00401325
004917E6  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
004917EA  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004917ED  50                        PUSH EAX
004917EE  51                        PUSH ECX
004917EF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004917F5  E8 FF 44 F7 FF            CALL 0x00405cf9
004917FA  8B C8                     MOV ECX,EAX
004917FC  E8 F1 1E F7 FF            CALL 0x004036f2
00491801  8B 8E D1 01 00 00         MOV ECX,dword ptr [ESI + 0x1d1]
00491807  F6 C1 01                  TEST CL,0x1
0049180A  74 0B                     JZ 0x00491817
0049180C  A8 01                     TEST AL,0x1
0049180E  75 10                     JNZ 0x00491820
00491810  BF 01 00 00 00            MOV EDI,0x1
00491815  EB 0C                     JMP 0x00491823
LAB_00491817:
00491817  A8 01                     TEST AL,0x1
00491819  74 05                     JZ 0x00491820
0049181B  BB 01 00 00 00            MOV EBX,0x1
LAB_00491820:
00491820  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00491823:
00491823  F6 C1 02                  TEST CL,0x2
00491826  74 09                     JZ 0x00491831
00491828  A8 02                     TEST AL,0x2
0049182A  75 0C                     JNZ 0x00491838
0049182C  83 CF 02                  OR EDI,0x2
0049182F  EB 07                     JMP 0x00491838
LAB_00491831:
00491831  A8 02                     TEST AL,0x2
00491833  74 03                     JZ 0x00491838
00491835  83 CB 02                  OR EBX,0x2
LAB_00491838:
00491838  F6 C1 04                  TEST CL,0x4
0049183B  74 09                     JZ 0x00491846
0049183D  A8 04                     TEST AL,0x4
0049183F  75 0C                     JNZ 0x0049184d
00491841  83 CF 04                  OR EDI,0x4
00491844  EB 07                     JMP 0x0049184d
LAB_00491846:
00491846  A8 04                     TEST AL,0x4
00491848  74 03                     JZ 0x0049184d
0049184A  83 CB 04                  OR EBX,0x4
LAB_0049184d:
0049184D  F6 C1 08                  TEST CL,0x8
00491850  74 09                     JZ 0x0049185b
00491852  A8 08                     TEST AL,0x8
00491854  75 0C                     JNZ 0x00491862
00491856  83 CF 08                  OR EDI,0x8
00491859  EB 07                     JMP 0x00491862
LAB_0049185b:
0049185B  A8 08                     TEST AL,0x8
0049185D  74 03                     JZ 0x00491862
0049185F  83 CB 08                  OR EBX,0x8
LAB_00491862:
00491862  F6 C1 10                  TEST CL,0x10
00491865  74 09                     JZ 0x00491870
00491867  A8 10                     TEST AL,0x10
00491869  75 0C                     JNZ 0x00491877
0049186B  83 CF 10                  OR EDI,0x10
0049186E  EB 07                     JMP 0x00491877
LAB_00491870:
00491870  A8 10                     TEST AL,0x10
00491872  74 03                     JZ 0x00491877
00491874  83 CB 10                  OR EBX,0x10
LAB_00491877:
00491877  85 DB                     TEST EBX,EBX
00491879  74 0B                     JZ 0x00491886
0049187B  8B 16                     MOV EDX,dword ptr [ESI]
0049187D  53                        PUSH EBX
0049187E  8B CE                     MOV ECX,ESI
00491880  FF 92 00 01 00 00         CALL dword ptr [EDX + 0x100]
LAB_00491886:
00491886  85 FF                     TEST EDI,EDI
00491888  74 0B                     JZ 0x00491895
0049188A  8B 06                     MOV EAX,dword ptr [ESI]
0049188C  57                        PUSH EDI
0049188D  8B CE                     MOV ECX,ESI
0049188F  FF 90 04 01 00 00         CALL dword ptr [EAX + 0x104]
LAB_00491895:
00491895  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049189B  8D 45 F8                  LEA EAX,[EBP + -0x8]
0049189E  50                        PUSH EAX
0049189F  6A 03                     PUSH 0x3
004918A1  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004918A7  8B CE                     MOV ECX,ESI
004918A9  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004918AC  E8 75 08 F7 FF            CALL 0x00402126
004918B1  5F                        POP EDI
004918B2  5E                        POP ESI
004918B3  5B                        POP EBX
004918B4  8B E5                     MOV ESP,EBP
004918B6  5D                        POP EBP
004918B7  C3                        RET
