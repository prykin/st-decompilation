FUN_004ee4d0:
004EE4D0  55                        PUSH EBP
004EE4D1  8B EC                     MOV EBP,ESP
004EE4D3  83 EC 6C                  SUB ESP,0x6c
004EE4D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004EE4DB  53                        PUSH EBX
004EE4DC  56                        PUSH ESI
004EE4DD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004EE4E0  57                        PUSH EDI
004EE4E1  8D 55 98                  LEA EDX,[EBP + -0x68]
004EE4E4  8D 4D 94                  LEA ECX,[EBP + -0x6c]
004EE4E7  6A 00                     PUSH 0x0
004EE4E9  52                        PUSH EDX
004EE4EA  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
004EE4ED  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004EE4F3  E8 F8 F2 23 00            CALL 0x0072d7f0
004EE4F8  8B F0                     MOV ESI,EAX
004EE4FA  83 C4 08                  ADD ESP,0x8
004EE4FD  85 F6                     TEST ESI,ESI
004EE4FF  0F 85 8C 02 00 00         JNZ 0x004ee791
004EE505  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004EE508  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004EE50B  53                        PUSH EBX
004EE50C  8B CE                     MOV ECX,ESI
004EE50E  E8 EE 2E F1 FF            CALL 0x00401401
004EE513  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
004EE516  3D 0E B2 00 00            CMP EAX,0xb20e
004EE51B  0F 87 55 01 00 00         JA 0x004ee676
004EE521  0F 84 00 01 00 00         JZ 0x004ee627
004EE527  3D FF B1 00 00            CMP EAX,0xb1ff
004EE52C  0F 87 9B 00 00 00         JA 0x004ee5cd
004EE532  74 40                     JZ 0x004ee574
004EE534  83 E8 02                  SUB EAX,0x2
004EE537  74 21                     JZ 0x004ee55a
004EE539  48                        DEC EAX
004EE53A  0F 85 3E 02 00 00         JNZ 0x004ee77e
004EE540  8B CE                     MOV ECX,ESI
004EE542  E8 06 38 F1 FF            CALL 0x00401d4d
004EE547  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
004EE54A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004EE54F  33 C0                     XOR EAX,EAX
004EE551  5F                        POP EDI
004EE552  5E                        POP ESI
004EE553  5B                        POP EBX
004EE554  8B E5                     MOV ESP,EBP
004EE556  5D                        POP EBP
004EE557  C2 04 00                  RET 0x4
LAB_004ee55a:
004EE55A  8B CE                     MOV ECX,ESI
004EE55C  E8 FF 33 F1 FF            CALL 0x00401960
004EE561  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
004EE564  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004EE569  33 C0                     XOR EAX,EAX
004EE56B  5F                        POP EDI
004EE56C  5E                        POP ESI
004EE56D  5B                        POP EBX
004EE56E  8B E5                     MOV ESP,EBP
004EE570  5D                        POP EBP
004EE571  C2 04 00                  RET 0x4
LAB_004ee574:
004EE574  66 83 BE 72 01 00 00 01   CMP word ptr [ESI + 0x172],0x1
004EE57C  0F 85 FC 01 00 00         JNZ 0x004ee77e
004EE582  68 AE 00 00 00            PUSH 0xae
004EE587  E8 A3 78 F1 FF            CALL 0x00405e2f
004EE58C  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
004EE58F  83 C4 04                  ADD ESP,0x4
004EE592  33 C9                     XOR ECX,ECX
004EE594  8A 8C 30 AF 01 00 00      MOV CL,byte ptr [EAX + ESI*0x1 + 0x1af]
004EE59B  6A 00                     PUSH 0x0
004EE59D  51                        PUSH ECX
004EE59E  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
004EE5A4  E8 04 50 F1 FF            CALL 0x004035ad
004EE5A9  8B 16                     MOV EDX,dword ptr [ESI]
004EE5AB  8D 46 18                  LEA EAX,[ESI + 0x18]
004EE5AE  50                        PUSH EAX
004EE5AF  8B CE                     MOV ECX,ESI
004EE5B1  C7 46 28 FF BF 00 00      MOV dword ptr [ESI + 0x28],0xbfff
004EE5B8  FF 12                     CALL dword ptr [EDX]
004EE5BA  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
004EE5BD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004EE5C2  33 C0                     XOR EAX,EAX
004EE5C4  5F                        POP EDI
004EE5C5  5E                        POP ESI
004EE5C6  5B                        POP EBX
004EE5C7  8B E5                     MOV ESP,EBP
004EE5C9  5D                        POP EBP
004EE5CA  C2 04 00                  RET 0x4
LAB_004ee5cd:
004EE5CD  3D 00 B2 00 00            CMP EAX,0xb200
004EE5D2  0F 85 A6 01 00 00         JNZ 0x004ee77e
004EE5D8  8B 8E AB 01 00 00         MOV ECX,dword ptr [ESI + 0x1ab]
004EE5DE  8B 3E                     MOV EDI,dword ptr [ESI]
004EE5E0  33 D2                     XOR EDX,EDX
004EE5E2  6A 01                     PUSH 0x1
004EE5E4  66 8B 53 16               MOV DX,word ptr [EBX + 0x16]
004EE5E8  6A 00                     PUSH 0x0
004EE5EA  68 0F 42 40 00            PUSH 0x40420f
004EE5EF  6A 00                     PUSH 0x0
004EE5F1  8A 84 32 AF 01 00 00      MOV AL,byte ptr [EDX + ESI*0x1 + 0x1af]
004EE5F8  51                        PUSH ECX
004EE5F9  50                        PUSH EAX
004EE5FA  E8 94 6E F1 FF            CALL 0x00405493
004EE5FF  83 C4 08                  ADD ESP,0x8
004EE602  50                        PUSH EAX
004EE603  E8 74 71 F1 FF            CALL 0x0040577c
004EE608  83 C4 08                  ADD ESP,0x8
004EE60B  8B CE                     MOV ECX,ESI
004EE60D  50                        PUSH EAX
004EE60E  6A 01                     PUSH 0x1
004EE610  53                        PUSH EBX
004EE611  FF 57 08                  CALL dword ptr [EDI + 0x8]
004EE614  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
004EE617  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004EE61C  33 C0                     XOR EAX,EAX
004EE61E  5F                        POP EDI
004EE61F  5E                        POP ESI
004EE620  5B                        POP EBX
004EE621  8B E5                     MOV ESP,EBP
004EE623  5D                        POP EBP
004EE624  C2 04 00                  RET 0x4
LAB_004ee627:
004EE627  8B 8E AB 01 00 00         MOV ECX,dword ptr [ESI + 0x1ab]
004EE62D  8B 3E                     MOV EDI,dword ptr [ESI]
004EE62F  33 D2                     XOR EDX,EDX
004EE631  6A 01                     PUSH 0x1
004EE633  66 8B 53 16               MOV DX,word ptr [EBX + 0x16]
004EE637  6A 00                     PUSH 0x0
004EE639  68 0F 42 40 00            PUSH 0x40420f
004EE63E  6A 00                     PUSH 0x0
004EE640  8A 84 32 AF 01 00 00      MOV AL,byte ptr [EDX + ESI*0x1 + 0x1af]
004EE647  51                        PUSH ECX
004EE648  50                        PUSH EAX
004EE649  E8 45 6E F1 FF            CALL 0x00405493
004EE64E  83 C4 08                  ADD ESP,0x8
004EE651  50                        PUSH EAX
004EE652  E8 25 71 F1 FF            CALL 0x0040577c
004EE657  83 C4 08                  ADD ESP,0x8
004EE65A  8B CE                     MOV ECX,ESI
004EE65C  50                        PUSH EAX
004EE65D  6A 06                     PUSH 0x6
004EE65F  53                        PUSH EBX
004EE660  FF 57 08                  CALL dword ptr [EDI + 0x8]
004EE663  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
004EE666  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004EE66B  33 C0                     XOR EAX,EAX
004EE66D  5F                        POP EDI
004EE66E  5E                        POP ESI
004EE66F  5B                        POP EBX
004EE670  8B E5                     MOV ESP,EBP
004EE672  5D                        POP EBP
004EE673  C2 04 00                  RET 0x4
LAB_004ee676:
004EE676  05 61 3F FF FF            ADD EAX,0xffff3f61
004EE67B  83 F8 12                  CMP EAX,0x12
004EE67E  0F 87 FA 00 00 00         JA 0x004ee77e
004EE684  33 C9                     XOR ECX,ECX
004EE686  8A 88 F4 E7 4E 00         MOV CL,byte ptr [EAX + 0x4ee7f4]
switchD_004ee68c::switchD:
004EE68C  FF 24 8D E0 E7 4E 00      JMP dword ptr [ECX*0x4 + 0x4ee7e0]
switchD_004ee68c::caseD_c09f:
004EE693  66 83 BE 72 01 00 00 01   CMP word ptr [ESI + 0x172],0x1
004EE69B  0F 85 DD 00 00 00         JNZ 0x004ee77e
004EE6A1  68 AE 00 00 00            PUSH 0xae
004EE6A6  E8 84 77 F1 FF            CALL 0x00405e2f
004EE6AB  8B 5B 10                  MOV EBX,dword ptr [EBX + 0x10]
004EE6AE  B9 08 00 00 00            MOV ECX,0x8
004EE6B3  33 C0                     XOR EAX,EAX
004EE6B5  8D 7D D8                  LEA EDI,[EBP + -0x28]
004EE6B8  F3 AB                     STOSD.REP ES:EDI
004EE6BA  83 C4 04                  ADD ESP,0x4
004EE6BD  81 FB 9F C0 00 00         CMP EBX,0xc09f
004EE6C3  AA                        STOSB ES:EDI
004EE6C4  75 06                     JNZ 0x004ee6cc
004EE6C6  C6 45 D8 15               MOV byte ptr [EBP + -0x28],0x15
004EE6CA  EB 0F                     JMP 0x004ee6db
LAB_004ee6cc:
004EE6CC  81 FB A0 C0 00 00         CMP EBX,0xc0a0
004EE6D2  0F 95 C2                  SETNZ DL
004EE6D5  83 C2 16                  ADD EDX,0x16
004EE6D8  88 55 D8                  MOV byte ptr [EBP + -0x28],DL
LAB_004ee6db:
004EE6DB  81 FB 9F C0 00 00         CMP EBX,0xc09f
004EE6E1  75 08                     JNZ 0x004ee6eb
004EE6E3  8A 86 BB 01 00 00         MOV AL,byte ptr [ESI + 0x1bb]
004EE6E9  EB 16                     JMP 0x004ee701
LAB_004ee6eb:
004EE6EB  81 FB A0 C0 00 00         CMP EBX,0xc0a0
004EE6F1  75 08                     JNZ 0x004ee6fb
004EE6F3  8A 86 BC 01 00 00         MOV AL,byte ptr [ESI + 0x1bc]
004EE6F9  EB 06                     JMP 0x004ee701
LAB_004ee6fb:
004EE6FB  8A 86 BD 01 00 00         MOV AL,byte ptr [ESI + 0x1bd]
LAB_004ee701:
004EE701  33 C9                     XOR ECX,ECX
004EE703  3C 03                     CMP AL,0x3
004EE705  0F 94 C1                  SETZ CL
004EE708  6A FF                     PUSH -0x1
004EE70A  8D 55 D8                  LEA EDX,[EBP + -0x28]
004EE70D  6A 00                     PUSH 0x0
004EE70F  89 4D F5                  MOV dword ptr [EBP + -0xb],ECX
004EE712  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004EE718  52                        PUSH EDX
004EE719  6A 17                     PUSH 0x17
004EE71B  E8 13 55 F1 FF            CALL 0x00403c33
004EE720  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
004EE723  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004EE728  33 C0                     XOR EAX,EAX
004EE72A  5F                        POP EDI
004EE72B  5E                        POP ESI
004EE72C  5B                        POP EBX
004EE72D  8B E5                     MOV ESP,EBP
004EE72F  5D                        POP EBP
004EE730  C2 04 00                  RET 0x4
switchD_004ee68c::caseD_c0af:
004EE733  80 BE BB 01 00 00 03      CMP byte ptr [ESI + 0x1bb],0x3
004EE73A  0F 94 C0                  SETZ AL
004EE73D  50                        PUSH EAX
004EE73E  6A 00                     PUSH 0x0
004EE740  68 A8 17 7C 00            PUSH 0x7c17a8
004EE745  EB 26                     JMP 0x004ee76d
switchD_004ee68c::caseD_c0b0:
004EE747  80 BE BC 01 00 00 03      CMP byte ptr [ESI + 0x1bc],0x3
004EE74E  0F 94 C1                  SETZ CL
004EE751  51                        PUSH ECX
004EE752  6A 00                     PUSH 0x0
004EE754  68 E8 16 7C 00            PUSH 0x7c16e8
004EE759  EB 12                     JMP 0x004ee76d
switchD_004ee68c::caseD_c0b1:
004EE75B  80 BE BD 01 00 00 03      CMP byte ptr [ESI + 0x1bd],0x3
004EE762  0F 94 C2                  SETZ DL
004EE765  52                        PUSH EDX
004EE766  6A 00                     PUSH 0x0
004EE768  68 DC 16 7C 00            PUSH 0x7c16dc
LAB_004ee76d:
004EE76D  E8 0A 70 F1 FF            CALL 0x0040577c
004EE772  83 C4 08                  ADD ESP,0x8
004EE775  8B CE                     MOV ECX,ESI
004EE777  50                        PUSH EAX
004EE778  53                        PUSH EBX
004EE779  E8 40 5B F1 FF            CALL 0x004042be
switchD_004ee68c::caseD_c0a2:
004EE77E  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
004EE781  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004EE786  33 C0                     XOR EAX,EAX
004EE788  5F                        POP EDI
004EE789  5E                        POP ESI
004EE78A  5B                        POP EBX
004EE78B  8B E5                     MOV ESP,EBP
004EE78D  5D                        POP EBP
004EE78E  C2 04 00                  RET 0x4
LAB_004ee791:
004EE791  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
004EE794  68 8C 17 7C 00            PUSH 0x7c178c
004EE799  68 CC 4C 7A 00            PUSH 0x7a4ccc
004EE79E  56                        PUSH ESI
004EE79F  6A 00                     PUSH 0x0
004EE7A1  68 F3 00 00 00            PUSH 0xf3
004EE7A6  68 94 16 7C 00            PUSH 0x7c1694
004EE7AB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004EE7B1  E8 1A ED 1B 00            CALL 0x006ad4d0
004EE7B6  83 C4 18                  ADD ESP,0x18
004EE7B9  85 C0                     TEST EAX,EAX
004EE7BB  74 01                     JZ 0x004ee7be
004EE7BD  CC                        INT3
LAB_004ee7be:
004EE7BE  68 F3 00 00 00            PUSH 0xf3
004EE7C3  68 94 16 7C 00            PUSH 0x7c1694
004EE7C8  6A 00                     PUSH 0x0
004EE7CA  56                        PUSH ESI
004EE7CB  E8 70 76 1B 00            CALL 0x006a5e40
004EE7D0  5F                        POP EDI
004EE7D1  5E                        POP ESI
004EE7D2  B8 FF FF 00 00            MOV EAX,0xffff
004EE7D7  5B                        POP EBX
004EE7D8  8B E5                     MOV ESP,EBP
004EE7DA  5D                        POP EBP
004EE7DB  C2 04 00                  RET 0x4
