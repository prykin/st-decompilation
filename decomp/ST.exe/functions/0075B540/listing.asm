FUN_0075b540:
0075B540  55                        PUSH EBP
0075B541  8B EC                     MOV EBP,ESP
0075B543  81 EC 18 05 00 00         SUB ESP,0x518
0075B549  53                        PUSH EBX
0075B54A  56                        PUSH ESI
0075B54B  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0075B54E  57                        PUSH EDI
0075B54F  83 3E 00                  CMP dword ptr [ESI],0x0
0075B552  75 11                     JNZ 0x0075b565
0075B554  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075B557  68 D4 05 00 00            PUSH 0x5d4
0075B55C  6A 01                     PUSH 0x1
0075B55E  50                        PUSH EAX
0075B55F  8B 08                     MOV ECX,dword ptr [EAX]
0075B561  FF 11                     CALL dword ptr [ECX]
0075B563  89 06                     MOV dword ptr [ESI],EAX
LAB_0075b565:
0075B565  8B 06                     MOV EAX,dword ptr [ESI]
0075B567  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075B56A  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075B56D  33 C9                     XOR ECX,ECX
0075B56F  89 90 D0 00 00 00         MOV dword ptr [EAX + 0xd0],EDX
0075B575  B8 01 00 00 00            MOV EAX,0x1
0075B57A  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0075B57D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0075b580:
0075B580  33 DB                     XOR EBX,EBX
0075B582  8A 1C 10                  MOV BL,byte ptr [EAX + EDX*0x1]
0075B585  8B F3                     MOV ESI,EBX
0075B587  83 FE 01                  CMP ESI,0x1
0075B58A  7C 31                     JL 0x0075b5bd
0075B58C  8A D8                     MOV BL,AL
0075B58E  8D BC 0D EC FE FF FF      LEA EDI,[EBP + ECX*0x1 + 0xfffffeec]
0075B595  8A FB                     MOV BH,BL
0075B597  8B CE                     MOV ECX,ESI
0075B599  8B C3                     MOV EAX,EBX
0075B59B  8B D1                     MOV EDX,ECX
0075B59D  C1 E0 10                  SHL EAX,0x10
0075B5A0  66 8B C3                  MOV AX,BX
0075B5A3  C1 E9 02                  SHR ECX,0x2
0075B5A6  F3 AB                     STOSD.REP ES:EDI
0075B5A8  8B CA                     MOV ECX,EDX
0075B5AA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075B5AD  83 E1 03                  AND ECX,0x3
0075B5B0  F3 AA                     STOSB.REP ES:EDI
0075B5B2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075B5B5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075B5B8  03 CE                     ADD ECX,ESI
0075B5BA  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_0075b5bd:
0075B5BD  40                        INC EAX
0075B5BE  83 F8 10                  CMP EAX,0x10
0075B5C1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0075B5C4  7E BA                     JLE 0x0075b580
0075B5C6  C6 84 0D EC FE FF FF 00   MOV byte ptr [EBP + ECX*0x1 + 0xfffffeec],0x0
0075B5CE  8B 9D EC FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffeec]
0075B5D4  8B F3                     MOV ESI,EBX
0075B5D6  33 C9                     XOR ECX,ECX
0075B5D8  81 E6 FF 00 00 00         AND ESI,0xff
0075B5DE  33 C0                     XOR EAX,EAX
0075B5E0  84 DB                     TEST BL,BL
0075B5E2  74 36                     JZ 0x0075b61a
LAB_0075b5e4:
0075B5E4  33 DB                     XOR EBX,EBX
0075B5E6  8A 9C 05 EC FE FF FF      MOV BL,byte ptr [EBP + EAX*0x1 + 0xfffffeec]
0075B5ED  3B DE                     CMP EBX,ESI
0075B5EF  75 1B                     JNZ 0x0075b60c
0075B5F1  8D BC 85 E8 FA FF FF      LEA EDI,[EBP + EAX*0x4 + 0xfffffae8]
LAB_0075b5f8:
0075B5F8  40                        INC EAX
0075B5F9  33 DB                     XOR EBX,EBX
0075B5FB  89 0F                     MOV dword ptr [EDI],ECX
0075B5FD  83 C7 04                  ADD EDI,0x4
0075B600  8A 9C 05 EC FE FF FF      MOV BL,byte ptr [EBP + EAX*0x1 + 0xfffffeec]
0075B607  41                        INC ECX
0075B608  3B DE                     CMP EBX,ESI
0075B60A  74 EC                     JZ 0x0075b5f8
LAB_0075b60c:
0075B60C  8A 9C 05 EC FE FF FF      MOV BL,byte ptr [EBP + EAX*0x1 + 0xfffffeec]
0075B613  D1 E1                     SHL ECX,0x1
0075B615  46                        INC ESI
0075B616  84 DB                     TEST BL,BL
0075B618  75 CA                     JNZ 0x0075b5e4
LAB_0075b61a:
0075B61A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075B61D  33 F6                     XOR ESI,ESI
0075B61F  B9 01 00 00 00            MOV ECX,0x1
0075B624  83 C0 48                  ADD EAX,0x48
LAB_0075b627:
0075B627  80 3C 11 00               CMP byte ptr [ECX + EDX*0x1],0x0
0075B62B  74 1F                     JZ 0x0075b64c
0075B62D  8B BC B5 E8 FA FF FF      MOV EDI,dword ptr [EBP + ESI*0x4 + 0xfffffae8]
0075B634  89 70 48                  MOV dword ptr [EAX + 0x48],ESI
0075B637  33 DB                     XOR EBX,EBX
0075B639  89 78 BC                  MOV dword ptr [EAX + -0x44],EDI
0075B63C  8A 1C 11                  MOV BL,byte ptr [ECX + EDX*0x1]
0075B63F  03 F3                     ADD ESI,EBX
0075B641  8B BC B5 E4 FA FF FF      MOV EDI,dword ptr [EBP + ESI*0x4 + 0xfffffae4]
0075B648  89 38                     MOV dword ptr [EAX],EDI
0075B64A  EB 06                     JMP 0x0075b652
LAB_0075b64c:
0075B64C  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
LAB_0075b652:
0075B652  41                        INC ECX
0075B653  83 C0 04                  ADD EAX,0x4
0075B656  83 F9 10                  CMP ECX,0x10
0075B659  7E CC                     JLE 0x0075b627
0075B65B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075B65E  B9 00 01 00 00            MOV ECX,0x100
0075B663  33 C0                     XOR EAX,EAX
0075B665  BB 01 00 00 00            MOV EBX,0x1
0075B66A  8D BE D4 00 00 00         LEA EDI,[ESI + 0xd4]
0075B670  C7 86 88 00 00 00 FF FF 0F 00  MOV dword ptr [ESI + 0x88],0xfffff
0075B67A  F3 AB                     STOSD.REP ES:EDI
0075B67C  B9 07 00 00 00            MOV ECX,0x7
0075B681  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0075B684  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0075b687:
0075B687  80 3C 13 01               CMP byte ptr [EBX + EDX*0x1],0x1
0075B68B  BE 01 00 00 00            MOV ESI,0x1
0075B690  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0075B693  72 6C                     JC 0x0075b701
0075B695  D3 E6                     SHL ESI,CL
0075B697  8D 8C 85 E8 FA FF FF      LEA ECX,[EBP + EAX*0x4 + 0xfffffae8]
0075B69E  8D 7C 10 11               LEA EDI,[EAX + EDX*0x1 + 0x11]
0075B6A2  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0075B6A5  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_0075b6a8:
0075B6A8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0075B6AB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075B6AE  8B 00                     MOV EAX,dword ptr [EAX]
0075B6B0  D3 E0                     SHL EAX,CL
0075B6B2  85 F6                     TEST ESI,ESI
0075B6B4  7E 24                     JLE 0x0075b6da
0075B6B6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075B6B9  8D 94 08 D4 04 00 00      LEA EDX,[EAX + ECX*0x1 + 0x4d4]
0075B6C0  8D 84 81 D4 00 00 00      LEA EAX,[ECX + EAX*0x4 + 0xd4]
LAB_0075b6c7:
0075B6C7  89 18                     MOV dword ptr [EAX],EBX
0075B6C9  8A 0F                     MOV CL,byte ptr [EDI]
0075B6CB  88 0A                     MOV byte ptr [EDX],CL
0075B6CD  83 C0 04                  ADD EAX,0x4
0075B6D0  42                        INC EDX
0075B6D1  4E                        DEC ESI
0075B6D2  75 F3                     JNZ 0x0075b6c7
0075B6D4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075B6D7  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_0075b6da:
0075B6DA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0075B6DD  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075B6E0  41                        INC ECX
0075B6E1  40                        INC EAX
0075B6E2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0075B6E5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0075B6E8  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0075B6EB  83 C1 04                  ADD ECX,0x4
0075B6EE  33 C0                     XOR EAX,EAX
0075B6F0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0075B6F3  8A 04 13                  MOV AL,byte ptr [EBX + EDX*0x1]
0075B6F6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0075B6F9  47                        INC EDI
0075B6FA  3B C8                     CMP ECX,EAX
0075B6FC  7E AA                     JLE 0x0075b6a8
0075B6FE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
LAB_0075b701:
0075B701  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075B704  43                        INC EBX
0075B705  49                        DEC ECX
0075B706  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0075B709  0F 89 78 FF FF FF         JNS 0x0075b687
0075B70F  5F                        POP EDI
0075B710  5E                        POP ESI
0075B711  5B                        POP EBX
0075B712  8B E5                     MOV ESP,EBP
0075B714  5D                        POP EBP
0075B715  C2 0C 00                  RET 0xc
