FUN_005967f0:
005967F0  55                        PUSH EBP
005967F1  8B EC                     MOV EBP,ESP
005967F3  83 EC 48                  SUB ESP,0x48
005967F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005967FB  56                        PUSH ESI
005967FC  57                        PUSH EDI
005967FD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00596800  33 FF                     XOR EDI,EDI
00596802  8D 55 BC                  LEA EDX,[EBP + -0x44]
00596805  8D 4D B8                  LEA ECX,[EBP + -0x48]
00596808  57                        PUSH EDI
00596809  52                        PUSH EDX
0059680A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059680D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00596813  E8 D8 6F 19 00            CALL 0x0072d7f0
00596818  8B F0                     MOV ESI,EAX
0059681A  83 C4 08                  ADD ESP,0x8
0059681D  3B F7                     CMP ESI,EDI
0059681F  0F 85 4F 03 00 00         JNZ 0x00596b74
00596825  B9 90 2A 80 00            MOV ECX,0x802a90
0059682A  FF 15 2C C0 85 00         CALL dword ptr [0x0085c02c]
00596830  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00596833  8B CE                     MOV ECX,ESI
00596835  E8 54 DD E6 FF            CALL 0x0040458e
0059683A  A1 30 2A 80 00            MOV EAX,[0x00802a30]
0059683F  3B C7                     CMP EAX,EDI
00596841  74 28                     JZ 0x0059686b
00596843  39 B8 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EDI
00596849  74 14                     JZ 0x0059685f
0059684B  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0059684E  83 F9 FF                  CMP ECX,-0x1
00596851  74 18                     JZ 0x0059686b
00596853  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
00596856  51                        PUSH ECX
00596857  50                        PUSH EAX
00596858  E8 93 D2 11 00            CALL 0x006b3af0
0059685D  EB 0C                     JMP 0x0059686b
LAB_0059685f:
0059685F  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
00596865  51                        PUSH ECX
00596866  E8 A5 22 12 00            CALL 0x006b8b10
LAB_0059686b:
0059686B  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
00596871  6A 02                     PUSH 0x2
00596873  6A 0A                     PUSH 0xa
00596875  52                        PUSH EDX
00596876  E8 C8 B4 E6 FF            CALL 0x00401d43
0059687B  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00596880  83 C4 0C                  ADD ESP,0xc
00596883  83 C0 2C                  ADD EAX,0x2c
00596886  39 38                     CMP dword ptr [EAX],EDI
00596888  74 0C                     JZ 0x00596896
0059688A  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
00596890  50                        PUSH EAX
00596891  E8 4A B8 15 00            CALL 0x006f20e0
LAB_00596896:
00596896  8B CE                     MOV ECX,ESI
00596898  E8 A4 ED E6 FF            CALL 0x00405641
0059689D  8B CE                     MOV ECX,ESI
0059689F  E8 69 EF E6 FF            CALL 0x0040580d
005968A4  8B CE                     MOV ECX,ESI
005968A6  E8 4E B8 E6 FF            CALL 0x004020f9
005968AB  8B CE                     MOV ECX,ESI
005968AD  E8 5C E9 E6 FF            CALL 0x0040520e
005968B2  8B CE                     MOV ECX,ESI
005968B4  E8 D4 D8 E6 FF            CALL 0x0040418d
005968B9  8B 86 08 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b08]
005968BF  3B C7                     CMP EAX,EDI
005968C1  74 06                     JZ 0x005968c9
005968C3  50                        PUSH EAX
005968C4  E8 A7 EC 11 00            CALL 0x006b5570
LAB_005968c9:
005968C9  8B 86 9E 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e9e]
005968CF  89 BE 08 1B 00 00         MOV dword ptr [ESI + 0x1b08],EDI
005968D5  3B C7                     CMP EAX,EDI
005968D7  74 06                     JZ 0x005968df
005968D9  50                        PUSH EAX
005968DA  E8 91 EC 11 00            CALL 0x006b5570
LAB_005968df:
005968DF  8B 8E 0C 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b0c]
005968E5  8D 86 0C 1B 00 00         LEA EAX,[ESI + 0x1b0c]
005968EB  3B CF                     CMP ECX,EDI
005968ED  89 BE 9E 1E 00 00         MOV dword ptr [ESI + 0x1e9e],EDI
005968F3  74 06                     JZ 0x005968fb
005968F5  50                        PUSH EAX
005968F6  E8 65 47 11 00            CALL 0x006ab060
LAB_005968fb:
005968FB  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
00596901  3B CF                     CMP ECX,EDI
00596903  74 1A                     JZ 0x0059691f
00596905  E8 80 A9 E6 FF            CALL 0x0040128a
0059690A  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
00596910  51                        PUSH ECX
00596911  E8 9A 79 19 00            CALL 0x0072e2b0
00596916  83 C4 04                  ADD ESP,0x4
00596919  89 BE 23 1F 00 00         MOV dword ptr [ESI + 0x1f23],EDI
LAB_0059691f:
0059691F  8B 8E 27 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f27]
00596925  3B CF                     CMP ECX,EDI
00596927  74 1A                     JZ 0x00596943
00596929  E8 5C A9 E6 FF            CALL 0x0040128a
0059692E  8B 96 27 1F 00 00         MOV EDX,dword ptr [ESI + 0x1f27]
00596934  52                        PUSH EDX
00596935  E8 76 79 19 00            CALL 0x0072e2b0
0059693A  83 C4 04                  ADD ESP,0x4
0059693D  89 BE 27 1F 00 00         MOV dword ptr [ESI + 0x1f27],EDI
LAB_00596943:
00596943  8B 8E 2B 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2b]
00596949  3B CF                     CMP ECX,EDI
0059694B  74 1A                     JZ 0x00596967
0059694D  E8 38 A9 E6 FF            CALL 0x0040128a
00596952  8B 86 2B 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2b]
00596958  50                        PUSH EAX
00596959  E8 52 79 19 00            CALL 0x0072e2b0
0059695E  83 C4 04                  ADD ESP,0x4
00596961  89 BE 2B 1F 00 00         MOV dword ptr [ESI + 0x1f2b],EDI
LAB_00596967:
00596967  8B 8E 2F 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2f]
0059696D  3B CF                     CMP ECX,EDI
0059696F  74 1A                     JZ 0x0059698b
00596971  E8 14 A9 E6 FF            CALL 0x0040128a
00596976  8B 8E 2F 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2f]
0059697C  51                        PUSH ECX
0059697D  E8 2E 79 19 00            CALL 0x0072e2b0
00596982  83 C4 04                  ADD ESP,0x4
00596985  89 BE 2F 1F 00 00         MOV dword ptr [ESI + 0x1f2f],EDI
LAB_0059698b:
0059698B  8B 8E 8E 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e8e]
00596991  8D 86 8E 1E 00 00         LEA EAX,[ESI + 0x1e8e]
00596997  3B CF                     CMP ECX,EDI
00596999  74 06                     JZ 0x005969a1
0059699B  50                        PUSH EAX
0059699C  E8 BF 46 11 00            CALL 0x006ab060
LAB_005969a1:
005969A1  8B 8E 92 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e92]
005969A7  8D 86 92 1E 00 00         LEA EAX,[ESI + 0x1e92]
005969AD  3B CF                     CMP ECX,EDI
005969AF  74 06                     JZ 0x005969b7
005969B1  50                        PUSH EAX
005969B2  E8 A9 46 11 00            CALL 0x006ab060
LAB_005969b7:
005969B7  8B 8E 96 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e96]
005969BD  8D 86 96 1E 00 00         LEA EAX,[ESI + 0x1e96]
005969C3  3B CF                     CMP ECX,EDI
005969C5  74 06                     JZ 0x005969cd
005969C7  50                        PUSH EAX
005969C8  E8 93 46 11 00            CALL 0x006ab060
LAB_005969cd:
005969CD  8B 8E 9A 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e9a]
005969D3  8D 86 9A 1E 00 00         LEA EAX,[ESI + 0x1e9a]
005969D9  3B CF                     CMP ECX,EDI
005969DB  74 06                     JZ 0x005969e3
005969DD  50                        PUSH EAX
005969DE  E8 7D 46 11 00            CALL 0x006ab060
LAB_005969e3:
005969E3  8B 86 BC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1abc]
005969E9  3B C7                     CMP EAX,EDI
005969EB  7C 0D                     JL 0x005969fa
005969ED  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005969F3  50                        PUSH EAX
005969F4  52                        PUSH EDX
005969F5  E8 B6 D1 11 00            CALL 0x006b3bb0
LAB_005969fa:
005969FA  8B 8E C0 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ac0]
00596A00  8D 86 C0 1A 00 00         LEA EAX,[ESI + 0x1ac0]
00596A06  3B CF                     CMP ECX,EDI
00596A08  C7 86 BC 1A 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x1abc],0xffffffff
00596A12  74 06                     JZ 0x00596a1a
00596A14  50                        PUSH EAX
00596A15  E8 46 46 11 00            CALL 0x006ab060
LAB_00596a1a:
00596A1A  8B 86 B3 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ab3]
00596A20  3B C7                     CMP EAX,EDI
00596A22  74 09                     JZ 0x00596a2d
00596A24  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00596A27  50                        PUSH EAX
00596A28  E8 83 EC 14 00            CALL 0x006e56b0
LAB_00596a2d:
00596A2D  8B 8E AB 1A 00 00         MOV ECX,dword ptr [ESI + 0x1aab]
00596A33  8D 86 AB 1A 00 00         LEA EAX,[ESI + 0x1aab]
00596A39  3B CF                     CMP ECX,EDI
00596A3B  89 BE B3 1A 00 00         MOV dword ptr [ESI + 0x1ab3],EDI
00596A41  74 06                     JZ 0x00596a49
00596A43  50                        PUSH EAX
00596A44  E8 17 46 11 00            CALL 0x006ab060
LAB_00596a49:
00596A49  8B 86 9F 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a9f]
00596A4F  3B C7                     CMP EAX,EDI
00596A51  74 06                     JZ 0x00596a59
00596A53  50                        PUSH EAX
00596A54  E8 67 05 13 00            CALL 0x006c6fc0
LAB_00596a59:
00596A59  8B 8E 9B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a9b]
00596A5F  8D 86 9B 1A 00 00         LEA EAX,[ESI + 0x1a9b]
00596A65  3B CF                     CMP ECX,EDI
00596A67  89 BE 9F 1A 00 00         MOV dword ptr [ESI + 0x1a9f],EDI
00596A6D  74 06                     JZ 0x00596a75
00596A6F  50                        PUSH EAX
00596A70  E8 EB 45 11 00            CALL 0x006ab060
LAB_00596a75:
00596A75  8B 86 8F 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a8f]
00596A7B  3B C7                     CMP EAX,EDI
00596A7D  7C 0C                     JL 0x00596a8b
00596A7F  50                        PUSH EAX
00596A80  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00596A85  50                        PUSH EAX
00596A86  E8 25 D1 11 00            CALL 0x006b3bb0
LAB_00596a8b:
00596A8B  8B 8E 97 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a97]
00596A91  8D 86 97 1A 00 00         LEA EAX,[ESI + 0x1a97]
00596A97  3B CF                     CMP ECX,EDI
00596A99  C7 86 8F 1A 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x1a8f],0xffffffff
00596AA3  74 06                     JZ 0x00596aab
00596AA5  50                        PUSH EAX
00596AA6  E8 B5 45 11 00            CALL 0x006ab060
LAB_00596aab:
00596AAB  8B 86 77 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a77]
00596AB1  3B C7                     CMP EAX,EDI
00596AB3  74 0F                     JZ 0x00596ac4
00596AB5  50                        PUSH EAX
00596AB6  E8 A5 9A 17 00            CALL 0x00710560
00596ABB  83 C4 04                  ADD ESP,0x4
00596ABE  89 BE 77 1A 00 00         MOV dword ptr [ESI + 0x1a77],EDI
LAB_00596ac4:
00596AC4  8B 86 7B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a7b]
00596ACA  3B C7                     CMP EAX,EDI
00596ACC  74 0F                     JZ 0x00596add
00596ACE  50                        PUSH EAX
00596ACF  E8 8C 9A 17 00            CALL 0x00710560
00596AD4  83 C4 04                  ADD ESP,0x4
00596AD7  89 BE 7B 1A 00 00         MOV dword ptr [ESI + 0x1a7b],EDI
LAB_00596add:
00596ADD  8B 86 7F 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a7f]
00596AE3  3B C7                     CMP EAX,EDI
00596AE5  74 0F                     JZ 0x00596af6
00596AE7  50                        PUSH EAX
00596AE8  E8 73 9A 17 00            CALL 0x00710560
00596AED  83 C4 04                  ADD ESP,0x4
00596AF0  89 BE 7F 1A 00 00         MOV dword ptr [ESI + 0x1a7f],EDI
LAB_00596af6:
00596AF6  8B 86 67 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a67]
00596AFC  3B C7                     CMP EAX,EDI
00596AFE  74 07                     JZ 0x00596b07
00596B00  50                        PUSH EAX
00596B01  FF 15 78 BA 85 00         CALL dword ptr [0x0085ba78]
LAB_00596b07:
00596B07  8B 86 B3 1F 00 00         MOV EAX,dword ptr [ESI + 0x1fb3]
00596B0D  89 BE 67 1A 00 00         MOV dword ptr [ESI + 0x1a67],EDI
00596B13  3B C7                     CMP EAX,EDI
00596B15  74 06                     JZ 0x00596b1d
00596B17  50                        PUSH EAX
00596B18  E8 F3 75 11 00            CALL 0x006ae110
LAB_00596b1d:
00596B1D  8B 46 4D                  MOV EAX,dword ptr [ESI + 0x4d]
00596B20  89 BE B3 1F 00 00         MOV dword ptr [ESI + 0x1fb3],EDI
00596B26  3B C7                     CMP EAX,EDI
00596B28  74 0E                     JZ 0x00596b38
00596B2A  8D 4E 3D                  LEA ECX,[ESI + 0x3d]
00596B2D  51                        PUSH ECX
00596B2E  B9 20 76 80 00            MOV ECX,0x807620
00596B33  E8 18 D0 14 00            CALL 0x006e3b50
LAB_00596b38:
00596B38  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
00596B3E  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
00596B44  3B CF                     CMP ECX,EDI
00596B46  74 17                     JZ 0x00596b5f
00596B48  E8 E1 DA E6 FF            CALL 0x0040462e
00596B4D  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
00596B53  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
00596B59  89 B9 AB 1C 00 00         MOV dword ptr [ECX + 0x1cab],EDI
LAB_00596b5f:
00596B5F  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00596B62  89 3D 4C 17 81 00         MOV dword ptr [0x0081174c],EDI
00596B68  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00596B6E  5F                        POP EDI
00596B6F  5E                        POP ESI
00596B70  8B E5                     MOV ESP,EBP
00596B72  5D                        POP EBP
00596B73  C3                        RET
LAB_00596b74:
00596B74  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00596B77  68 A8 C0 7C 00            PUSH 0x7cc0a8
00596B7C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00596B81  56                        PUSH ESI
00596B82  57                        PUSH EDI
00596B83  68 97 01 00 00            PUSH 0x197
00596B88  68 70 BF 7C 00            PUSH 0x7cbf70
00596B8D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00596B92  E8 39 69 11 00            CALL 0x006ad4d0
00596B97  83 C4 18                  ADD ESP,0x18
00596B9A  85 C0                     TEST EAX,EAX
00596B9C  74 01                     JZ 0x00596b9f
00596B9E  CC                        INT3
LAB_00596b9f:
00596B9F  68 97 01 00 00            PUSH 0x197
00596BA4  68 70 BF 7C 00            PUSH 0x7cbf70
00596BA9  57                        PUSH EDI
00596BAA  56                        PUSH ESI
00596BAB  E8 90 F2 10 00            CALL 0x006a5e40
00596BB0  5F                        POP EDI
00596BB1  5E                        POP ESI
00596BB2  8B E5                     MOV ESP,EBP
00596BB4  5D                        POP EBP
00596BB5  C3                        RET
