FUN_0056d580:
0056D580  55                        PUSH EBP
0056D581  8B EC                     MOV EBP,ESP
0056D583  83 EC 44                  SUB ESP,0x44
0056D586  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056D58B  56                        PUSH ESI
0056D58C  57                        PUSH EDI
0056D58D  33 FF                     XOR EDI,EDI
0056D58F  8D 55 C0                  LEA EDX,[EBP + -0x40]
0056D592  8D 4D BC                  LEA ECX,[EBP + -0x44]
0056D595  57                        PUSH EDI
0056D596  52                        PUSH EDX
0056D597  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0056D59A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056D5A0  E8 4B 02 1C 00            CALL 0x0072d7f0
0056D5A5  8B F0                     MOV ESI,EAX
0056D5A7  83 C4 08                  ADD ESP,0x8
0056D5AA  3B F7                     CMP ESI,EDI
0056D5AC  0F 85 E3 00 00 00         JNZ 0x0056d695
0056D5B2  39 3D 8C 67 80 00         CMP dword ptr [0x0080678c],EDI
0056D5B8  74 0D                     JZ 0x0056d5c7
0056D5BA  68 8C 67 80 00            PUSH 0x80678c
0056D5BF  E8 3C CD 19 00            CALL 0x0070a300
0056D5C4  83 C4 04                  ADD ESP,0x4
LAB_0056d5c7:
0056D5C7  A1 88 67 80 00            MOV EAX,[0x00806788]
0056D5CC  50                        PUSH EAX
0056D5CD  E8 9E 3B 18 00            CALL 0x006f1170
0056D5D2  A1 94 67 80 00            MOV EAX,[0x00806794]
0056D5D7  83 C4 04                  ADD ESP,0x4
0056D5DA  3B C7                     CMP EAX,EDI
0056D5DC  89 3D 88 67 80 00         MOV dword ptr [0x00806788],EDI
0056D5E2  74 0D                     JZ 0x0056d5f1
0056D5E4  68 94 67 80 00            PUSH 0x806794
0056D5E9  E8 12 CD 19 00            CALL 0x0070a300
0056D5EE  83 C4 04                  ADD ESP,0x4
LAB_0056d5f1:
0056D5F1  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0056D5F7  51                        PUSH ECX
0056D5F8  E8 73 3B 18 00            CALL 0x006f1170
0056D5FD  A1 7C 67 80 00            MOV EAX,[0x0080677c]
0056D602  83 C4 04                  ADD ESP,0x4
0056D605  3B C7                     CMP EAX,EDI
0056D607  89 3D 90 67 80 00         MOV dword ptr [0x00806790],EDI
0056D60D  74 0D                     JZ 0x0056d61c
0056D60F  68 7C 67 80 00            PUSH 0x80677c
0056D614  E8 E7 CC 19 00            CALL 0x0070a300
0056D619  83 C4 04                  ADD ESP,0x4
LAB_0056d61c:
0056D61C  8B 15 78 67 80 00         MOV EDX,dword ptr [0x00806778]
0056D622  52                        PUSH EDX
0056D623  E8 48 3B 18 00            CALL 0x006f1170
0056D628  A1 74 67 80 00            MOV EAX,[0x00806774]
0056D62D  83 C4 04                  ADD ESP,0x4
0056D630  3B C7                     CMP EAX,EDI
0056D632  89 3D 78 67 80 00         MOV dword ptr [0x00806778],EDI
0056D638  74 0D                     JZ 0x0056d647
0056D63A  68 74 67 80 00            PUSH 0x806774
0056D63F  E8 BC CC 19 00            CALL 0x0070a300
0056D644  83 C4 04                  ADD ESP,0x4
LAB_0056d647:
0056D647  A1 70 67 80 00            MOV EAX,[0x00806770]
0056D64C  50                        PUSH EAX
0056D64D  E8 1E 3B 18 00            CALL 0x006f1170
0056D652  A1 6C 67 80 00            MOV EAX,[0x0080676c]
0056D657  83 C4 04                  ADD ESP,0x4
0056D65A  3B C7                     CMP EAX,EDI
0056D65C  89 3D 70 67 80 00         MOV dword ptr [0x00806770],EDI
0056D662  74 0D                     JZ 0x0056d671
0056D664  68 6C 67 80 00            PUSH 0x80676c
0056D669  E8 92 CC 19 00            CALL 0x0070a300
0056D66E  83 C4 04                  ADD ESP,0x4
LAB_0056d671:
0056D671  8B 0D 68 67 80 00         MOV ECX,dword ptr [0x00806768]
0056D677  51                        PUSH ECX
0056D678  E8 F3 3A 18 00            CALL 0x006f1170
0056D67D  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0056D680  83 C4 04                  ADD ESP,0x4
0056D683  89 3D 68 67 80 00         MOV dword ptr [0x00806768],EDI
0056D689  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056D68F  5F                        POP EDI
0056D690  5E                        POP ESI
0056D691  8B E5                     MOV ESP,EBP
0056D693  5D                        POP EBP
0056D694  C3                        RET
LAB_0056d695:
0056D695  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0056D698  68 74 A1 7C 00            PUSH 0x7ca174
0056D69D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0056D6A2  56                        PUSH ESI
0056D6A3  57                        PUSH EDI
0056D6A4  68 17 04 00 00            PUSH 0x417
0056D6A9  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056D6AE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056D6B3  E8 18 FE 13 00            CALL 0x006ad4d0
0056D6B8  83 C4 18                  ADD ESP,0x18
0056D6BB  85 C0                     TEST EAX,EAX
0056D6BD  74 01                     JZ 0x0056d6c0
0056D6BF  CC                        INT3
LAB_0056d6c0:
0056D6C0  68 17 04 00 00            PUSH 0x417
0056D6C5  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056D6CA  57                        PUSH EDI
0056D6CB  56                        PUSH ESI
0056D6CC  E8 6F 87 13 00            CALL 0x006a5e40
0056D6D1  5F                        POP EDI
0056D6D2  5E                        POP ESI
0056D6D3  8B E5                     MOV ESP,EBP
0056D6D5  5D                        POP EBP
0056D6D6  C3                        RET
