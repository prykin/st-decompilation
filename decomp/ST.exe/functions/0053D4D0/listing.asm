SAMPanelTy::GetMessage:
0053D4D0  55                        PUSH EBP
0053D4D1  8B EC                     MOV EBP,ESP
0053D4D3  83 EC 50                  SUB ESP,0x50
0053D4D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053D4DB  53                        PUSH EBX
0053D4DC  56                        PUSH ESI
0053D4DD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0053D4E0  57                        PUSH EDI
0053D4E1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0053D4E4  8D 4D B0                  LEA ECX,[EBP + -0x50]
0053D4E7  6A 00                     PUSH 0x0
0053D4E9  52                        PUSH EDX
0053D4EA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0053D4ED  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053D4F3  E8 F8 02 1F 00            CALL 0x0072d7f0
0053D4F8  8B F0                     MOV ESI,EAX
0053D4FA  83 C4 08                  ADD ESP,0x8
0053D4FD  85 F6                     TEST ESI,ESI
0053D4FF  0F 85 B1 01 00 00         JNZ 0x0053d6b6
0053D505  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0053D508  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0053D50B  57                        PUSH EDI
0053D50C  8B CE                     MOV ECX,ESI
0053D50E  E8 EE 3E EC FF            CALL 0x00401401
0053D513  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0053D516  3D 08 B5 00 00            CMP EAX,0xb508
0053D51B  0F 87 BC 00 00 00         JA 0x0053d5dd
0053D521  0F 84 8A 00 00 00         JZ 0x0053d5b1
0053D527  83 F8 03                  CMP EAX,0x3
0053D52A  77 3F                     JA 0x0053d56b
0053D52C  74 23                     JZ 0x0053d551
0053D52E  83 E8 02                  SUB EAX,0x2
0053D531  0F 85 6C 01 00 00         JNZ 0x0053d6a3
0053D537  8B CE                     MOV ECX,ESI
0053D539  E8 F1 3D EC FF            CALL 0x0040132f
0053D53E  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0053D541  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053D546  33 C0                     XOR EAX,EAX
0053D548  5F                        POP EDI
0053D549  5E                        POP ESI
0053D54A  5B                        POP EBX
0053D54B  8B E5                     MOV ESP,EBP
0053D54D  5D                        POP EBP
0053D54E  C2 04 00                  RET 0x4
LAB_0053d551:
0053D551  8B CE                     MOV ECX,ESI
0053D553  E8 3E 68 EC FF            CALL 0x00403d96
0053D558  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0053D55B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053D560  33 C0                     XOR EAX,EAX
0053D562  5F                        POP EDI
0053D563  5E                        POP ESI
0053D564  5B                        POP EBX
0053D565  8B E5                     MOV ESP,EBP
0053D567  5D                        POP EBP
0053D568  C2 04 00                  RET 0x4
LAB_0053d56b:
0053D56B  3D FF B4 00 00            CMP EAX,0xb4ff
0053D570  0F 82 2D 01 00 00         JC 0x0053d6a3
0053D576  3D 07 B5 00 00            CMP EAX,0xb507
0053D57B  0F 87 22 01 00 00         JA 0x0053d6a3
0053D581  8A 47 10                  MOV AL,byte ptr [EDI + 0x10]
0053D584  6A FF                     PUSH -0x1
0053D586  8D 4D FF                  LEA ECX,[EBP + -0x1]
0053D589  6A 00                     PUSH 0x0
0053D58B  FE C0                     INC AL
0053D58D  51                        PUSH ECX
0053D58E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0053D594  6A 2A                     PUSH 0x2a
0053D596  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
0053D599  E8 95 66 EC FF            CALL 0x00403c33
0053D59E  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0053D5A1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053D5A6  33 C0                     XOR EAX,EAX
0053D5A8  5F                        POP EDI
0053D5A9  5E                        POP ESI
0053D5AA  5B                        POP EBX
0053D5AB  8B E5                     MOV ESP,EBP
0053D5AD  5D                        POP EBP
0053D5AE  C2 04 00                  RET 0x4
LAB_0053d5b1:
0053D5B1  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0053D5B7  6A FF                     PUSH -0x1
0053D5B9  8D 55 FE                  LEA EDX,[EBP + -0x2]
0053D5BC  6A 00                     PUSH 0x0
0053D5BE  52                        PUSH EDX
0053D5BF  6A 2A                     PUSH 0x2a
0053D5C1  C6 45 FE FF               MOV byte ptr [EBP + -0x2],0xff
0053D5C5  E8 69 66 EC FF            CALL 0x00403c33
0053D5CA  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0053D5CD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053D5D2  33 C0                     XOR EAX,EAX
0053D5D4  5F                        POP EDI
0053D5D5  5E                        POP ESI
0053D5D6  5B                        POP EBX
0053D5D7  8B E5                     MOV ESP,EBP
0053D5D9  5D                        POP EBP
0053D5DA  C2 04 00                  RET 0x4
LAB_0053d5dd:
0053D5DD  3D 0F B5 00 00            CMP EAX,0xb50f
0053D5E2  0F 82 BB 00 00 00         JC 0x0053d6a3
0053D5E8  3D 17 B5 00 00            CMP EAX,0xb517
0053D5ED  76 3F                     JBE 0x0053d62e
0053D5EF  3D 18 B5 00 00            CMP EAX,0xb518
0053D5F4  0F 85 A9 00 00 00         JNZ 0x0053d6a3
0053D5FA  8B 1E                     MOV EBX,dword ptr [ESI]
0053D5FC  6A 01                     PUSH 0x1
0053D5FE  6A 00                     PUSH 0x0
0053D600  68 55 27 00 00            PUSH 0x2755
0053D605  6A 00                     PUSH 0x0
0053D607  68 E0 77 7C 00            PUSH 0x7c77e0
0053D60C  E8 6B 81 EC FF            CALL 0x0040577c
0053D611  83 C4 08                  ADD ESP,0x8
0053D614  8B CE                     MOV ECX,ESI
0053D616  50                        PUSH EAX
0053D617  57                        PUSH EDI
0053D618  FF 53 10                  CALL dword ptr [EBX + 0x10]
0053D61B  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0053D61E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053D623  33 C0                     XOR EAX,EAX
0053D625  5F                        POP EDI
0053D626  5E                        POP ESI
0053D627  5B                        POP EBX
0053D628  8B E5                     MOV ESP,EBP
0053D62A  5D                        POP EBP
0053D62B  C2 04 00                  RET 0x4
LAB_0053d62e:
0053D62E  8A 47 10                  MOV AL,byte ptr [EDI + 0x10]
0053D631  8B 7F 18                  MOV EDI,dword ptr [EDI + 0x18]
0053D634  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0053D637  2C 0F                     SUB AL,0xf
0053D639  8B 1F                     MOV EBX,dword ptr [EDI]
0053D63B  8B 7F 04                  MOV EDI,dword ptr [EDI + 0x4]
0053D63E  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
0053D641  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
0053D644  2B D9                     SUB EBX,ECX
0053D646  85 C0                     TEST EAX,EAX
0053D648  A1 34 67 80 00            MOV EAX,[0x00806734]
0053D64D  74 03                     JZ 0x0053d652
0053D64F  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
LAB_0053d652:
0053D652  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0053D655  2B F8                     SUB EDI,EAX
0053D657  81 E1 FF 00 00 00         AND ECX,0xff
0053D65D  33 D2                     XOR EDX,EDX
0053D65F  8A 84 31 AB 01 00 00      MOV AL,byte ptr [ECX + ESI*0x1 + 0x1ab]
0053D666  84 C0                     TEST AL,AL
0053D668  8B 86 B1 01 00 00         MOV EAX,dword ptr [ESI + 0x1b1]
0053D66E  0F 94 C2                  SETZ DL
0053D671  52                        PUSH EDX
0053D672  50                        PUSH EAX
0053D673  E8 28 DD 1C 00            CALL 0x0070b3a0
0053D678  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
0053D67B  50                        PUSH EAX
0053D67C  6A 01                     PUSH 0x1
0053D67E  57                        PUSH EDI
0053D67F  53                        PUSH EBX
0053D680  51                        PUSH ECX
0053D681  E8 A3 5B EC FF            CALL 0x00403229
0053D686  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
0053D689  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0053D68C  8B 4E 60                  MOV ECX,dword ptr [ESI + 0x60]
0053D68F  83 C4 1C                  ADD ESP,0x1c
0053D692  52                        PUSH EDX
0053D693  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0053D699  50                        PUSH EAX
0053D69A  6A FF                     PUSH -0x1
0053D69C  51                        PUSH ECX
0053D69D  52                        PUSH EDX
0053D69E  E8 9D 5F 17 00            CALL 0x006b3640
LAB_0053d6a3:
0053D6A3  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0053D6A6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053D6AB  33 C0                     XOR EAX,EAX
0053D6AD  5F                        POP EDI
0053D6AE  5E                        POP ESI
0053D6AF  5B                        POP EBX
0053D6B0  8B E5                     MOV ESP,EBP
0053D6B2  5D                        POP EBP
0053D6B3  C2 04 00                  RET 0x4
LAB_0053d6b6:
0053D6B6  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0053D6B9  68 54 78 7C 00            PUSH 0x7c7854
0053D6BE  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053D6C3  56                        PUSH ESI
0053D6C4  6A 00                     PUSH 0x0
0053D6C6  68 94 00 00 00            PUSH 0x94
0053D6CB  68 98 77 7C 00            PUSH 0x7c7798
0053D6D0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053D6D6  E8 F5 FD 16 00            CALL 0x006ad4d0
0053D6DB  83 C4 18                  ADD ESP,0x18
0053D6DE  85 C0                     TEST EAX,EAX
0053D6E0  74 01                     JZ 0x0053d6e3
0053D6E2  CC                        INT3
LAB_0053d6e3:
0053D6E3  68 94 00 00 00            PUSH 0x94
0053D6E8  68 98 77 7C 00            PUSH 0x7c7798
0053D6ED  6A 00                     PUSH 0x0
0053D6EF  56                        PUSH ESI
0053D6F0  E8 4B 87 16 00            CALL 0x006a5e40
0053D6F5  5F                        POP EDI
0053D6F6  5E                        POP ESI
0053D6F7  B8 FF FF 00 00            MOV EAX,0xffff
0053D6FC  5B                        POP EBX
0053D6FD  8B E5                     MOV ESP,EBP
0053D6FF  5D                        POP EBP
0053D700  C2 04 00                  RET 0x4
