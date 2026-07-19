FUN_004845e0:
004845E0  55                        PUSH EBP
004845E1  8B EC                     MOV EBP,ESP
004845E3  83 EC 0C                  SUB ESP,0xc
004845E6  53                        PUSH EBX
004845E7  56                        PUSH ESI
004845E8  57                        PUSH EDI
004845E9  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004845EC  85 FF                     TEST EDI,EDI
004845EE  8B F1                     MOV ESI,ECX
004845F0  BB E8 03 00 00            MOV EBX,0x3e8
004845F5  74 20                     JZ 0x00484617
004845F7  39 5F 20                  CMP dword ptr [EDI + 0x20],EBX
004845FA  75 1B                     JNZ 0x00484617
004845FC  8B 87 B4 04 00 00         MOV EAX,dword ptr [EDI + 0x4b4]
00484602  85 C0                     TEST EAX,EAX
00484604  0F 85 32 1C 00 00         JNZ 0x0048623c
0048460A  83 BF 45 02 00 00 06      CMP dword ptr [EDI + 0x245],0x6
00484611  0F 84 25 1C 00 00         JZ 0x0048623c
LAB_00484617:
00484617  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0048461A  83 F8 4D                  CMP EAX,0x4d
0048461D  0F 87 19 1C 00 00         JA 0x0048623c
00484623  33 C9                     XOR ECX,ECX
00484625  8A 88 A0 62 48 00         MOV CL,byte ptr [EAX + 0x4862a0]
switchD_0048462b::switchD:
0048462B  FF 24 8D 48 62 48 00      JMP dword ptr [ECX*0x4 + 0x486248]
switchD_0048462b::caseD_2:
00484632  8B CE                     MOV ECX,ESI
00484634  E8 32 DC F7 FF            CALL 0x0040226b
00484639  F7 D8                     NEG EAX
0048463B  1B C0                     SBB EAX,EAX
0048463D  5F                        POP EDI
0048463E  24 FA                     AND AL,0xfa
00484640  5E                        POP ESI
00484641  83 C0 06                  ADD EAX,0x6
00484644  5B                        POP EBX
00484645  8B E5                     MOV ESP,EBP
00484647  5D                        POP EBP
00484648  C2 10 00                  RET 0x10
switchD_0048462b::caseD_6:
0048464B  8B CE                     MOV ECX,ESI
0048464D  E8 19 DC F7 FF            CALL 0x0040226b
00484652  F7 D8                     NEG EAX
00484654  1B C0                     SBB EAX,EAX
00484656  5F                        POP EDI
00484657  24 F1                     AND AL,0xf1
00484659  5E                        POP ESI
0048465A  83 C0 0F                  ADD EAX,0xf
0048465D  5B                        POP EBX
0048465E  8B E5                     MOV ESP,EBP
00484660  5D                        POP EBP
00484661  C2 10 00                  RET 0x10
switchD_0048462b::caseD_3:
00484664  8B CE                     MOV ECX,ESI
00484666  E8 00 DC F7 FF            CALL 0x0040226b
0048466B  85 C0                     TEST EAX,EAX
0048466D  0F 85 C9 1B 00 00         JNZ 0x0048623c
00484673  85 FF                     TEST EDI,EDI
00484675  75 0D                     JNZ 0x00484684
00484677  5F                        POP EDI
00484678  5E                        POP ESI
00484679  66 B8 01 00               MOV AX,0x1
0048467D  5B                        POP EBX
0048467E  8B E5                     MOV ESP,EBP
00484680  5D                        POP EBP
00484681  C2 10 00                  RET 0x10
LAB_00484684:
00484684  8B 5F 20                  MOV EBX,dword ptr [EDI + 0x20]
00484687  83 FB 14                  CMP EBX,0x14
0048468A  74 25                     JZ 0x004846b1
0048468C  81 FB E8 03 00 00         CMP EBX,0x3e8
00484692  74 1D                     JZ 0x004846b1
00484694  81 FB E9 03 00 00         CMP EBX,0x3e9
0048469A  74 15                     JZ 0x004846b1
0048469C  81 FB AE 01 00 00         CMP EBX,0x1ae
004846A2  74 0D                     JZ 0x004846b1
004846A4  5F                        POP EDI
004846A5  5E                        POP ESI
004846A6  66 B8 01 00               MOV AX,0x1
004846AA  5B                        POP EBX
004846AB  8B E5                     MOV ESP,EBP
004846AD  5D                        POP EBP
004846AE  C2 10 00                  RET 0x10
LAB_004846b1:
004846B1  3B FE                     CMP EDI,ESI
004846B3  0F 84 83 1B 00 00         JZ 0x0048623c
004846B9  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
004846BF  83 F8 07                  CMP EAX,0x7
004846C2  0F 84 12 0C 00 00         JZ 0x004852da
004846C8  83 F8 13                  CMP EAX,0x13
004846CB  0F 84 09 0C 00 00         JZ 0x004852da
004846D1  83 F8 08                  CMP EAX,0x8
004846D4  0F 84 00 0C 00 00         JZ 0x004852da
004846DA  83 F8 14                  CMP EAX,0x14
004846DD  0F 84 F7 0B 00 00         JZ 0x004852da
004846E3  83 F8 0C                  CMP EAX,0xc
004846E6  0F 84 EE 0B 00 00         JZ 0x004852da
004846EC  83 F8 18                  CMP EAX,0x18
004846EF  0F 84 E5 0B 00 00         JZ 0x004852da
004846F5  83 F8 19                  CMP EAX,0x19
004846F8  0F 84 DC 0B 00 00         JZ 0x004852da
004846FE  83 F8 1A                  CMP EAX,0x1a
00484701  0F 84 D3 0B 00 00         JZ 0x004852da
00484707  83 F8 1B                  CMP EAX,0x1b
0048470A  0F 84 CA 0B 00 00         JZ 0x004852da
00484710  83 F8 25                  CMP EAX,0x25
00484713  0F 84 C1 0B 00 00         JZ 0x004852da
00484719  83 F8 09                  CMP EAX,0x9
0048471C  0F 85 25 01 00 00         JNZ 0x00484847
00484722  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00484728  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
0048472B  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0048472E  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
00484731  84 D2                     TEST DL,DL
00484733  88 4D 08                  MOV byte ptr [EBP + 0x8],CL
00484736  74 2D                     JZ 0x00484765
00484738  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0048473B  25 FF 00 00 00            AND EAX,0xff
00484740  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00484743  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00484746  25 FF 00 00 00            AND EAX,0xff
0048474B  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00484752  33 C9                     XOR ECX,ECX
00484754  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00484757  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0048475E  0F 95 C1                  SETNZ CL
00484761  8B C1                     MOV EAX,ECX
00484763  EB 7A                     JMP 0x004847df
LAB_00484765:
00484765  3A C1                     CMP AL,CL
00484767  74 6B                     JZ 0x004847d4
00484769  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0048476C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0048476F  25 FF 00 00 00            AND EAX,0xff
00484774  81 E1 FF 00 00 00         AND ECX,0xff
0048477A  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00484781  84 D2                     TEST DL,DL
00484783  75 10                     JNZ 0x00484795
00484785  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0048478C  75 07                     JNZ 0x00484795
0048478E  B8 FE FF FF FF            MOV EAX,0xfffffffe
00484793  EB 41                     JMP 0x004847d6
LAB_00484795:
00484795  80 FA 01                  CMP DL,0x1
00484798  75 0F                     JNZ 0x004847a9
0048479A  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
004847A2  75 05                     JNZ 0x004847a9
004847A4  83 C8 FF                  OR EAX,0xffffffff
004847A7  EB 2D                     JMP 0x004847d6
LAB_004847a9:
004847A9  84 D2                     TEST DL,DL
004847AB  75 11                     JNZ 0x004847be
004847AD  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004847B5  75 07                     JNZ 0x004847be
004847B7  B8 01 00 00 00            MOV EAX,0x1
004847BC  EB 18                     JMP 0x004847d6
LAB_004847be:
004847BE  80 FA 01                  CMP DL,0x1
004847C1  75 11                     JNZ 0x004847d4
004847C3  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004847CB  75 07                     JNZ 0x004847d4
004847CD  B8 02 00 00 00            MOV EAX,0x2
004847D2  EB 02                     JMP 0x004847d6
LAB_004847d4:
004847D4  33 C0                     XOR EAX,EAX
LAB_004847d6:
004847D6  33 D2                     XOR EDX,EDX
004847D8  85 C0                     TEST EAX,EAX
004847DA  0F 9C C2                  SETL DL
004847DD  8B C2                     MOV EAX,EDX
LAB_004847df:
004847DF  83 F8 01                  CMP EAX,0x1
004847E2  74 2A                     JZ 0x0048480e
004847E4  83 FB 14                  CMP EBX,0x14
004847E7  75 0D                     JNZ 0x004847f6
004847E9  5F                        POP EDI
004847EA  5E                        POP ESI
004847EB  66 B8 03 00               MOV AX,0x3
004847EF  5B                        POP EBX
004847F0  8B E5                     MOV ESP,EBP
004847F2  5D                        POP EBP
004847F3  C2 10 00                  RET 0x10
LAB_004847f6:
004847F6  81 FB E8 03 00 00         CMP EBX,0x3e8
004847FC  0F 84 85 13 00 00         JZ 0x00485b87
00484802  81 FB E9 03 00 00         CMP EBX,0x3e9
00484808  0F 84 79 13 00 00         JZ 0x00485b87
LAB_0048480e:
0048480E  81 FB E8 03 00 00         CMP EBX,0x3e8
00484814  0F 85 C0 0A 00 00         JNZ 0x004852da
0048481A  8B 07                     MOV EAX,dword ptr [EDI]
0048481C  8B CF                     MOV ECX,EDI
0048481E  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00484821  83 F8 3B                  CMP EAX,0x3b
00484824  0F 84 51 14 00 00         JZ 0x00485c7b
0048482A  8B 17                     MOV EDX,dword ptr [EDI]
0048482C  8B CF                     MOV ECX,EDI
0048482E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00484831  83 F8 60                  CMP EAX,0x60
00484834  0F 84 41 14 00 00         JZ 0x00485c7b
0048483A  5F                        POP EDI
0048483B  5E                        POP ESI
0048483C  66 B8 01 00               MOV AX,0x1
00484840  5B                        POP EBX
00484841  8B E5                     MOV ESP,EBP
00484843  5D                        POP EBP
00484844  C2 10 00                  RET 0x10
LAB_00484847:
00484847  83 F8 15                  CMP EAX,0x15
0048484A  74 17                     JZ 0x00484863
0048484C  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
00484852  85 C0                     TEST EAX,EAX
00484854  7F 0D                     JG 0x00484863
00484856  5F                        POP EDI
00484857  5E                        POP ESI
00484858  66 B8 01 00               MOV AX,0x1
0048485C  5B                        POP EBX
0048485D  8B E5                     MOV ESP,EBP
0048485F  5D                        POP EBP
00484860  C2 10 00                  RET 0x10
LAB_00484863:
00484863  8B 07                     MOV EAX,dword ptr [EDI]
00484865  8B CF                     MOV ECX,EDI
00484867  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0048486A  83 F8 16                  CMP EAX,0x16
0048486D  74 10                     JZ 0x0048487f
0048486F  8B 17                     MOV EDX,dword ptr [EDI]
00484871  8B CF                     MOV ECX,EDI
00484873  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00484876  83 F8 25                  CMP EAX,0x25
00484879  0F 85 C7 01 00 00         JNZ 0x00484a46
LAB_0048487f:
0048487F  83 BF 32 07 00 00 01      CMP dword ptr [EDI + 0x732],0x1
00484886  0F 85 BA 01 00 00         JNZ 0x00484a46
0048488C  8A 5F 24                  MOV BL,byte ptr [EDI + 0x24]
0048488F  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00484895  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00484898  8A C3                     MOV AL,BL
0048489A  84 D2                     TEST DL,DL
0048489C  88 45 08                  MOV byte ptr [EBP + 0x8],AL
0048489F  88 4D 0F                  MOV byte ptr [EBP + 0xf],CL
004848A2  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
004848A5  74 2D                     JZ 0x004848d4
004848A7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004848AA  33 D2                     XOR EDX,EDX
004848AC  25 FF 00 00 00            AND EAX,0xff
004848B1  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
004848B4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004848B7  25 FF 00 00 00            AND EAX,0xff
004848BC  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
004848C3  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004848C6  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
004848CD  0F 95 C2                  SETNZ DL
004848D0  8B C2                     MOV EAX,EDX
004848D2  EB 7A                     JMP 0x0048494e
LAB_004848d4:
004848D4  3A C1                     CMP AL,CL
004848D6  74 6B                     JZ 0x00484943
004848D8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004848DB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004848DE  25 FF 00 00 00            AND EAX,0xff
004848E3  81 E1 FF 00 00 00         AND ECX,0xff
004848E9  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
004848F0  84 D2                     TEST DL,DL
004848F2  75 10                     JNZ 0x00484904
004848F4  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
004848FB  75 07                     JNZ 0x00484904
004848FD  B8 FE FF FF FF            MOV EAX,0xfffffffe
00484902  EB 41                     JMP 0x00484945
LAB_00484904:
00484904  80 FA 01                  CMP DL,0x1
00484907  75 0F                     JNZ 0x00484918
00484909  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00484911  75 05                     JNZ 0x00484918
00484913  83 C8 FF                  OR EAX,0xffffffff
00484916  EB 2D                     JMP 0x00484945
LAB_00484918:
00484918  84 D2                     TEST DL,DL
0048491A  75 11                     JNZ 0x0048492d
0048491C  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00484924  75 07                     JNZ 0x0048492d
00484926  B8 01 00 00 00            MOV EAX,0x1
0048492B  EB 18                     JMP 0x00484945
LAB_0048492d:
0048492D  80 FA 01                  CMP DL,0x1
00484930  75 11                     JNZ 0x00484943
00484932  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0048493A  75 07                     JNZ 0x00484943
0048493C  B8 02 00 00 00            MOV EAX,0x2
00484941  EB 02                     JMP 0x00484945
LAB_00484943:
00484943  33 C0                     XOR EAX,EAX
LAB_00484945:
00484945  33 C9                     XOR ECX,ECX
00484947  85 C0                     TEST EAX,EAX
00484949  0F 9C C1                  SETL CL
0048494C  8B C1                     MOV EAX,ECX
LAB_0048494e:
0048494E  83 F8 01                  CMP EAX,0x1
00484951  0F 84 D1 00 00 00         JZ 0x00484a28
00484957  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0048495D  8A 45 0F                  MOV AL,byte ptr [EBP + 0xf]
00484960  8A CB                     MOV CL,BL
00484962  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
00484965  84 D2                     TEST DL,DL
00484967  88 4D 08                  MOV byte ptr [EBP + 0x8],CL
0048496A  74 2D                     JZ 0x00484999
0048496C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0048496F  25 FF 00 00 00            AND EAX,0xff
00484974  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00484977  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0048497A  25 FF 00 00 00            AND EAX,0xff
0048497F  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00484986  33 C9                     XOR ECX,ECX
00484988  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0048498B  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00484992  0F 95 C1                  SETNZ CL
00484995  8B C1                     MOV EAX,ECX
00484997  EB 7D                     JMP 0x00484a16
LAB_00484999:
00484999  3A C1                     CMP AL,CL
0048499B  74 6E                     JZ 0x00484a0b
0048499D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004849A0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004849A3  25 FF 00 00 00            AND EAX,0xff
004849A8  81 E1 FF 00 00 00         AND ECX,0xff
004849AE  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
004849B5  84 D2                     TEST DL,DL
004849B7  75 12                     JNZ 0x004849cb
004849B9  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
004849C0  84 DB                     TEST BL,BL
004849C2  75 07                     JNZ 0x004849cb
004849C4  B8 FE FF FF FF            MOV EAX,0xfffffffe
004849C9  EB 42                     JMP 0x00484a0d
LAB_004849cb:
004849CB  80 FA 01                  CMP DL,0x1
004849CE  75 10                     JNZ 0x004849e0
004849D0  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
004849D7  84 DB                     TEST BL,BL
004849D9  75 05                     JNZ 0x004849e0
004849DB  83 C8 FF                  OR EAX,0xffffffff
004849DE  EB 2D                     JMP 0x00484a0d
LAB_004849e0:
004849E0  84 D2                     TEST DL,DL
004849E2  75 11                     JNZ 0x004849f5
004849E4  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004849EC  75 07                     JNZ 0x004849f5
004849EE  B8 01 00 00 00            MOV EAX,0x1
004849F3  EB 18                     JMP 0x00484a0d
LAB_004849f5:
004849F5  80 FA 01                  CMP DL,0x1
004849F8  75 11                     JNZ 0x00484a0b
004849FA  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00484A02  75 07                     JNZ 0x00484a0b
00484A04  B8 02 00 00 00            MOV EAX,0x2
00484A09  EB 02                     JMP 0x00484a0d
LAB_00484a0b:
00484A0B  33 C0                     XOR EAX,EAX
LAB_00484a0d:
00484A0D  33 D2                     XOR EDX,EDX
00484A0F  85 C0                     TEST EAX,EAX
00484A11  0F 9C C2                  SETL DL
00484A14  8B C2                     MOV EAX,EDX
LAB_00484a16:
00484A16  83 F8 01                  CMP EAX,0x1
00484A19  74 0D                     JZ 0x00484a28
00484A1B  5F                        POP EDI
00484A1C  5E                        POP ESI
00484A1D  66 B8 02 00               MOV AX,0x2
00484A21  5B                        POP EBX
00484A22  8B E5                     MOV ESP,EBP
00484A24  5D                        POP EBP
00484A25  C2 10 00                  RET 0x10
LAB_00484a28:
00484A28  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00484A2B  8B CF                     MOV ECX,EDI
00484A2D  50                        PUSH EAX
00484A2E  E8 B4 10 F8 FF            CALL 0x00405ae7
00484A33  48                        DEC EAX
00484A34  5F                        POP EDI
00484A35  F7 D8                     NEG EAX
00484A37  1B C0                     SBB EAX,EAX
00484A39  5E                        POP ESI
00484A3A  24 FA                     AND AL,0xfa
00484A3C  5B                        POP EBX
00484A3D  83 C0 07                  ADD EAX,0x7
00484A40  8B E5                     MOV ESP,EBP
00484A42  5D                        POP EBP
00484A43  C2 10 00                  RET 0x10
LAB_00484a46:
00484A46  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00484A4C  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00484A4F  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00484A52  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
00484A55  84 D2                     TEST DL,DL
00484A57  88 4D 08                  MOV byte ptr [EBP + 0x8],CL
00484A5A  74 40                     JZ 0x00484a9c
00484A5C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00484A5F  33 D2                     XOR EDX,EDX
00484A61  25 FF 00 00 00            AND EAX,0xff
00484A66  5F                        POP EDI
00484A67  5E                        POP ESI
00484A68  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00484A6B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00484A6E  25 FF 00 00 00            AND EAX,0xff
00484A73  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00484A7A  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00484A7D  8A 9C C0 EA 87 80 00      MOV BL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00484A84  3A CB                     CMP CL,BL
00484A86  5B                        POP EBX
00484A87  0F 95 C2                  SETNZ DL
00484A8A  8B C2                     MOV EAX,EDX
00484A8C  F7 D8                     NEG EAX
00484A8E  1B C0                     SBB EAX,EAX
00484A90  83 E0 05                  AND EAX,0x5
00484A93  83 C0 02                  ADD EAX,0x2
00484A96  8B E5                     MOV ESP,EBP
00484A98  5D                        POP EBP
00484A99  C2 10 00                  RET 0x10
LAB_00484a9c:
00484A9C  3A C1                     CMP AL,CL
00484A9E  74 6E                     JZ 0x00484b0e
00484AA0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00484AA3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00484AA6  25 FF 00 00 00            AND EAX,0xff
00484AAB  81 E1 FF 00 00 00         AND ECX,0xff
00484AB1  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00484AB8  84 D2                     TEST DL,DL
00484ABA  75 12                     JNZ 0x00484ace
00484ABC  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00484AC3  84 DB                     TEST BL,BL
00484AC5  75 07                     JNZ 0x00484ace
00484AC7  B8 FE FF FF FF            MOV EAX,0xfffffffe
00484ACC  EB 42                     JMP 0x00484b10
LAB_00484ace:
00484ACE  80 FA 01                  CMP DL,0x1
00484AD1  75 10                     JNZ 0x00484ae3
00484AD3  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00484ADA  84 DB                     TEST BL,BL
00484ADC  75 05                     JNZ 0x00484ae3
00484ADE  83 C8 FF                  OR EAX,0xffffffff
00484AE1  EB 2D                     JMP 0x00484b10
LAB_00484ae3:
00484AE3  84 D2                     TEST DL,DL
00484AE5  75 11                     JNZ 0x00484af8
00484AE7  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00484AEF  75 07                     JNZ 0x00484af8
00484AF1  B8 01 00 00 00            MOV EAX,0x1
00484AF6  EB 18                     JMP 0x00484b10
LAB_00484af8:
00484AF8  80 FA 01                  CMP DL,0x1
00484AFB  75 11                     JNZ 0x00484b0e
00484AFD  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00484B05  75 07                     JNZ 0x00484b0e
00484B07  B8 02 00 00 00            MOV EAX,0x2
00484B0C  EB 02                     JMP 0x00484b10
LAB_00484b0e:
00484B0E  33 C0                     XOR EAX,EAX
FUN_004845e0::cf_common_exit_00484B10:
00484B10  33 C9                     XOR ECX,ECX
00484B12  5F                        POP EDI
00484B13  85 C0                     TEST EAX,EAX
00484B15  0F 9C C1                  SETL CL
00484B18  8B C1                     MOV EAX,ECX
00484B1A  5E                        POP ESI
00484B1B  F7 D8                     NEG EAX
00484B1D  1B C0                     SBB EAX,EAX
00484B1F  5B                        POP EBX
00484B20  83 E0 05                  AND EAX,0x5
00484B23  83 C0 02                  ADD EAX,0x2
00484B26  8B E5                     MOV ESP,EBP
00484B28  5D                        POP EBP
00484B29  C2 10 00                  RET 0x10
switchD_0048462b::caseD_11:
00484B2C  8B CE                     MOV ECX,ESI
00484B2E  E8 38 D7 F7 FF            CALL 0x0040226b
00484B33  85 C0                     TEST EAX,EAX
00484B35  0F 85 01 17 00 00         JNZ 0x0048623c
00484B3B  85 FF                     TEST EDI,EDI
00484B3D  75 0D                     JNZ 0x00484b4c
00484B3F  5F                        POP EDI
00484B40  5E                        POP ESI
00484B41  66 B8 01 00               MOV AX,0x1
00484B45  5B                        POP EBX
00484B46  8B E5                     MOV ESP,EBP
00484B48  5D                        POP EBP
00484B49  C2 10 00                  RET 0x10
LAB_00484b4c:
00484B4C  3B FE                     CMP EDI,ESI
00484B4E  0F 84 E8 16 00 00         JZ 0x0048623c
00484B54  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
00484B5A  83 F8 08                  CMP EAX,0x8
00484B5D  74 17                     JZ 0x00484b76
00484B5F  83 F8 14                  CMP EAX,0x14
00484B62  74 12                     JZ 0x00484b76
00484B64  83 F8 1A                  CMP EAX,0x1a
00484B67  74 0D                     JZ 0x00484b76
00484B69  5F                        POP EDI
00484B6A  5E                        POP ESI
00484B6B  66 B8 01 00               MOV AX,0x1
00484B6F  5B                        POP EBX
00484B70  8B E5                     MOV ESP,EBP
00484B72  5D                        POP EBP
00484B73  C2 10 00                  RET 0x10
LAB_00484b76:
00484B76  8B 17                     MOV EDX,dword ptr [EDI]
00484B78  8B CF                     MOV ECX,EDI
00484B7A  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00484B7D  83 F8 38                  CMP EAX,0x38
00484B80  74 31                     JZ 0x00484bb3
00484B82  8B 07                     MOV EAX,dword ptr [EDI]
00484B84  8B CF                     MOV ECX,EDI
00484B86  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00484B89  83 F8 39                  CMP EAX,0x39
00484B8C  74 25                     JZ 0x00484bb3
00484B8E  8B 17                     MOV EDX,dword ptr [EDI]
00484B90  8B CF                     MOV ECX,EDI
00484B92  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00484B95  83 F8 4F                  CMP EAX,0x4f
00484B98  74 19                     JZ 0x00484bb3
00484B9A  8B 07                     MOV EAX,dword ptr [EDI]
00484B9C  8B CF                     MOV ECX,EDI
00484B9E  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00484BA1  83 F8 5E                  CMP EAX,0x5e
00484BA4  74 0D                     JZ 0x00484bb3
00484BA6  5F                        POP EDI
00484BA7  5E                        POP ESI
00484BA8  66 B8 01 00               MOV AX,0x1
00484BAC  5B                        POP EBX
00484BAD  8B E5                     MOV ESP,EBP
00484BAF  5D                        POP EBP
00484BB0  C2 10 00                  RET 0x10
LAB_00484bb3:
00484BB3  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00484BB6  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00484BB9  3B C8                     CMP ECX,EAX
00484BBB  74 0D                     JZ 0x00484bca
00484BBD  5F                        POP EDI
00484BBE  5E                        POP ESI
00484BBF  66 B8 01 00               MOV AX,0x1
00484BC3  5B                        POP EBX
00484BC4  8B E5                     MOV ESP,EBP
00484BC6  5D                        POP EBP
00484BC7  C2 10 00                  RET 0x10
LAB_00484bca:
00484BCA  8B 17                     MOV EDX,dword ptr [EDI]
00484BCC  8D 45 F4                  LEA EAX,[EBP + -0xc]
00484BCF  50                        PUSH EAX
00484BD0  8B CF                     MOV ECX,EDI
00484BD2  FF 92 88 00 00 00         CALL dword ptr [EDX + 0x88]
00484BD8  33 C9                     XOR ECX,ECX
00484BDA  5F                        POP EDI
00484BDB  85 C0                     TEST EAX,EAX
00484BDD  0F 9F C1                  SETG CL
00484BE0  49                        DEC ECX
00484BE1  5E                        POP ESI
00484BE2  83 E1 EF                  AND ECX,0xffffffef
00484BE5  5B                        POP EBX
00484BE6  83 C1 12                  ADD ECX,0x12
00484BE9  66 8B C1                  MOV AX,CX
00484BEC  8B E5                     MOV ESP,EBP
00484BEE  5D                        POP EBP
00484BEF  C2 10 00                  RET 0x10
switchD_0048462b::caseD_12:
00484BF2  8B CE                     MOV ECX,ESI
00484BF4  E8 72 D6 F7 FF            CALL 0x0040226b
00484BF9  85 C0                     TEST EAX,EAX
00484BFB  0F 85 3B 16 00 00         JNZ 0x0048623c
00484C01  85 FF                     TEST EDI,EDI
00484C03  75 0D                     JNZ 0x00484c12
00484C05  5F                        POP EDI
00484C06  5E                        POP ESI
00484C07  66 B8 01 00               MOV AX,0x1
00484C0B  5B                        POP EBX
00484C0C  8B E5                     MOV ESP,EBP
00484C0E  5D                        POP EBP
00484C0F  C2 10 00                  RET 0x10
LAB_00484c12:
00484C12  3B FE                     CMP EDI,ESI
00484C14  0F 84 22 16 00 00         JZ 0x0048623c
00484C1A  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
00484C20  83 F8 08                  CMP EAX,0x8
00484C23  74 0E                     JZ 0x00484c33
00484C25  83 F8 14                  CMP EAX,0x14
00484C28  74 09                     JZ 0x00484c33
00484C2A  83 F8 1A                  CMP EAX,0x1a
00484C2D  0F 85 A7 06 00 00         JNZ 0x004852da
LAB_00484c33:
00484C33  8B 17                     MOV EDX,dword ptr [EDI]
00484C35  8B CF                     MOV ECX,EDI
00484C37  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00484C3A  83 F8 3B                  CMP EAX,0x3b
00484C3D  74 10                     JZ 0x00484c4f
00484C3F  8B 07                     MOV EAX,dword ptr [EDI]
00484C41  8B CF                     MOV ECX,EDI
00484C43  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00484C46  83 F8 60                  CMP EAX,0x60
00484C49  0F 85 8B 06 00 00         JNZ 0x004852da
LAB_00484c4f:
00484C4F  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00484C52  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00484C55  3B C8                     CMP ECX,EAX
00484C57  0F 85 7D 06 00 00         JNZ 0x004852da
00484C5D  8B 96 DA 07 00 00         MOV EDX,dword ptr [ESI + 0x7da]
00484C63  8B BE D6 07 00 00         MOV EDI,dword ptr [ESI + 0x7d6]
00484C69  8B 8E D2 07 00 00         MOV ECX,dword ptr [ESI + 0x7d2]
00484C6F  03 D7                     ADD EDX,EDI
00484C71  03 D1                     ADD EDX,ECX
00484C73  85 D2                     TEST EDX,EDX
00484C75  0F 8E 5F 06 00 00         JLE 0x004852da
00484C7B  5F                        POP EDI
00484C7C  5E                        POP ESI
00484C7D  66 B8 13 00               MOV AX,0x13
00484C81  5B                        POP EBX
00484C82  8B E5                     MOV ESP,EBP
00484C84  5D                        POP EBP
00484C85  C2 10 00                  RET 0x10
switchD_0048462b::caseD_e:
00484C88  8B CE                     MOV ECX,ESI
00484C8A  E8 DC D5 F7 FF            CALL 0x0040226b
00484C8F  85 C0                     TEST EAX,EAX
00484C91  0F 85 A5 15 00 00         JNZ 0x0048623c
00484C97  A1 AC B2 7F 00            MOV EAX,[0x007fb2ac]
00484C9C  85 C0                     TEST EAX,EAX
00484C9E  74 14                     JZ 0x00484cb4
00484CA0  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
00484CA3  85 C9                     TEST ECX,ECX
00484CA5  74 0D                     JZ 0x00484cb4
00484CA7  5F                        POP EDI
00484CA8  5E                        POP ESI
00484CA9  66 B8 14 00               MOV AX,0x14
00484CAD  5B                        POP EBX
00484CAE  8B E5                     MOV ESP,EBP
00484CB0  5D                        POP EBP
00484CB1  C2 10 00                  RET 0x10
LAB_00484cb4:
00484CB4  5F                        POP EDI
00484CB5  5E                        POP ESI
00484CB6  66 B8 15 00               MOV AX,0x15
00484CBA  5B                        POP EBX
00484CBB  8B E5                     MOV ESP,EBP
00484CBD  5D                        POP EBP
00484CBE  C2 10 00                  RET 0x10
switchD_0048462b::caseD_4:
00484CC1  8B CE                     MOV ECX,ESI
00484CC3  E8 A3 D5 F7 FF            CALL 0x0040226b
00484CC8  85 C0                     TEST EAX,EAX
00484CCA  0F 85 6C 15 00 00         JNZ 0x0048623c
00484CD0  85 FF                     TEST EDI,EDI
00484CD2  75 0D                     JNZ 0x00484ce1
00484CD4  5F                        POP EDI
00484CD5  5E                        POP ESI
00484CD6  66 B8 01 00               MOV AX,0x1
00484CDA  5B                        POP EBX
00484CDB  8B E5                     MOV ESP,EBP
00484CDD  5D                        POP EBP
00484CDE  C2 10 00                  RET 0x10
LAB_00484ce1:
00484CE1  3B FE                     CMP EDI,ESI
00484CE3  0F 84 53 15 00 00         JZ 0x0048623c
00484CE9  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
00484CEF  83 F8 09                  CMP EAX,0x9
00484CF2  0F 84 E2 05 00 00         JZ 0x004852da
00484CF8  83 F8 15                  CMP EAX,0x15
00484CFB  0F 84 D9 05 00 00         JZ 0x004852da
00484D01  8B 86 16 07 00 00         MOV EAX,dword ptr [ESI + 0x716]
00484D07  8B 8E 12 07 00 00         MOV ECX,dword ptr [ESI + 0x712]
00484D0D  3B C1                     CMP EAX,ECX
00484D0F  0F 8D C5 05 00 00         JGE 0x004852da
00484D15  8B 17                     MOV EDX,dword ptr [EDI]
00484D17  8B CF                     MOV ECX,EDI
00484D19  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00484D1C  83 F8 33                  CMP EAX,0x33
00484D1F  0F 85 B5 05 00 00         JNZ 0x004852da
00484D25  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00484D28  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
00484D2B  3B C1                     CMP EAX,ECX
00484D2D  0F 85 A7 05 00 00         JNZ 0x004852da
00484D33  5F                        POP EDI
00484D34  5E                        POP ESI
00484D35  66 B8 18 00               MOV AX,0x18
00484D39  5B                        POP EBX
00484D3A  8B E5                     MOV ESP,EBP
00484D3C  5D                        POP EBP
00484D3D  C2 10 00                  RET 0x10
switchD_0048462b::caseD_5:
00484D40  8B CE                     MOV ECX,ESI
00484D42  E8 24 D5 F7 FF            CALL 0x0040226b
00484D47  85 C0                     TEST EAX,EAX
00484D49  0F 85 ED 14 00 00         JNZ 0x0048623c
00484D4F  85 FF                     TEST EDI,EDI
00484D51  75 0D                     JNZ 0x00484d60
00484D53  5F                        POP EDI
00484D54  5E                        POP ESI
00484D55  66 B8 01 00               MOV AX,0x1
00484D59  5B                        POP EBX
00484D5A  8B E5                     MOV ESP,EBP
00484D5C  5D                        POP EBP
00484D5D  C2 10 00                  RET 0x10
LAB_00484d60:
00484D60  3B FE                     CMP EDI,ESI
00484D62  0F 84 D4 14 00 00         JZ 0x0048623c
00484D68  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00484D6B  83 F8 14                  CMP EAX,0x14
00484D6E  74 0F                     JZ 0x00484d7f
00484D70  3B C3                     CMP EAX,EBX
00484D72  74 0B                     JZ 0x00484d7f
00484D74  3D E9 03 00 00            CMP EAX,0x3e9
00484D79  0F 85 5B 05 00 00         JNZ 0x004852da
LAB_00484d7f:
00484D7F  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00484D82  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00484D85  3B C8                     CMP ECX,EAX
00484D87  0F 85 4D 05 00 00         JNZ 0x004852da
00484D8D  8B CE                     MOV ECX,ESI
00484D8F  E8 C4 00 F8 FF            CALL 0x00404e58
00484D94  83 F8 01                  CMP EAX,0x1
00484D97  0F 85 3D 05 00 00         JNZ 0x004852da
00484D9D  5F                        POP EDI
00484D9E  5E                        POP ESI
00484D9F  66 B8 0D 00               MOV AX,0xd
00484DA3  5B                        POP EBX
00484DA4  8B E5                     MOV ESP,EBP
00484DA6  5D                        POP EBP
00484DA7  C2 10 00                  RET 0x10
switchD_0048462b::caseD_13:
00484DAA  8B CE                     MOV ECX,ESI
00484DAC  E8 BA D4 F7 FF            CALL 0x0040226b
00484DB1  85 C0                     TEST EAX,EAX
00484DB3  0F 85 83 14 00 00         JNZ 0x0048623c
00484DB9  8B 86 CA 07 00 00         MOV EAX,dword ptr [ESI + 0x7ca]
00484DBF  85 C0                     TEST EAX,EAX
00484DC1  0F 85 75 14 00 00         JNZ 0x0048623c
00484DC7  85 FF                     TEST EDI,EDI
00484DC9  75 0D                     JNZ 0x00484dd8
00484DCB  5F                        POP EDI
00484DCC  5E                        POP ESI
00484DCD  66 B8 01 00               MOV AX,0x1
00484DD1  5B                        POP EBX
00484DD2  8B E5                     MOV ESP,EBP
00484DD4  5D                        POP EBP
00484DD5  C2 10 00                  RET 0x10
LAB_00484dd8:
00484DD8  3B FE                     CMP EDI,ESI
00484DDA  0F 84 5C 14 00 00         JZ 0x0048623c
00484DE0  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
00484DE4  0F 85 D3 00 00 00         JNZ 0x00484ebd
00484DEA  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00484DF0  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00484DF3  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00484DF6  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
00484DF9  84 D2                     TEST DL,DL
00484DFB  88 4D 08                  MOV byte ptr [EBP + 0x8],CL
00484DFE  74 2D                     JZ 0x00484e2d
00484E00  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00484E03  25 FF 00 00 00            AND EAX,0xff
00484E08  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00484E0B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00484E0E  25 FF 00 00 00            AND EAX,0xff
00484E13  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00484E1A  33 C9                     XOR ECX,ECX
00484E1C  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00484E1F  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00484E26  0F 95 C1                  SETNZ CL
00484E29  8B C1                     MOV EAX,ECX
00484E2B  EB 7D                     JMP 0x00484eaa
LAB_00484e2d:
00484E2D  3A C1                     CMP AL,CL
00484E2F  74 6E                     JZ 0x00484e9f
00484E31  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00484E34  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00484E37  25 FF 00 00 00            AND EAX,0xff
00484E3C  81 E1 FF 00 00 00         AND ECX,0xff
00484E42  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00484E49  84 D2                     TEST DL,DL
00484E4B  75 12                     JNZ 0x00484e5f
00484E4D  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00484E54  84 DB                     TEST BL,BL
00484E56  75 07                     JNZ 0x00484e5f
00484E58  B8 FE FF FF FF            MOV EAX,0xfffffffe
00484E5D  EB 42                     JMP 0x00484ea1
LAB_00484e5f:
00484E5F  80 FA 01                  CMP DL,0x1
00484E62  75 10                     JNZ 0x00484e74
00484E64  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00484E6B  84 DB                     TEST BL,BL
00484E6D  75 05                     JNZ 0x00484e74
00484E6F  83 C8 FF                  OR EAX,0xffffffff
00484E72  EB 2D                     JMP 0x00484ea1
LAB_00484e74:
00484E74  84 D2                     TEST DL,DL
00484E76  75 11                     JNZ 0x00484e89
00484E78  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00484E80  75 07                     JNZ 0x00484e89
00484E82  B8 01 00 00 00            MOV EAX,0x1
00484E87  EB 18                     JMP 0x00484ea1
LAB_00484e89:
00484E89  80 FA 01                  CMP DL,0x1
00484E8C  75 11                     JNZ 0x00484e9f
00484E8E  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00484E96  75 07                     JNZ 0x00484e9f
00484E98  B8 02 00 00 00            MOV EAX,0x2
00484E9D  EB 02                     JMP 0x00484ea1
LAB_00484e9f:
00484E9F  33 C0                     XOR EAX,EAX
LAB_00484ea1:
00484EA1  33 D2                     XOR EDX,EDX
00484EA3  85 C0                     TEST EAX,EAX
00484EA5  0F 9C C2                  SETL DL
00484EA8  8B C2                     MOV EAX,EDX
LAB_00484eaa:
00484EAA  85 C0                     TEST EAX,EAX
00484EAC  74 24                     JZ 0x00484ed2
00484EAE  8B 07                     MOV EAX,dword ptr [EDI]
00484EB0  8B CF                     MOV ECX,EDI
00484EB2  FF 90 20 01 00 00         CALL dword ptr [EAX + 0x120]
00484EB8  83 F8 01                  CMP EAX,0x1
00484EBB  74 15                     JZ 0x00484ed2
LAB_00484ebd:
00484EBD  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00484EC0  3D 72 01 00 00            CMP EAX,0x172
00484EC5  74 0B                     JZ 0x00484ed2
00484EC7  3D A4 01 00 00            CMP EAX,0x1a4
00484ECC  0F 85 08 04 00 00         JNZ 0x004852da
LAB_00484ed2:
00484ED2  8B 17                     MOV EDX,dword ptr [EDI]
00484ED4  8B CF                     MOV ECX,EDI
00484ED6  FF 92 BC 00 00 00         CALL dword ptr [EDX + 0xbc]
00484EDC  83 F8 01                  CMP EAX,0x1
00484EDF  0F 85 F5 03 00 00         JNZ 0x004852da
00484EE5  5F                        POP EDI
00484EE6  5E                        POP ESI
00484EE7  66 B8 1A 00               MOV AX,0x1a
00484EEB  5B                        POP EBX
00484EEC  8B E5                     MOV ESP,EBP
00484EEE  5D                        POP EBP
00484EEF  C2 10 00                  RET 0x10
switchD_0048462b::caseD_d:
00484EF2  8B CE                     MOV ECX,ESI
00484EF4  E8 72 D3 F7 FF            CALL 0x0040226b
00484EF9  85 C0                     TEST EAX,EAX
00484EFB  0F 85 3B 13 00 00         JNZ 0x0048623c
00484F01  8B 86 CA 07 00 00         MOV EAX,dword ptr [ESI + 0x7ca]
00484F07  85 C0                     TEST EAX,EAX
00484F09  0F 85 2D 13 00 00         JNZ 0x0048623c
00484F0F  85 FF                     TEST EDI,EDI
00484F11  75 0D                     JNZ 0x00484f20
00484F13  5F                        POP EDI
00484F14  5E                        POP ESI
00484F15  66 B8 01 00               MOV AX,0x1
00484F19  5B                        POP EBX
00484F1A  8B E5                     MOV ESP,EBP
00484F1C  5D                        POP EBP
00484F1D  C2 10 00                  RET 0x10
LAB_00484f20:
00484F20  3B FE                     CMP EDI,ESI
00484F22  0F 84 14 13 00 00         JZ 0x0048623c
00484F28  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
00484F2C  0F 85 A8 03 00 00         JNZ 0x004852da
00484F32  8B 07                     MOV EAX,dword ptr [EDI]
00484F34  8B CF                     MOV ECX,EDI
00484F36  FF 50 7C                  CALL dword ptr [EAX + 0x7c]
00484F39  83 F8 64                  CMP EAX,0x64
00484F3C  0F 8D 98 03 00 00         JGE 0x004852da
00484F42  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00484F48  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00484F4B  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00484F4E  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
00484F51  84 D2                     TEST DL,DL
00484F53  88 4D 08                  MOV byte ptr [EBP + 0x8],CL
00484F56  74 2D                     JZ 0x00484f85
00484F58  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00484F5B  33 D2                     XOR EDX,EDX
00484F5D  25 FF 00 00 00            AND EAX,0xff
00484F62  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00484F65  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00484F68  25 FF 00 00 00            AND EAX,0xff
00484F6D  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00484F74  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00484F77  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00484F7E  0F 95 C2                  SETNZ DL
00484F81  8B C2                     MOV EAX,EDX
00484F83  EB 7D                     JMP 0x00485002
LAB_00484f85:
00484F85  3A C1                     CMP AL,CL
00484F87  74 6E                     JZ 0x00484ff7
00484F89  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00484F8C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00484F8F  25 FF 00 00 00            AND EAX,0xff
00484F94  81 E1 FF 00 00 00         AND ECX,0xff
00484F9A  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00484FA1  84 D2                     TEST DL,DL
00484FA3  75 12                     JNZ 0x00484fb7
00484FA5  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00484FAC  84 DB                     TEST BL,BL
00484FAE  75 07                     JNZ 0x00484fb7
00484FB0  B8 FE FF FF FF            MOV EAX,0xfffffffe
00484FB5  EB 42                     JMP 0x00484ff9
LAB_00484fb7:
00484FB7  80 FA 01                  CMP DL,0x1
00484FBA  75 10                     JNZ 0x00484fcc
00484FBC  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00484FC3  84 DB                     TEST BL,BL
00484FC5  75 05                     JNZ 0x00484fcc
00484FC7  83 C8 FF                  OR EAX,0xffffffff
00484FCA  EB 2D                     JMP 0x00484ff9
LAB_00484fcc:
00484FCC  84 D2                     TEST DL,DL
00484FCE  75 11                     JNZ 0x00484fe1
00484FD0  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00484FD8  75 07                     JNZ 0x00484fe1
00484FDA  B8 01 00 00 00            MOV EAX,0x1
00484FDF  EB 18                     JMP 0x00484ff9
LAB_00484fe1:
00484FE1  80 FA 01                  CMP DL,0x1
00484FE4  75 11                     JNZ 0x00484ff7
00484FE6  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00484FEE  75 07                     JNZ 0x00484ff7
00484FF0  B8 02 00 00 00            MOV EAX,0x2
00484FF5  EB 02                     JMP 0x00484ff9
LAB_00484ff7:
00484FF7  33 C0                     XOR EAX,EAX
LAB_00484ff9:
00484FF9  33 C9                     XOR ECX,ECX
00484FFB  85 C0                     TEST EAX,EAX
00484FFD  0F 9C C1                  SETL CL
00485000  8B C1                     MOV EAX,ECX
LAB_00485002:
00485002  85 C0                     TEST EAX,EAX
00485004  0F 85 D0 02 00 00         JNZ 0x004852da
0048500A  8B 17                     MOV EDX,dword ptr [EDI]
0048500C  8B CF                     MOV ECX,EDI
0048500E  FF 92 BC 00 00 00         CALL dword ptr [EDX + 0xbc]
00485014  83 F8 01                  CMP EAX,0x1
00485017  0F 85 BD 02 00 00         JNZ 0x004852da
0048501D  5F                        POP EDI
0048501E  5E                        POP ESI
0048501F  66 B8 17 00               MOV AX,0x17
00485023  5B                        POP EBX
00485024  8B E5                     MOV ESP,EBP
00485026  5D                        POP EBP
00485027  C2 10 00                  RET 0x10
switchD_0048462b::caseD_8:
0048502A  8B CE                     MOV ECX,ESI
0048502C  E8 3A D2 F7 FF            CALL 0x0040226b
00485031  F7 D8                     NEG EAX
00485033  1B C0                     SBB EAX,EAX
00485035  5F                        POP EDI
00485036  24 EF                     AND AL,0xef
00485038  5E                        POP ESI
00485039  83 C0 11                  ADD EAX,0x11
0048503C  5B                        POP EBX
0048503D  8B E5                     MOV ESP,EBP
0048503F  5D                        POP EBP
00485040  C2 10 00                  RET 0x10
switchD_0048462b::caseD_9:
00485043  8B CE                     MOV ECX,ESI
00485045  E8 21 D2 F7 FF            CALL 0x0040226b
0048504A  F7 D8                     NEG EAX
0048504C  1B C0                     SBB EAX,EAX
0048504E  5F                        POP EDI
0048504F  24 F8                     AND AL,0xf8
00485051  5E                        POP ESI
00485052  83 C0 08                  ADD EAX,0x8
00485055  5B                        POP EBX
00485056  8B E5                     MOV ESP,EBP
00485058  5D                        POP EBP
00485059  C2 10 00                  RET 0x10
switchD_0048462b::caseD_7:
0048505C  8B CE                     MOV ECX,ESI
0048505E  E8 08 D2 F7 FF            CALL 0x0040226b
00485063  85 C0                     TEST EAX,EAX
00485065  0F 85 D1 11 00 00         JNZ 0x0048623c
0048506B  85 FF                     TEST EDI,EDI
0048506D  75 0D                     JNZ 0x0048507c
0048506F  5F                        POP EDI
00485070  5E                        POP ESI
00485071  66 B8 01 00               MOV AX,0x1
00485075  5B                        POP EBX
00485076  8B E5                     MOV ESP,EBP
00485078  5D                        POP EBP
00485079  C2 10 00                  RET 0x10
LAB_0048507c:
0048507C  3B FE                     CMP EDI,ESI
0048507E  0F 84 B8 11 00 00         JZ 0x0048623c
00485084  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0048508A  83 F8 06                  CMP EAX,0x6
0048508D  74 0E                     JZ 0x0048509d
0048508F  83 F8 12                  CMP EAX,0x12
00485092  74 09                     JZ 0x0048509d
00485094  83 F8 22                  CMP EAX,0x22
00485097  0F 85 3D 02 00 00         JNZ 0x004852da
LAB_0048509d:
0048509D  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004850A0  8B 07                     MOV EAX,dword ptr [EDI]
004850A2  51                        PUSH ECX
004850A3  8B CF                     MOV ECX,EDI
004850A5  FF 90 08 01 00 00         CALL dword ptr [EAX + 0x108]
004850AB  83 F8 01                  CMP EAX,0x1
004850AE  0F 85 26 02 00 00         JNZ 0x004852da
004850B4  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004850B7  8B CF                     MOV ECX,EDI
004850B9  52                        PUSH EDX
004850BA  E8 2D EC F7 FF            CALL 0x00403cec
004850BF  48                        DEC EAX
004850C0  74 24                     JZ 0x004850e6
004850C2  48                        DEC EAX
004850C3  74 14                     JZ 0x004850d9
004850C5  48                        DEC EAX
004850C6  0F 85 0E 02 00 00         JNZ 0x004852da
004850CC  5F                        POP EDI
004850CD  5E                        POP ESI
004850CE  66 B8 0B 00               MOV AX,0xb
004850D2  5B                        POP EBX
004850D3  8B E5                     MOV ESP,EBP
004850D5  5D                        POP EBP
004850D6  C2 10 00                  RET 0x10
LAB_004850d9:
004850D9  5F                        POP EDI
004850DA  5E                        POP ESI
004850DB  66 B8 0A 00               MOV AX,0xa
004850DF  5B                        POP EBX
004850E0  8B E5                     MOV ESP,EBP
004850E2  5D                        POP EBP
004850E3  C2 10 00                  RET 0x10
LAB_004850e6:
004850E6  5F                        POP EDI
004850E7  5E                        POP ESI
004850E8  66 B8 09 00               MOV AX,0x9
004850EC  5B                        POP EBX
004850ED  8B E5                     MOV ESP,EBP
004850EF  5D                        POP EBP
004850F0  C2 10 00                  RET 0x10
switchD_0048462b::caseD_48:
004850F3  8B CE                     MOV ECX,ESI
004850F5  E8 71 D1 F7 FF            CALL 0x0040226b
004850FA  85 C0                     TEST EAX,EAX
004850FC  0F 85 3A 11 00 00         JNZ 0x0048623c
00485102  85 FF                     TEST EDI,EDI
00485104  75 0D                     JNZ 0x00485113
00485106  5F                        POP EDI
00485107  5E                        POP ESI
00485108  66 B8 01 00               MOV AX,0x1
0048510C  5B                        POP EBX
0048510D  8B E5                     MOV ESP,EBP
0048510F  5D                        POP EBP
00485110  C2 10 00                  RET 0x10
LAB_00485113:
00485113  3B FE                     CMP EDI,ESI
00485115  0F 84 21 11 00 00         JZ 0x0048623c
0048511B  8B 07                     MOV EAX,dword ptr [EDI]
0048511D  8B CF                     MOV ECX,EDI
0048511F  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00485122  83 F8 62                  CMP EAX,0x62
00485125  0F 85 AF 01 00 00         JNZ 0x004852da
0048512B  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0048512E  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00485131  3B C8                     CMP ECX,EAX
00485133  0F 85 A1 01 00 00         JNZ 0x004852da
00485139  8B CE                     MOV ECX,ESI
0048513B  E8 54 E4 F7 FF            CALL 0x00403594
00485140  85 C0                     TEST EAX,EAX
00485142  0F 8E 92 01 00 00         JLE 0x004852da
00485148  8B 96 F7 06 00 00         MOV EDX,dword ptr [ESI + 0x6f7]
0048514E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00485154  52                        PUSH EDX
00485155  E8 00 CE F7 FF            CALL 0x00401f5a
0048515A  83 F8 03                  CMP EAX,0x3
0048515D  0F 85 77 01 00 00         JNZ 0x004852da
00485163  5F                        POP EDI
00485164  5E                        POP ESI
00485165  66 B8 1B 00               MOV AX,0x1b
00485169  5B                        POP EBX
0048516A  8B E5                     MOV ESP,EBP
0048516C  5D                        POP EBP
0048516D  C2 10 00                  RET 0x10
switchD_0048462b::caseD_4d:
00485170  8B CE                     MOV ECX,ESI
00485172  E8 F4 D0 F7 FF            CALL 0x0040226b
00485177  85 C0                     TEST EAX,EAX
00485179  0F 85 BD 10 00 00         JNZ 0x0048623c
0048517F  85 FF                     TEST EDI,EDI
00485181  75 0D                     JNZ 0x00485190
00485183  5F                        POP EDI
00485184  5E                        POP ESI
00485185  66 B8 01 00               MOV AX,0x1
00485189  5B                        POP EBX
0048518A  8B E5                     MOV ESP,EBP
0048518C  5D                        POP EBP
0048518D  C2 10 00                  RET 0x10
LAB_00485190:
00485190  3B FE                     CMP EDI,ESI
00485192  0F 84 A4 10 00 00         JZ 0x0048623c
00485198  8B 07                     MOV EAX,dword ptr [EDI]
0048519A  8B CF                     MOV ECX,EDI
0048519C  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0048519F  83 F8 37                  CMP EAX,0x37
004851A2  74 10                     JZ 0x004851b4
004851A4  8B 17                     MOV EDX,dword ptr [EDI]
004851A6  8B CF                     MOV ECX,EDI
004851A8  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004851AB  83 F8 6C                  CMP EAX,0x6c
004851AE  0F 85 26 01 00 00         JNZ 0x004852da
LAB_004851b4:
004851B4  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004851B7  33 C0                     XOR EAX,EAX
004851B9  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
004851BD  50                        PUSH EAX
004851BE  51                        PUSH ECX
004851BF  8B CF                     MOV ECX,EDI
004851C1  E8 E5 CC F7 FF            CALL 0x00401eab
004851C6  83 F8 01                  CMP EAX,0x1
004851C9  0F 85 0B 01 00 00         JNZ 0x004852da
004851CF  5F                        POP EDI
004851D0  5E                        POP ESI
004851D1  66 B8 1D 00               MOV AX,0x1d
004851D5  5B                        POP EBX
004851D6  8B E5                     MOV ESP,EBP
004851D8  5D                        POP EBP
004851D9  C2 10 00                  RET 0x10
switchD_0048462b::caseD_18:
004851DC  8B CE                     MOV ECX,ESI
004851DE  E8 88 D0 F7 FF            CALL 0x0040226b
004851E3  85 C0                     TEST EAX,EAX
004851E5  0F 85 51 10 00 00         JNZ 0x0048623c
004851EB  8B C7                     MOV EAX,EDI
004851ED  5F                        POP EDI
004851EE  2B C6                     SUB EAX,ESI
004851F0  5E                        POP ESI
004851F1  F7 D8                     NEG EAX
004851F3  1B C0                     SBB EAX,EAX
004851F5  5B                        POP EBX
004851F6  83 E0 1D                  AND EAX,0x1d
004851F9  8B E5                     MOV ESP,EBP
004851FB  5D                        POP EBP
004851FC  C2 10 00                  RET 0x10
switchD_0048462b::caseD_10:
004851FF  8B CE                     MOV ECX,ESI
00485201  E8 65 D0 F7 FF            CALL 0x0040226b
00485206  85 C0                     TEST EAX,EAX
00485208  0F 85 2E 10 00 00         JNZ 0x0048623c
0048520E  3B FE                     CMP EDI,ESI
00485210  0F 84 26 10 00 00         JZ 0x0048623c
00485216  85 FF                     TEST EDI,EDI
00485218  0F 84 BC 00 00 00         JZ 0x004852da
0048521E  39 5F 20                  CMP dword ptr [EDI + 0x20],EBX
00485221  0F 85 B3 00 00 00         JNZ 0x004852da
00485227  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
0048522A  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0048522D  3B D0                     CMP EDX,EAX
0048522F  0F 85 A5 00 00 00         JNZ 0x004852da
00485235  8B CF                     MOV ECX,EDI
00485237  E8 DE C1 F7 FF            CALL 0x0040141a
0048523C  85 C0                     TEST EAX,EAX
0048523E  0F 84 96 00 00 00         JZ 0x004852da
00485244  8D 45 0E                  LEA EAX,[EBP + 0xe]
00485247  8D 4D 0A                  LEA ECX,[EBP + 0xa]
0048524A  50                        PUSH EAX
0048524B  8D 55 FE                  LEA EDX,[EBP + -0x2]
0048524E  51                        PUSH ECX
0048524F  52                        PUSH EDX
00485250  8B CF                     MOV ECX,EDI
00485252  E8 B4 0C F8 FF            CALL 0x00405f0b
00485257  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
0048525E  0F BF 4D 0E               MOVSX ECX,word ptr [EBP + 0xe]
00485262  83 E8 02                  SUB EAX,0x2
00485265  33 D2                     XOR EDX,EDX
00485267  3B C8                     CMP ECX,EAX
00485269  5F                        POP EDI
0048526A  0F 9E C2                  SETLE DL
0048526D  4A                        DEC EDX
0048526E  5E                        POP ESI
0048526F  83 E2 EB                  AND EDX,0xffffffeb
00485272  5B                        POP EBX
00485273  83 C2 16                  ADD EDX,0x16
00485276  66 8B C2                  MOV AX,DX
00485279  8B E5                     MOV ESP,EBP
0048527B  5D                        POP EBP
0048527C  C2 10 00                  RET 0x10
switchD_0048462b::caseD_a:
0048527F  8B CE                     MOV ECX,ESI
00485281  E8 E5 CF F7 FF            CALL 0x0040226b
00485286  85 C0                     TEST EAX,EAX
00485288  0F 85 AE 0F 00 00         JNZ 0x0048623c
0048528E  85 FF                     TEST EDI,EDI
00485290  75 0D                     JNZ 0x0048529f
00485292  5F                        POP EDI
00485293  5E                        POP ESI
00485294  66 B8 01 00               MOV AX,0x1
00485298  5B                        POP EBX
00485299  8B E5                     MOV ESP,EBP
0048529B  5D                        POP EBP
0048529C  C2 10 00                  RET 0x10
LAB_0048529f:
0048529F  83 BE F7 06 00 00 17      CMP dword ptr [ESI + 0x6f7],0x17
004852A6  74 0D                     JZ 0x004852b5
004852A8  5F                        POP EDI
004852A9  5E                        POP ESI
004852AA  66 B8 01 00               MOV AX,0x1
004852AE  5B                        POP EBX
004852AF  8B E5                     MOV ESP,EBP
004852B1  5D                        POP EBP
004852B2  C2 10 00                  RET 0x10
LAB_004852b5:
004852B5  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
004852B9  74 0D                     JZ 0x004852c8
004852BB  5F                        POP EDI
004852BC  5E                        POP ESI
004852BD  66 B8 01 00               MOV AX,0x1
004852C1  5B                        POP EBX
004852C2  8B E5                     MOV ESP,EBP
004852C4  5D                        POP EBP
004852C5  C2 10 00                  RET 0x10
LAB_004852c8:
004852C8  3B FE                     CMP EDI,ESI
004852CA  0F 84 6C 0F 00 00         JZ 0x0048623c
004852D0  8B 86 2A 07 00 00         MOV EAX,dword ptr [ESI + 0x72a]
004852D6  85 C0                     TEST EAX,EAX
004852D8  7F 0D                     JG 0x004852e7
LAB_004852da:
004852DA  5F                        POP EDI
004852DB  5E                        POP ESI
004852DC  66 B8 01 00               MOV AX,0x1
004852E0  5B                        POP EBX
004852E1  8B E5                     MOV ESP,EBP
004852E3  5D                        POP EBP
004852E4  C2 10 00                  RET 0x10
LAB_004852e7:
004852E7  8B 07                     MOV EAX,dword ptr [EDI]
004852E9  8B CF                     MOV ECX,EDI
004852EB  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004852EE  83 F8 16                  CMP EAX,0x16
004852F1  74 10                     JZ 0x00485303
004852F3  8B 17                     MOV EDX,dword ptr [EDI]
004852F5  8B CF                     MOV ECX,EDI
004852F7  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004852FA  83 F8 25                  CMP EAX,0x25
004852FD  0F 85 F8 01 00 00         JNZ 0x004854fb
LAB_00485303:
00485303  83 BF 32 07 00 00 01      CMP dword ptr [EDI + 0x732],0x1
0048530A  0F 85 EB 01 00 00         JNZ 0x004854fb
00485310  8A 5F 24                  MOV BL,byte ptr [EDI + 0x24]
00485313  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00485319  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0048531C  8A C3                     MOV AL,BL
0048531E  84 D2                     TEST DL,DL
00485320  88 45 08                  MOV byte ptr [EBP + 0x8],AL
00485323  88 4D 0F                  MOV byte ptr [EBP + 0xf],CL
00485326  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
00485329  74 2D                     JZ 0x00485358
0048532B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0048532E  33 D2                     XOR EDX,EDX
00485330  25 FF 00 00 00            AND EAX,0xff
00485335  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00485338  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0048533B  25 FF 00 00 00            AND EAX,0xff
00485340  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00485347  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0048534A  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00485351  0F 95 C2                  SETNZ DL
00485354  8B C2                     MOV EAX,EDX
00485356  EB 7A                     JMP 0x004853d2
LAB_00485358:
00485358  3A C1                     CMP AL,CL
0048535A  74 6B                     JZ 0x004853c7
0048535C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0048535F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00485362  25 FF 00 00 00            AND EAX,0xff
00485367  81 E1 FF 00 00 00         AND ECX,0xff
0048536D  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00485374  84 D2                     TEST DL,DL
00485376  75 10                     JNZ 0x00485388
00485378  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0048537F  75 07                     JNZ 0x00485388
00485381  B8 FE FF FF FF            MOV EAX,0xfffffffe
00485386  EB 41                     JMP 0x004853c9
LAB_00485388:
00485388  80 FA 01                  CMP DL,0x1
0048538B  75 0F                     JNZ 0x0048539c
0048538D  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00485395  75 05                     JNZ 0x0048539c
00485397  83 C8 FF                  OR EAX,0xffffffff
0048539A  EB 2D                     JMP 0x004853c9
LAB_0048539c:
0048539C  84 D2                     TEST DL,DL
0048539E  75 11                     JNZ 0x004853b1
004853A0  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004853A8  75 07                     JNZ 0x004853b1
004853AA  B8 01 00 00 00            MOV EAX,0x1
004853AF  EB 18                     JMP 0x004853c9
LAB_004853b1:
004853B1  80 FA 01                  CMP DL,0x1
004853B4  75 11                     JNZ 0x004853c7
004853B6  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004853BE  75 07                     JNZ 0x004853c7
004853C0  B8 02 00 00 00            MOV EAX,0x2
004853C5  EB 02                     JMP 0x004853c9
LAB_004853c7:
004853C7  33 C0                     XOR EAX,EAX
LAB_004853c9:
004853C9  33 C9                     XOR ECX,ECX
004853CB  85 C0                     TEST EAX,EAX
004853CD  0F 9C C1                  SETL CL
004853D0  8B C1                     MOV EAX,ECX
LAB_004853d2:
004853D2  83 F8 01                  CMP EAX,0x1
004853D5  0F 84 20 01 00 00         JZ 0x004854fb
004853DB  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
004853E1  8A 45 0F                  MOV AL,byte ptr [EBP + 0xf]
004853E4  8A CB                     MOV CL,BL
004853E6  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
004853E9  84 D2                     TEST DL,DL
004853EB  88 4D 08                  MOV byte ptr [EBP + 0x8],CL
004853EE  74 3A                     JZ 0x0048542a
004853F0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004853F3  5F                        POP EDI
004853F4  25 FF 00 00 00            AND EAX,0xff
004853F9  5E                        POP ESI
004853FA  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
004853FD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00485400  25 FF 00 00 00            AND EAX,0xff
00485405  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0048540C  33 C9                     XOR ECX,ECX
0048540E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00485411  8A 9C C0 EA 87 80 00      MOV BL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00485418  3A D3                     CMP DL,BL
0048541A  5B                        POP EBX
0048541B  0F 95 C1                  SETNZ CL
0048541E  8B C1                     MOV EAX,ECX
00485420  66 B8 0C 00               MOV AX,0xc
00485424  8B E5                     MOV ESP,EBP
00485426  5D                        POP EBP
00485427  C2 10 00                  RET 0x10
LAB_0048542a:
0048542A  3A C1                     CMP AL,CL
0048542C  0F 84 BE 00 00 00         JZ 0x004854f0
00485432  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00485435  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00485438  25 FF 00 00 00            AND EAX,0xff
0048543D  81 E1 FF 00 00 00         AND ECX,0xff
00485443  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0048544A  84 D2                     TEST DL,DL
0048544C  75 26                     JNZ 0x00485474
0048544E  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00485455  84 DB                     TEST BL,BL
00485457  75 1B                     JNZ 0x00485474
00485459  B8 FE FF FF FF            MOV EAX,0xfffffffe
0048545E  33 D2                     XOR EDX,EDX
00485460  85 C0                     TEST EAX,EAX
00485462  0F 9C C2                  SETL DL
00485465  8B C2                     MOV EAX,EDX
00485467  5F                        POP EDI
00485468  5E                        POP ESI
00485469  66 B8 0C 00               MOV AX,0xc
0048546D  5B                        POP EBX
0048546E  8B E5                     MOV ESP,EBP
00485470  5D                        POP EBP
00485471  C2 10 00                  RET 0x10
LAB_00485474:
00485474  80 FA 01                  CMP DL,0x1
00485477  75 24                     JNZ 0x0048549d
00485479  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00485480  84 DB                     TEST BL,BL
00485482  75 19                     JNZ 0x0048549d
00485484  83 C8 FF                  OR EAX,0xffffffff
00485487  33 D2                     XOR EDX,EDX
00485489  85 C0                     TEST EAX,EAX
0048548B  0F 9C C2                  SETL DL
0048548E  8B C2                     MOV EAX,EDX
00485490  5F                        POP EDI
00485491  5E                        POP ESI
00485492  66 B8 0C 00               MOV AX,0xc
00485496  5B                        POP EBX
00485497  8B E5                     MOV ESP,EBP
00485499  5D                        POP EBP
0048549A  C2 10 00                  RET 0x10
LAB_0048549d:
0048549D  84 D2                     TEST DL,DL
0048549F  75 25                     JNZ 0x004854c6
004854A1  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004854A9  75 1B                     JNZ 0x004854c6
004854AB  B8 01 00 00 00            MOV EAX,0x1
004854B0  33 D2                     XOR EDX,EDX
004854B2  85 C0                     TEST EAX,EAX
004854B4  0F 9C C2                  SETL DL
004854B7  8B C2                     MOV EAX,EDX
004854B9  5F                        POP EDI
004854BA  5E                        POP ESI
004854BB  66 B8 0C 00               MOV AX,0xc
004854BF  5B                        POP EBX
004854C0  8B E5                     MOV ESP,EBP
004854C2  5D                        POP EBP
004854C3  C2 10 00                  RET 0x10
LAB_004854c6:
004854C6  80 FA 01                  CMP DL,0x1
004854C9  75 25                     JNZ 0x004854f0
004854CB  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004854D3  75 1B                     JNZ 0x004854f0
004854D5  B8 02 00 00 00            MOV EAX,0x2
004854DA  33 D2                     XOR EDX,EDX
004854DC  85 C0                     TEST EAX,EAX
004854DE  0F 9C C2                  SETL DL
004854E1  8B C2                     MOV EAX,EDX
004854E3  5F                        POP EDI
004854E4  5E                        POP ESI
004854E5  66 B8 0C 00               MOV AX,0xc
004854E9  5B                        POP EBX
004854EA  8B E5                     MOV ESP,EBP
004854EC  5D                        POP EBP
004854ED  C2 10 00                  RET 0x10
LAB_004854f0:
004854F0  33 C0                     XOR EAX,EAX
004854F2  33 D2                     XOR EDX,EDX
004854F4  85 C0                     TEST EAX,EAX
004854F6  0F 9C C2                  SETL DL
004854F9  8B C2                     MOV EAX,EDX
LAB_004854fb:
004854FB  5F                        POP EDI
004854FC  5E                        POP ESI
004854FD  66 B8 0C 00               MOV AX,0xc
00485501  5B                        POP EBX
00485502  8B E5                     MOV ESP,EBP
00485504  5D                        POP EBP
00485505  C2 10 00                  RET 0x10
switchD_0048462b::caseD_2d:
00485508  8B CE                     MOV ECX,ESI
0048550A  E8 5C CD F7 FF            CALL 0x0040226b
0048550F  F7 D8                     NEG EAX
00485511  1B C0                     SBB EAX,EAX
00485513  5F                        POP EDI
00485514  24 F0                     AND AL,0xf0
00485516  5E                        POP ESI
00485517  83 C0 10                  ADD EAX,0x10
0048551A  5B                        POP EBX
0048551B  8B E5                     MOV ESP,EBP
0048551D  5D                        POP EBP
0048551E  C2 10 00                  RET 0x10
switchD_0048462b::caseD_2c:
00485521  8B CE                     MOV ECX,ESI
00485523  E8 43 CD F7 FF            CALL 0x0040226b
00485528  F7 D8                     NEG EAX
0048552A  1B C0                     SBB EAX,EAX
0048552C  5F                        POP EDI
0048552D  5E                        POP ESI
0048552E  40                        INC EAX
0048552F  5B                        POP EBX
00485530  8B E5                     MOV ESP,EBP
00485532  5D                        POP EBP
00485533  C2 10 00                  RET 0x10
switchD_0048462b::caseD_0:
00485536  8B CE                     MOV ECX,ESI
00485538  E8 2E CD F7 FF            CALL 0x0040226b
0048553D  85 C0                     TEST EAX,EAX
0048553F  74 66                     JZ 0x004855a7
00485541  85 FF                     TEST EDI,EDI
00485543  0F 84 F3 0C 00 00         JZ 0x0048623c
00485549  3B FE                     CMP EDI,ESI
0048554B  75 0D                     JNZ 0x0048555a
0048554D  5F                        POP EDI
0048554E  5E                        POP ESI
0048554F  66 B8 03 00               MOV AX,0x3
00485553  5B                        POP EBX
00485554  8B E5                     MOV ESP,EBP
00485556  5D                        POP EBP
00485557  C2 10 00                  RET 0x10
LAB_0048555a:
0048555A  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0048555D  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
00485560  3B C1                     CMP EAX,ECX
00485562  0F 85 D4 0C 00 00         JNZ 0x0048623c
00485568  8B 17                     MOV EDX,dword ptr [EDI]
0048556A  8B CF                     MOV ECX,EDI
0048556C  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
00485572  85 C0                     TEST EAX,EAX
00485574  0F 84 C2 0C 00 00         JZ 0x0048623c
0048557A  8B 7F 20                  MOV EDI,dword ptr [EDI + 0x20]
0048557D  3B FB                     CMP EDI,EBX
0048557F  0F 84 02 06 00 00         JZ 0x00485b87
00485585  81 FF E9 03 00 00         CMP EDI,0x3e9
0048558B  0F 84 F6 05 00 00         JZ 0x00485b87
00485591  83 FF 14                  CMP EDI,0x14
00485594  0F 85 A2 0C 00 00         JNZ 0x0048623c
0048559A  5F                        POP EDI
0048559B  5E                        POP ESI
0048559C  66 B8 03 00               MOV AX,0x3
004855A0  5B                        POP EBX
004855A1  8B E5                     MOV ESP,EBP
004855A3  5D                        POP EBP
004855A4  C2 10 00                  RET 0x10
LAB_004855a7:
004855A7  3B FE                     CMP EDI,ESI
004855A9  75 0D                     JNZ 0x004855b8
004855AB  5F                        POP EDI
004855AC  5E                        POP ESI
004855AD  66 B8 03 00               MOV AX,0x3
004855B1  5B                        POP EBX
004855B2  8B E5                     MOV ESP,EBP
004855B4  5D                        POP EBP
004855B5  C2 10 00                  RET 0x10
LAB_004855b8:
004855B8  85 FF                     TEST EDI,EDI
004855BA  75 0D                     JNZ 0x004855c9
004855BC  5F                        POP EDI
004855BD  5E                        POP ESI
004855BE  66 B8 05 00               MOV AX,0x5
004855C2  5B                        POP EBX
004855C3  8B E5                     MOV ESP,EBP
004855C5  5D                        POP EBP
004855C6  C2 10 00                  RET 0x10
LAB_004855c9:
004855C9  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
004855CC  83 F8 14                  CMP EAX,0x14
004855CF  74 1F                     JZ 0x004855f0
004855D1  3B C3                     CMP EAX,EBX
004855D3  74 1B                     JZ 0x004855f0
004855D5  3D E9 03 00 00            CMP EAX,0x3e9
004855DA  74 14                     JZ 0x004855f0
004855DC  3D AE 01 00 00            CMP EAX,0x1ae
004855E1  74 0D                     JZ 0x004855f0
004855E3  5F                        POP EDI
004855E4  5E                        POP ESI
004855E5  66 B8 05 00               MOV AX,0x5
004855E9  5B                        POP EBX
004855EA  8B E5                     MOV ESP,EBP
004855EC  5D                        POP EBP
004855ED  C2 10 00                  RET 0x10
LAB_004855f0:
004855F0  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
004855F6  83 F8 09                  CMP EAX,0x9
004855F9  74 49                     JZ 0x00485644
004855FB  83 F8 15                  CMP EAX,0x15
004855FE  74 44                     JZ 0x00485644
00485600  8B 8E 16 07 00 00         MOV ECX,dword ptr [ESI + 0x716]
00485606  8B 96 12 07 00 00         MOV EDX,dword ptr [ESI + 0x712]
0048560C  3B CA                     CMP ECX,EDX
0048560E  7D 34                     JGE 0x00485644
00485610  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00485616  50                        PUSH EAX
00485617  E8 3E C9 F7 FF            CALL 0x00401f5a
0048561C  83 F8 03                  CMP EAX,0x3
0048561F  74 23                     JZ 0x00485644
00485621  8B 17                     MOV EDX,dword ptr [EDI]
00485623  8B CF                     MOV ECX,EDI
00485625  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00485628  83 F8 33                  CMP EAX,0x33
0048562B  75 17                     JNZ 0x00485644
0048562D  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00485630  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
00485633  3B C1                     CMP EAX,ECX
00485635  75 0D                     JNZ 0x00485644
00485637  5F                        POP EDI
00485638  5E                        POP ESI
00485639  66 B8 18 00               MOV AX,0x18
0048563D  5B                        POP EBX
0048563E  8B E5                     MOV ESP,EBP
00485640  5D                        POP EBP
00485641  C2 10 00                  RET 0x10
LAB_00485644:
00485644  8B 17                     MOV EDX,dword ptr [EDI]
00485646  8B CF                     MOV ECX,EDI
00485648  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0048564B  83 F8 62                  CMP EAX,0x62
0048564E  75 39                     JNZ 0x00485689
00485650  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00485653  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
00485656  3B C1                     CMP EAX,ECX
00485658  75 2F                     JNZ 0x00485689
0048565A  8B CE                     MOV ECX,ESI
0048565C  E8 33 DF F7 FF            CALL 0x00403594
00485661  85 C0                     TEST EAX,EAX
00485663  7E 24                     JLE 0x00485689
00485665  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
0048566B  51                        PUSH ECX
0048566C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00485672  E8 E3 C8 F7 FF            CALL 0x00401f5a
00485677  83 F8 03                  CMP EAX,0x3
0048567A  75 0D                     JNZ 0x00485689
0048567C  5F                        POP EDI
0048567D  5E                        POP ESI
0048567E  66 B8 1B 00               MOV AX,0x1b
00485682  5B                        POP EBX
00485683  8B E5                     MOV ESP,EBP
00485685  5D                        POP EBP
00485686  C2 10 00                  RET 0x10
LAB_00485689:
00485689  8B 17                     MOV EDX,dword ptr [EDI]
0048568B  8B CF                     MOV ECX,EDI
0048568D  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00485690  83 F8 37                  CMP EAX,0x37
00485693  74 0C                     JZ 0x004856a1
00485695  8B 07                     MOV EAX,dword ptr [EDI]
00485697  8B CF                     MOV ECX,EDI
00485699  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0048569C  83 F8 6C                  CMP EAX,0x6c
0048569F  75 24                     JNZ 0x004856c5
LAB_004856a1:
004856A1  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004856A4  33 C9                     XOR ECX,ECX
004856A6  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
004856AA  51                        PUSH ECX
004856AB  52                        PUSH EDX
004856AC  8B CF                     MOV ECX,EDI
004856AE  E8 F8 C7 F7 FF            CALL 0x00401eab
004856B3  83 F8 01                  CMP EAX,0x1
004856B6  75 0D                     JNZ 0x004856c5
004856B8  5F                        POP EDI
004856B9  5E                        POP ESI
004856BA  66 B8 1D 00               MOV AX,0x1d
004856BE  5B                        POP EBX
004856BF  8B E5                     MOV ESP,EBP
004856C1  5D                        POP EBP
004856C2  C2 10 00                  RET 0x10
LAB_004856c5:
004856C5  8B 07                     MOV EAX,dword ptr [EDI]
004856C7  8B CF                     MOV ECX,EDI
004856C9  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004856CC  83 F8 16                  CMP EAX,0x16
004856CF  74 10                     JZ 0x004856e1
004856D1  8B 17                     MOV EDX,dword ptr [EDI]
004856D3  8B CF                     MOV ECX,EDI
004856D5  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004856D8  83 F8 25                  CMP EAX,0x25
004856DB  0F 85 D7 01 00 00         JNZ 0x004858b8
LAB_004856e1:
004856E1  83 BF 32 07 00 00 01      CMP dword ptr [EDI + 0x732],0x1
004856E8  0F 85 CA 01 00 00         JNZ 0x004858b8
004856EE  8A 5F 24                  MOV BL,byte ptr [EDI + 0x24]
004856F1  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
004856F7  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004856FA  8A C3                     MOV AL,BL
004856FC  84 D2                     TEST DL,DL
004856FE  88 45 08                  MOV byte ptr [EBP + 0x8],AL
00485701  88 4D 0F                  MOV byte ptr [EBP + 0xf],CL
00485704  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
00485707  74 2D                     JZ 0x00485736
00485709  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0048570C  33 D2                     XOR EDX,EDX
0048570E  25 FF 00 00 00            AND EAX,0xff
00485713  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00485716  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00485719  25 FF 00 00 00            AND EAX,0xff
0048571E  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00485725  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00485728  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0048572F  0F 95 C2                  SETNZ DL
00485732  8B C2                     MOV EAX,EDX
00485734  EB 7A                     JMP 0x004857b0
LAB_00485736:
00485736  3A C1                     CMP AL,CL
00485738  74 6B                     JZ 0x004857a5
0048573A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0048573D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00485740  25 FF 00 00 00            AND EAX,0xff
00485745  81 E1 FF 00 00 00         AND ECX,0xff
0048574B  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00485752  84 D2                     TEST DL,DL
00485754  75 10                     JNZ 0x00485766
00485756  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0048575D  75 07                     JNZ 0x00485766
0048575F  B8 FE FF FF FF            MOV EAX,0xfffffffe
00485764  EB 41                     JMP 0x004857a7
LAB_00485766:
00485766  80 FA 01                  CMP DL,0x1
00485769  75 0F                     JNZ 0x0048577a
0048576B  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00485773  75 05                     JNZ 0x0048577a
00485775  83 C8 FF                  OR EAX,0xffffffff
00485778  EB 2D                     JMP 0x004857a7
LAB_0048577a:
0048577A  84 D2                     TEST DL,DL
0048577C  75 11                     JNZ 0x0048578f
0048577E  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00485786  75 07                     JNZ 0x0048578f
00485788  B8 01 00 00 00            MOV EAX,0x1
0048578D  EB 18                     JMP 0x004857a7
LAB_0048578f:
0048578F  80 FA 01                  CMP DL,0x1
00485792  75 11                     JNZ 0x004857a5
00485794  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0048579C  75 07                     JNZ 0x004857a5
0048579E  B8 02 00 00 00            MOV EAX,0x2
004857A3  EB 02                     JMP 0x004857a7
LAB_004857a5:
004857A5  33 C0                     XOR EAX,EAX
LAB_004857a7:
004857A7  33 C9                     XOR ECX,ECX
004857A9  85 C0                     TEST EAX,EAX
004857AB  0F 9C C1                  SETL CL
004857AE  8B C1                     MOV EAX,ECX
LAB_004857b0:
004857B0  83 F8 01                  CMP EAX,0x1
004857B3  0F 84 E1 00 00 00         JZ 0x0048589a
004857B9  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
004857BF  8A 45 0F                  MOV AL,byte ptr [EBP + 0xf]
004857C2  8A CB                     MOV CL,BL
004857C4  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
004857C7  84 D2                     TEST DL,DL
004857C9  88 4D 08                  MOV byte ptr [EBP + 0x8],CL
004857CC  74 2D                     JZ 0x004857fb
004857CE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004857D1  25 FF 00 00 00            AND EAX,0xff
004857D6  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
004857D9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004857DC  25 FF 00 00 00            AND EAX,0xff
004857E1  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
004857E8  33 C9                     XOR ECX,ECX
004857EA  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004857ED  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
004857F4  0F 95 C1                  SETNZ CL
004857F7  8B C1                     MOV EAX,ECX
004857F9  EB 7D                     JMP 0x00485878
LAB_004857fb:
004857FB  3A C1                     CMP AL,CL
004857FD  74 6E                     JZ 0x0048586d
004857FF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00485802  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00485805  25 FF 00 00 00            AND EAX,0xff
0048580A  81 E1 FF 00 00 00         AND ECX,0xff
00485810  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00485817  84 D2                     TEST DL,DL
00485819  75 12                     JNZ 0x0048582d
0048581B  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00485822  84 DB                     TEST BL,BL
00485824  75 07                     JNZ 0x0048582d
00485826  B8 FE FF FF FF            MOV EAX,0xfffffffe
0048582B  EB 42                     JMP 0x0048586f
LAB_0048582d:
0048582D  80 FA 01                  CMP DL,0x1
00485830  75 10                     JNZ 0x00485842
00485832  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00485839  84 DB                     TEST BL,BL
0048583B  75 05                     JNZ 0x00485842
0048583D  83 C8 FF                  OR EAX,0xffffffff
00485840  EB 2D                     JMP 0x0048586f
LAB_00485842:
00485842  84 D2                     TEST DL,DL
00485844  75 11                     JNZ 0x00485857
00485846  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0048584E  75 07                     JNZ 0x00485857
00485850  B8 01 00 00 00            MOV EAX,0x1
00485855  EB 18                     JMP 0x0048586f
LAB_00485857:
00485857  80 FA 01                  CMP DL,0x1
0048585A  75 11                     JNZ 0x0048586d
0048585C  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00485864  75 07                     JNZ 0x0048586d
00485866  B8 02 00 00 00            MOV EAX,0x2
0048586B  EB 02                     JMP 0x0048586f
LAB_0048586d:
0048586D  33 C0                     XOR EAX,EAX
LAB_0048586f:
0048586F  33 D2                     XOR EDX,EDX
00485871  85 C0                     TEST EAX,EAX
00485873  0F 9C C2                  SETL DL
00485876  8B C2                     MOV EAX,EDX
LAB_00485878:
00485878  83 F8 01                  CMP EAX,0x1
0048587B  74 1D                     JZ 0x0048589a
0048587D  8B 07                     MOV EAX,dword ptr [EDI]
0048587F  8B CF                     MOV ECX,EDI
00485881  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
00485887  48                        DEC EAX
00485888  5F                        POP EDI
00485889  F7 D8                     NEG EAX
0048588B  1B C0                     SBB EAX,EAX
0048588D  5E                        POP ESI
0048588E  24 FD                     AND AL,0xfd
00485890  5B                        POP EBX
00485891  83 C0 03                  ADD EAX,0x3
00485894  8B E5                     MOV ESP,EBP
00485896  5D                        POP EBP
00485897  C2 10 00                  RET 0x10
LAB_0048589a:
0048589A  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0048589D  51                        PUSH ECX
0048589E  8B CF                     MOV ECX,EDI
004858A0  E8 42 02 F8 FF            CALL 0x00405ae7
004858A5  48                        DEC EAX
004858A6  5F                        POP EDI
004858A7  F7 D8                     NEG EAX
004858A9  1B C0                     SBB EAX,EAX
004858AB  5E                        POP ESI
004858AC  24 F9                     AND AL,0xf9
004858AE  5B                        POP EBX
004858AF  83 C0 07                  ADD EAX,0x7
004858B2  8B E5                     MOV ESP,EBP
004858B4  5D                        POP EBP
004858B5  C2 10 00                  RET 0x10
LAB_004858b8:
004858B8  8B 9E F7 06 00 00         MOV EBX,dword ptr [ESI + 0x6f7]
004858BE  83 FB 08                  CMP EBX,0x8
004858C1  0F 84 EF 07 00 00         JZ 0x004860b6
004858C7  83 FB 14                  CMP EBX,0x14
004858CA  0F 84 E6 07 00 00         JZ 0x004860b6
004858D0  83 FB 1A                  CMP EBX,0x1a
004858D3  0F 84 DD 07 00 00         JZ 0x004860b6
004858D9  83 FB 07                  CMP EBX,0x7
004858DC  0F 84 24 05 00 00         JZ 0x00485e06
004858E2  83 FB 13                  CMP EBX,0x13
004858E5  0F 84 1B 05 00 00         JZ 0x00485e06
004858EB  83 FB 1B                  CMP EBX,0x1b
004858EE  0F 84 12 05 00 00         JZ 0x00485e06
004858F4  83 FB 0C                  CMP EBX,0xc
004858F7  0F 84 8B 04 00 00         JZ 0x00485d88
004858FD  83 FB 18                  CMP EBX,0x18
00485900  0F 84 82 04 00 00         JZ 0x00485d88
00485906  83 FB 19                  CMP EBX,0x19
00485909  0F 84 79 04 00 00         JZ 0x00485d88
0048590F  83 FB 09                  CMP EBX,0x9
00485912  0F 85 53 01 00 00         JNZ 0x00485a6b
00485918  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0048591E  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00485921  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00485924  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
00485927  84 D2                     TEST DL,DL
00485929  88 4D 08                  MOV byte ptr [EBP + 0x8],CL
0048592C  74 2D                     JZ 0x0048595b
0048592E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00485931  25 FF 00 00 00            AND EAX,0xff
00485936  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00485939  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0048593C  25 FF 00 00 00            AND EAX,0xff
00485941  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00485948  33 C9                     XOR ECX,ECX
0048594A  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0048594D  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00485954  0F 95 C1                  SETNZ CL
00485957  8B C1                     MOV EAX,ECX
00485959  EB 7D                     JMP 0x004859d8
LAB_0048595b:
0048595B  3A C1                     CMP AL,CL
0048595D  74 6E                     JZ 0x004859cd
0048595F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00485962  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00485965  25 FF 00 00 00            AND EAX,0xff
0048596A  81 E1 FF 00 00 00         AND ECX,0xff
00485970  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00485977  84 D2                     TEST DL,DL
00485979  75 12                     JNZ 0x0048598d
0048597B  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00485982  84 DB                     TEST BL,BL
00485984  75 07                     JNZ 0x0048598d
00485986  B8 FE FF FF FF            MOV EAX,0xfffffffe
0048598B  EB 42                     JMP 0x004859cf
LAB_0048598d:
0048598D  80 FA 01                  CMP DL,0x1
00485990  75 10                     JNZ 0x004859a2
00485992  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00485999  84 DB                     TEST BL,BL
0048599B  75 05                     JNZ 0x004859a2
0048599D  83 C8 FF                  OR EAX,0xffffffff
004859A0  EB 2D                     JMP 0x004859cf
LAB_004859a2:
004859A2  84 D2                     TEST DL,DL
004859A4  75 11                     JNZ 0x004859b7
004859A6  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004859AE  75 07                     JNZ 0x004859b7
004859B0  B8 01 00 00 00            MOV EAX,0x1
004859B5  EB 18                     JMP 0x004859cf
LAB_004859b7:
004859B7  80 FA 01                  CMP DL,0x1
004859BA  75 11                     JNZ 0x004859cd
004859BC  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004859C4  75 07                     JNZ 0x004859cd
004859C6  B8 02 00 00 00            MOV EAX,0x2
004859CB  EB 02                     JMP 0x004859cf
LAB_004859cd:
004859CD  33 C0                     XOR EAX,EAX
LAB_004859cf:
004859CF  33 D2                     XOR EDX,EDX
004859D1  85 C0                     TEST EAX,EAX
004859D3  0F 9C C2                  SETL DL
004859D6  8B C2                     MOV EAX,EDX
LAB_004859d8:
004859D8  83 F8 01                  CMP EAX,0x1
004859DB  74 50                     JZ 0x00485a2d
004859DD  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
004859E0  83 F8 14                  CMP EAX,0x14
004859E3  75 1D                     JNZ 0x00485a02
004859E5  8B 07                     MOV EAX,dword ptr [EDI]
004859E7  8B CF                     MOV ECX,EDI
004859E9  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
004859EF  48                        DEC EAX
004859F0  5F                        POP EDI
004859F1  F7 D8                     NEG EAX
004859F3  1B C0                     SBB EAX,EAX
004859F5  5E                        POP ESI
004859F6  24 FD                     AND AL,0xfd
004859F8  5B                        POP EBX
004859F9  83 C0 03                  ADD EAX,0x3
004859FC  8B E5                     MOV ESP,EBP
004859FE  5D                        POP EBP
004859FF  C2 10 00                  RET 0x10
LAB_00485a02:
00485A02  3D E8 03 00 00            CMP EAX,0x3e8
00485A07  74 07                     JZ 0x00485a10
00485A09  3D E9 03 00 00            CMP EAX,0x3e9
00485A0E  75 1D                     JNZ 0x00485a2d
LAB_00485a10:
00485A10  8B 17                     MOV EDX,dword ptr [EDI]
00485A12  8B CF                     MOV ECX,EDI
00485A14  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
00485A1A  48                        DEC EAX
00485A1B  5F                        POP EDI
00485A1C  F7 D8                     NEG EAX
00485A1E  1B C0                     SBB EAX,EAX
00485A20  5E                        POP ESI
00485A21  24 FC                     AND AL,0xfc
00485A23  5B                        POP EBX
00485A24  83 C0 04                  ADD EAX,0x4
00485A27  8B E5                     MOV ESP,EBP
00485A29  5D                        POP EBP
00485A2A  C2 10 00                  RET 0x10
LAB_00485a2d:
00485A2D  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00485A30  3D E8 03 00 00            CMP EAX,0x3e8
00485A35  74 0B                     JZ 0x00485a42
00485A37  3D E9 03 00 00            CMP EAX,0x3e9
00485A3C  0F 85 FA 07 00 00         JNZ 0x0048623c
LAB_00485a42:
00485A42  8B 07                     MOV EAX,dword ptr [EDI]
00485A44  8B CF                     MOV ECX,EDI
00485A46  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00485A49  83 F8 3B                  CMP EAX,0x3b
00485A4C  74 10                     JZ 0x00485a5e
00485A4E  8B 17                     MOV EDX,dword ptr [EDI]
00485A50  8B CF                     MOV ECX,EDI
00485A52  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00485A55  83 F8 60                  CMP EAX,0x60
00485A58  0F 85 DE 07 00 00         JNZ 0x0048623c
LAB_00485a5e:
00485A5E  5F                        POP EDI
00485A5F  5E                        POP ESI
00485A60  66 B8 07 00               MOV AX,0x7
00485A64  5B                        POP EBX
00485A65  8B E5                     MOV ESP,EBP
00485A67  5D                        POP EBP
00485A68  C2 10 00                  RET 0x10
LAB_00485a6b:
00485A6B  83 FB 1D                  CMP EBX,0x1d
00485A6E  0F 85 20 01 00 00         JNZ 0x00485b94
00485A74  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00485A7A  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00485A7D  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00485A80  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
00485A83  84 D2                     TEST DL,DL
00485A85  88 4D 08                  MOV byte ptr [EBP + 0x8],CL
00485A88  74 2D                     JZ 0x00485ab7
00485A8A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00485A8D  33 D2                     XOR EDX,EDX
00485A8F  25 FF 00 00 00            AND EAX,0xff
00485A94  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00485A97  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00485A9A  25 FF 00 00 00            AND EAX,0xff
00485A9F  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00485AA6  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00485AA9  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00485AB0  0F 95 C2                  SETNZ DL
00485AB3  8B C2                     MOV EAX,EDX
00485AB5  EB 7D                     JMP 0x00485b34
LAB_00485ab7:
00485AB7  3A C1                     CMP AL,CL
00485AB9  74 6E                     JZ 0x00485b29
00485ABB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00485ABE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00485AC1  25 FF 00 00 00            AND EAX,0xff
00485AC6  81 E1 FF 00 00 00         AND ECX,0xff
00485ACC  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00485AD3  84 D2                     TEST DL,DL
00485AD5  75 12                     JNZ 0x00485ae9
00485AD7  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00485ADE  84 DB                     TEST BL,BL
00485AE0  75 07                     JNZ 0x00485ae9
00485AE2  B8 FE FF FF FF            MOV EAX,0xfffffffe
00485AE7  EB 42                     JMP 0x00485b2b
LAB_00485ae9:
00485AE9  80 FA 01                  CMP DL,0x1
00485AEC  75 10                     JNZ 0x00485afe
00485AEE  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00485AF5  84 DB                     TEST BL,BL
00485AF7  75 05                     JNZ 0x00485afe
00485AF9  83 C8 FF                  OR EAX,0xffffffff
00485AFC  EB 2D                     JMP 0x00485b2b
LAB_00485afe:
00485AFE  84 D2                     TEST DL,DL
00485B00  75 11                     JNZ 0x00485b13
00485B02  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00485B0A  75 07                     JNZ 0x00485b13
00485B0C  B8 01 00 00 00            MOV EAX,0x1
00485B11  EB 18                     JMP 0x00485b2b
LAB_00485b13:
00485B13  80 FA 01                  CMP DL,0x1
00485B16  75 11                     JNZ 0x00485b29
00485B18  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00485B20  75 07                     JNZ 0x00485b29
00485B22  B8 02 00 00 00            MOV EAX,0x2
00485B27  EB 02                     JMP 0x00485b2b
LAB_00485b29:
00485B29  33 C0                     XOR EAX,EAX
LAB_00485b2b:
00485B2B  33 C9                     XOR ECX,ECX
00485B2D  85 C0                     TEST EAX,EAX
00485B2F  0F 9C C1                  SETL CL
00485B32  8B C1                     MOV EAX,ECX
LAB_00485b34:
00485B34  83 F8 01                  CMP EAX,0x1
00485B37  0F 84 FF 06 00 00         JZ 0x0048623c
00485B3D  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
00485B41  75 1C                     JNZ 0x00485b5f
00485B43  8B 17                     MOV EDX,dword ptr [EDI]
00485B45  8B CF                     MOV ECX,EDI
00485B47  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
00485B4D  83 F8 01                  CMP EAX,0x1
00485B50  75 0D                     JNZ 0x00485b5f
00485B52  5F                        POP EDI
00485B53  5E                        POP ESI
00485B54  66 B8 03 00               MOV AX,0x3
00485B58  5B                        POP EBX
00485B59  8B E5                     MOV ESP,EBP
00485B5B  5D                        POP EBP
00485B5C  C2 10 00                  RET 0x10
LAB_00485b5f:
00485B5F  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00485B62  3D E8 03 00 00            CMP EAX,0x3e8
00485B67  74 0B                     JZ 0x00485b74
LAB_00485b69:
00485B69  3D E9 03 00 00            CMP EAX,0x3e9
00485B6E  0F 85 C8 06 00 00         JNZ 0x0048623c
LAB_00485b74:
00485B74  8B 07                     MOV EAX,dword ptr [EDI]
00485B76  8B CF                     MOV ECX,EDI
00485B78  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
LAB_00485b7e:
00485B7E  83 F8 01                  CMP EAX,0x1
00485B81  0F 85 B5 06 00 00         JNZ 0x0048623c
LAB_00485b87:
00485B87  5F                        POP EDI
00485B88  5E                        POP ESI
00485B89  66 B8 04 00               MOV AX,0x4
00485B8D  5B                        POP EBX
00485B8E  8B E5                     MOV ESP,EBP
00485B90  5D                        POP EBP
00485B91  C2 10 00                  RET 0x10
LAB_00485b94:
00485B94  83 FB 24                  CMP EBX,0x24
00485B97  0F 84 20 01 00 00         JZ 0x00485cbd
00485B9D  83 FB 25                  CMP EBX,0x25
00485BA0  0F 84 17 01 00 00         JZ 0x00485cbd
00485BA6  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00485BAC  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00485BAF  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00485BB2  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
00485BB5  84 D2                     TEST DL,DL
00485BB7  88 4D 08                  MOV byte ptr [EBP + 0x8],CL
00485BBA  74 2D                     JZ 0x00485be9
00485BBC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00485BBF  33 D2                     XOR EDX,EDX
00485BC1  25 FF 00 00 00            AND EAX,0xff
00485BC6  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00485BC9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00485BCC  25 FF 00 00 00            AND EAX,0xff
00485BD1  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00485BD8  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00485BDB  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00485BE2  0F 95 C2                  SETNZ DL
00485BE5  8B C2                     MOV EAX,EDX
00485BE7  EB 7A                     JMP 0x00485c63
LAB_00485be9:
00485BE9  3A C1                     CMP AL,CL
00485BEB  74 6B                     JZ 0x00485c58
00485BED  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00485BF0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00485BF3  25 FF 00 00 00            AND EAX,0xff
00485BF8  81 E1 FF 00 00 00         AND ECX,0xff
00485BFE  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00485C05  84 D2                     TEST DL,DL
00485C07  75 10                     JNZ 0x00485c19
00485C09  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
00485C10  75 07                     JNZ 0x00485c19
00485C12  B8 FE FF FF FF            MOV EAX,0xfffffffe
00485C17  EB 41                     JMP 0x00485c5a
LAB_00485c19:
00485C19  80 FA 01                  CMP DL,0x1
00485C1C  75 0F                     JNZ 0x00485c2d
00485C1E  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00485C26  75 05                     JNZ 0x00485c2d
00485C28  83 C8 FF                  OR EAX,0xffffffff
00485C2B  EB 2D                     JMP 0x00485c5a
LAB_00485c2d:
00485C2D  84 D2                     TEST DL,DL
00485C2F  75 11                     JNZ 0x00485c42
00485C31  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00485C39  75 07                     JNZ 0x00485c42
00485C3B  B8 01 00 00 00            MOV EAX,0x1
00485C40  EB 18                     JMP 0x00485c5a
LAB_00485c42:
00485C42  80 FA 01                  CMP DL,0x1
00485C45  75 11                     JNZ 0x00485c58
00485C47  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00485C4F  75 07                     JNZ 0x00485c58
00485C51  B8 02 00 00 00            MOV EAX,0x2
00485C56  EB 02                     JMP 0x00485c5a
LAB_00485c58:
00485C58  33 C0                     XOR EAX,EAX
LAB_00485c5a:
00485C5A  33 C9                     XOR ECX,ECX
00485C5C  85 C0                     TEST EAX,EAX
00485C5E  0F 9C C1                  SETL CL
00485C61  8B C1                     MOV EAX,ECX
LAB_00485c63:
00485C63  83 F8 01                  CMP EAX,0x1
00485C66  75 20                     JNZ 0x00485c88
00485C68  83 FB 15                  CMP EBX,0x15
00485C6B  74 0E                     JZ 0x00485c7b
00485C6D  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
00485C73  85 C0                     TEST EAX,EAX
00485C75  0F 8E C1 05 00 00         JLE 0x0048623c
LAB_00485c7b:
00485C7B  5F                        POP EDI
00485C7C  5E                        POP ESI
00485C7D  66 B8 07 00               MOV AX,0x7
00485C81  5B                        POP EBX
00485C82  8B E5                     MOV ESP,EBP
00485C84  5D                        POP EBP
00485C85  C2 10 00                  RET 0x10
LAB_00485c88:
00485C88  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
00485C8C  75 1C                     JNZ 0x00485caa
00485C8E  8B 17                     MOV EDX,dword ptr [EDI]
00485C90  8B CF                     MOV ECX,EDI
00485C92  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
00485C98  83 F8 01                  CMP EAX,0x1
00485C9B  75 0D                     JNZ 0x00485caa
00485C9D  5F                        POP EDI
00485C9E  5E                        POP ESI
00485C9F  66 B8 03 00               MOV AX,0x3
00485CA3  5B                        POP EBX
00485CA4  8B E5                     MOV ESP,EBP
00485CA6  5D                        POP EBP
00485CA7  C2 10 00                  RET 0x10
LAB_00485caa:
00485CAA  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00485CAD  3D E8 03 00 00            CMP EAX,0x3e8
00485CB2  0F 84 BC FE FF FF         JZ 0x00485b74
00485CB8  E9 AC FE FF FF            JMP 0x00485b69
LAB_00485cbd:
00485CBD  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00485CC3  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00485CC6  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00485CC9  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
00485CCC  84 D2                     TEST DL,DL
00485CCE  88 4D 08                  MOV byte ptr [EBP + 0x8],CL
00485CD1  74 13                     JZ 0x00485ce6
00485CD3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00485CD6  25 FF 00 00 00            AND EAX,0xff
00485CDB  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00485CDE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00485CE1  E9 7D 04 00 00            JMP 0x00486163
LAB_00485ce6:
00485CE6  3A C1                     CMP AL,CL
00485CE8  74 60                     JZ 0x00485d4a
00485CEA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00485CED  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00485CF0  25 FF 00 00 00            AND EAX,0xff
00485CF5  81 E1 FF 00 00 00         AND ECX,0xff
00485CFB  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00485D02  84 D2                     TEST DL,DL
00485D04  75 12                     JNZ 0x00485d18
00485D06  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00485D0D  84 DB                     TEST BL,BL
00485D0F  75 07                     JNZ 0x00485d18
00485D11  B8 FE FF FF FF            MOV EAX,0xfffffffe
00485D16  EB 34                     JMP 0x00485d4c
LAB_00485d18:
00485D18  80 FA 01                  CMP DL,0x1
00485D1B  75 10                     JNZ 0x00485d2d
00485D1D  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00485D24  84 DB                     TEST BL,BL
00485D26  75 05                     JNZ 0x00485d2d
00485D28  83 C8 FF                  OR EAX,0xffffffff
00485D2B  EB 1F                     JMP 0x00485d4c
LAB_00485d2d:
00485D2D  84 D2                     TEST DL,DL
00485D2F  0F 85 B9 04 00 00         JNZ 0x004861ee
00485D35  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00485D3D  0F 85 AB 04 00 00         JNZ 0x004861ee
00485D43  B8 01 00 00 00            MOV EAX,0x1
00485D48  EB 02                     JMP 0x00485d4c
LAB_00485d4a:
00485D4A  33 C0                     XOR EAX,EAX
LAB_00485d4c:
00485D4C  33 C9                     XOR ECX,ECX
00485D4E  85 C0                     TEST EAX,EAX
00485D50  0F 9C C1                  SETL CL
00485D53  8B C1                     MOV EAX,ECX
LAB_00485d55:
00485D55  83 F8 01                  CMP EAX,0x1
00485D58  0F 84 DE 04 00 00         JZ 0x0048623c
00485D5E  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
00485D62  0F 85 42 FF FF FF         JNZ 0x00485caa
LAB_00485d68:
00485D68  8B 17                     MOV EDX,dword ptr [EDI]
00485D6A  8B CF                     MOV ECX,EDI
00485D6C  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
00485D72  83 F8 01                  CMP EAX,0x1
00485D75  0F 85 2F FF FF FF         JNZ 0x00485caa
00485D7B  5F                        POP EDI
00485D7C  5E                        POP ESI
00485D7D  66 B8 03 00               MOV AX,0x3
00485D81  5B                        POP EBX
00485D82  8B E5                     MOV ESP,EBP
00485D84  5D                        POP EBP
00485D85  C2 10 00                  RET 0x10
LAB_00485d88:
00485D88  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00485D8E  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00485D91  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00485D94  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
00485D97  84 D2                     TEST DL,DL
00485D99  88 4D 08                  MOV byte ptr [EBP + 0x8],CL
00485D9C  74 13                     JZ 0x00485db1
00485D9E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00485DA1  25 FF 00 00 00            AND EAX,0xff
00485DA6  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00485DA9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00485DAC  E9 B2 03 00 00            JMP 0x00486163
LAB_00485db1:
00485DB1  3A C1                     CMP AL,CL
00485DB3  74 95                     JZ 0x00485d4a
00485DB5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00485DB8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00485DBB  25 FF 00 00 00            AND EAX,0xff
00485DC0  81 E1 FF 00 00 00         AND ECX,0xff
00485DC6  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00485DCD  84 D2                     TEST DL,DL
00485DCF  75 15                     JNZ 0x00485de6
00485DD1  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00485DD8  84 DB                     TEST BL,BL
00485DDA  75 0A                     JNZ 0x00485de6
00485DDC  B8 FE FF FF FF            MOV EAX,0xfffffffe
00485DE1  E9 66 FF FF FF            JMP 0x00485d4c
LAB_00485de6:
00485DE6  80 FA 01                  CMP DL,0x1
00485DE9  0F 85 3E FF FF FF         JNZ 0x00485d2d
00485DEF  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00485DF6  84 DB                     TEST BL,BL
00485DF8  0F 85 2F FF FF FF         JNZ 0x00485d2d
00485DFE  83 C8 FF                  OR EAX,0xffffffff
00485E01  E9 46 FF FF FF            JMP 0x00485d4c
LAB_00485e06:
00485E06  8B 86 CA 07 00 00         MOV EAX,dword ptr [ESI + 0x7ca]
00485E0C  85 C0                     TEST EAX,EAX
00485E0E  0F 84 65 01 00 00         JZ 0x00485f79
00485E14  8B 17                     MOV EDX,dword ptr [EDI]
00485E16  8B CF                     MOV ECX,EDI
00485E18  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00485E1B  83 F8 52                  CMP EAX,0x52
00485E1E  74 17                     JZ 0x00485e37
00485E20  83 F8 5F                  CMP EAX,0x5f
00485E23  74 12                     JZ 0x00485e37
00485E25  83 F8 63                  CMP EAX,0x63
00485E28  75 40                     JNZ 0x00485e6a
00485E2A  5F                        POP EDI
00485E2B  5E                        POP ESI
00485E2C  66 B8 1E 00               MOV AX,0x1e
00485E30  5B                        POP EBX
00485E31  8B E5                     MOV ESP,EBP
00485E33  5D                        POP EBP
00485E34  C2 10 00                  RET 0x10
LAB_00485e37:
00485E37  8B 8E CA 07 00 00         MOV ECX,dword ptr [ESI + 0x7ca]
00485E3D  8D 45 F8                  LEA EAX,[EBP + -0x8]
00485E40  50                        PUSH EAX
00485E41  51                        PUSH ECX
00485E42  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00485E48  E8 83 04 26 00            CALL 0x006e62d0
00485E4D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00485E50  85 C0                     TEST EAX,EAX
00485E52  74 16                     JZ 0x00485e6a
00485E54  81 78 20 A4 01 00 00      CMP dword ptr [EAX + 0x20],0x1a4
00485E5B  75 0D                     JNZ 0x00485e6a
00485E5D  5F                        POP EDI
00485E5E  5E                        POP ESI
00485E5F  66 B8 1E 00               MOV AX,0x1e
00485E63  5B                        POP EBX
00485E64  8B E5                     MOV ESP,EBP
00485E66  5D                        POP EBP
00485E67  C2 10 00                  RET 0x10
LAB_00485e6a:
00485E6A  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00485E70  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00485E73  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00485E76  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
00485E79  84 D2                     TEST DL,DL
00485E7B  88 4D 08                  MOV byte ptr [EBP + 0x8],CL
00485E7E  74 2D                     JZ 0x00485ead
00485E80  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00485E83  25 FF 00 00 00            AND EAX,0xff
00485E88  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00485E8B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00485E8E  25 FF 00 00 00            AND EAX,0xff
00485E93  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00485E9A  33 C9                     XOR ECX,ECX
00485E9C  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00485E9F  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00485EA6  0F 95 C1                  SETNZ CL
00485EA9  8B C1                     MOV EAX,ECX
00485EAB  EB 7D                     JMP 0x00485f2a
LAB_00485ead:
00485EAD  3A C1                     CMP AL,CL
00485EAF  74 6E                     JZ 0x00485f1f
00485EB1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00485EB4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00485EB7  25 FF 00 00 00            AND EAX,0xff
00485EBC  81 E1 FF 00 00 00         AND ECX,0xff
00485EC2  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00485EC9  84 D2                     TEST DL,DL
00485ECB  75 12                     JNZ 0x00485edf
00485ECD  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00485ED4  84 DB                     TEST BL,BL
00485ED6  75 07                     JNZ 0x00485edf
00485ED8  B8 FE FF FF FF            MOV EAX,0xfffffffe
00485EDD  EB 42                     JMP 0x00485f21
LAB_00485edf:
00485EDF  80 FA 01                  CMP DL,0x1
00485EE2  75 10                     JNZ 0x00485ef4
00485EE4  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00485EEB  84 DB                     TEST BL,BL
00485EED  75 05                     JNZ 0x00485ef4
00485EEF  83 C8 FF                  OR EAX,0xffffffff
00485EF2  EB 2D                     JMP 0x00485f21
LAB_00485ef4:
00485EF4  84 D2                     TEST DL,DL
00485EF6  75 11                     JNZ 0x00485f09
00485EF8  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00485F00  75 07                     JNZ 0x00485f09
00485F02  B8 01 00 00 00            MOV EAX,0x1
00485F07  EB 18                     JMP 0x00485f21
LAB_00485f09:
00485F09  80 FA 01                  CMP DL,0x1
00485F0C  75 11                     JNZ 0x00485f1f
00485F0E  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00485F16  75 07                     JNZ 0x00485f1f
00485F18  B8 02 00 00 00            MOV EAX,0x2
00485F1D  EB 02                     JMP 0x00485f21
LAB_00485f1f:
00485F1F  33 C0                     XOR EAX,EAX
LAB_00485f21:
00485F21  33 D2                     XOR EDX,EDX
00485F23  85 C0                     TEST EAX,EAX
00485F25  0F 9C C2                  SETL DL
00485F28  8B C2                     MOV EAX,EDX
LAB_00485f2a:
00485F2A  83 F8 01                  CMP EAX,0x1
00485F2D  0F 84 09 03 00 00         JZ 0x0048623c
00485F33  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
00485F37  75 1C                     JNZ 0x00485f55
00485F39  8B 07                     MOV EAX,dword ptr [EDI]
00485F3B  8B CF                     MOV ECX,EDI
00485F3D  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
00485F43  83 F8 01                  CMP EAX,0x1
00485F46  75 0D                     JNZ 0x00485f55
00485F48  5F                        POP EDI
00485F49  5E                        POP ESI
00485F4A  66 B8 03 00               MOV AX,0x3
00485F4E  5B                        POP EBX
00485F4F  8B E5                     MOV ESP,EBP
00485F51  5D                        POP EBP
00485F52  C2 10 00                  RET 0x10
LAB_00485f55:
00485F55  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00485F58  3D E8 03 00 00            CMP EAX,0x3e8
00485F5D  74 0B                     JZ 0x00485f6a
00485F5F  3D E9 03 00 00            CMP EAX,0x3e9
00485F64  0F 85 D2 02 00 00         JNZ 0x0048623c
LAB_00485f6a:
00485F6A  8B 17                     MOV EDX,dword ptr [EDI]
00485F6C  8B CF                     MOV ECX,EDI
00485F6E  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
00485F74  E9 05 FC FF FF            JMP 0x00485b7e
LAB_00485f79:
00485F79  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00485F7F  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00485F82  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00485F85  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
00485F88  84 D2                     TEST DL,DL
00485F8A  88 4D 08                  MOV byte ptr [EBP + 0x8],CL
00485F8D  74 2D                     JZ 0x00485fbc
00485F8F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00485F92  33 D2                     XOR EDX,EDX
00485F94  25 FF 00 00 00            AND EAX,0xff
00485F99  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00485F9C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00485F9F  25 FF 00 00 00            AND EAX,0xff
00485FA4  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00485FAB  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00485FAE  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00485FB5  0F 95 C2                  SETNZ DL
00485FB8  8B C2                     MOV EAX,EDX
00485FBA  EB 7A                     JMP 0x00486036
LAB_00485fbc:
00485FBC  3A C1                     CMP AL,CL
00485FBE  74 6B                     JZ 0x0048602b
00485FC0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00485FC3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00485FC6  25 FF 00 00 00            AND EAX,0xff
00485FCB  81 E1 FF 00 00 00         AND ECX,0xff
00485FD1  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00485FD8  84 D2                     TEST DL,DL
00485FDA  75 10                     JNZ 0x00485fec
00485FDC  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
00485FE3  75 07                     JNZ 0x00485fec
00485FE5  B8 FE FF FF FF            MOV EAX,0xfffffffe
00485FEA  EB 41                     JMP 0x0048602d
LAB_00485fec:
00485FEC  80 FA 01                  CMP DL,0x1
00485FEF  75 0F                     JNZ 0x00486000
00485FF1  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00485FF9  75 05                     JNZ 0x00486000
00485FFB  83 C8 FF                  OR EAX,0xffffffff
00485FFE  EB 2D                     JMP 0x0048602d
LAB_00486000:
00486000  84 D2                     TEST DL,DL
00486002  75 11                     JNZ 0x00486015
00486004  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0048600C  75 07                     JNZ 0x00486015
0048600E  B8 01 00 00 00            MOV EAX,0x1
00486013  EB 18                     JMP 0x0048602d
LAB_00486015:
00486015  80 FA 01                  CMP DL,0x1
00486018  75 11                     JNZ 0x0048602b
0048601A  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00486022  75 07                     JNZ 0x0048602b
00486024  B8 02 00 00 00            MOV EAX,0x2
00486029  EB 02                     JMP 0x0048602d
LAB_0048602b:
0048602B  33 C0                     XOR EAX,EAX
LAB_0048602d:
0048602D  33 C9                     XOR ECX,ECX
0048602F  85 C0                     TEST EAX,EAX
00486031  0F 9C C1                  SETL CL
00486034  8B C1                     MOV EAX,ECX
LAB_00486036:
00486036  83 F8 01                  CMP EAX,0x1
00486039  0F 84 FD 01 00 00         JZ 0x0048623c
0048603F  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
00486043  0F 85 61 FC FF FF         JNZ 0x00485caa
00486049  8B 17                     MOV EDX,dword ptr [EDI]
0048604B  83 FB 1B                  CMP EBX,0x1b
0048604E  8B CF                     MOV ECX,EDI
00486050  75 38                     JNZ 0x0048608a
00486052  FF 92 BC 00 00 00         CALL dword ptr [EDX + 0xbc]
00486058  83 F8 01                  CMP EAX,0x1
0048605B  75 0D                     JNZ 0x0048606a
0048605D  5F                        POP EDI
0048605E  5E                        POP ESI
0048605F  66 B8 1A 00               MOV AX,0x1a
00486063  5B                        POP EBX
00486064  8B E5                     MOV ESP,EBP
00486066  5D                        POP EBP
00486067  C2 10 00                  RET 0x10
LAB_0048606a:
0048606A  8B 07                     MOV EAX,dword ptr [EDI]
0048606C  8B CF                     MOV ECX,EDI
0048606E  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
00486074  83 F8 01                  CMP EAX,0x1
00486077  0F 85 2D FC FF FF         JNZ 0x00485caa
0048607D  5F                        POP EDI
0048607E  5E                        POP ESI
0048607F  66 B8 03 00               MOV AX,0x3
00486083  5B                        POP EBX
00486084  8B E5                     MOV ESP,EBP
00486086  5D                        POP EBP
00486087  C2 10 00                  RET 0x10
LAB_0048608a:
0048608A  FF 92 BC 00 00 00         CALL dword ptr [EDX + 0xbc]
00486090  83 F8 01                  CMP EAX,0x1
00486093  0F 85 CF FC FF FF         JNZ 0x00485d68
00486099  8B 07                     MOV EAX,dword ptr [EDI]
0048609B  8B CF                     MOV ECX,EDI
0048609D  FF 50 7C                  CALL dword ptr [EAX + 0x7c]
004860A0  83 F8 64                  CMP EAX,0x64
004860A3  0F 8D BF FC FF FF         JGE 0x00485d68
004860A9  5F                        POP EDI
004860AA  5E                        POP ESI
004860AB  66 B8 17 00               MOV AX,0x17
004860AF  5B                        POP EBX
004860B0  8B E5                     MOV ESP,EBP
004860B2  5D                        POP EBP
004860B3  C2 10 00                  RET 0x10
LAB_004860b6:
004860B6  8B 17                     MOV EDX,dword ptr [EDI]
004860B8  8B CF                     MOV ECX,EDI
004860BA  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004860BD  83 F8 38                  CMP EAX,0x38
004860C0  0F 84 49 01 00 00         JZ 0x0048620f
004860C6  8B 07                     MOV EAX,dword ptr [EDI]
004860C8  8B CF                     MOV ECX,EDI
004860CA  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004860CD  83 F8 39                  CMP EAX,0x39
004860D0  0F 84 39 01 00 00         JZ 0x0048620f
004860D6  8B 17                     MOV EDX,dword ptr [EDI]
004860D8  8B CF                     MOV ECX,EDI
004860DA  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004860DD  83 F8 4F                  CMP EAX,0x4f
004860E0  0F 84 29 01 00 00         JZ 0x0048620f
004860E6  8B 07                     MOV EAX,dword ptr [EDI]
004860E8  8B CF                     MOV ECX,EDI
004860EA  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004860ED  83 F8 5E                  CMP EAX,0x5e
004860F0  0F 84 19 01 00 00         JZ 0x0048620f
004860F6  8B 17                     MOV EDX,dword ptr [EDI]
004860F8  8B CF                     MOV ECX,EDI
004860FA  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004860FD  83 F8 3B                  CMP EAX,0x3b
00486100  74 0C                     JZ 0x0048610e
00486102  8B 07                     MOV EAX,dword ptr [EDI]
00486104  8B CF                     MOV ECX,EDI
00486106  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00486109  83 F8 60                  CMP EAX,0x60
0048610C  75 31                     JNZ 0x0048613f
LAB_0048610e:
0048610E  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00486111  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00486114  3B C8                     CMP ECX,EAX
00486116  75 27                     JNZ 0x0048613f
00486118  8B 96 DA 07 00 00         MOV EDX,dword ptr [ESI + 0x7da]
0048611E  8B 9E D6 07 00 00         MOV EBX,dword ptr [ESI + 0x7d6]
00486124  8B 8E D2 07 00 00         MOV ECX,dword ptr [ESI + 0x7d2]
0048612A  03 D3                     ADD EDX,EBX
0048612C  03 D1                     ADD EDX,ECX
0048612E  85 D2                     TEST EDX,EDX
00486130  7E 0D                     JLE 0x0048613f
00486132  5F                        POP EDI
00486133  5E                        POP ESI
00486134  66 B8 13 00               MOV AX,0x13
00486138  5B                        POP EBX
00486139  8B E5                     MOV ESP,EBP
0048613B  5D                        POP EBP
0048613C  C2 10 00                  RET 0x10
LAB_0048613f:
0048613F  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00486145  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00486148  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0048614B  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
0048614E  84 D2                     TEST DL,DL
00486150  88 4D 08                  MOV byte ptr [EBP + 0x8],CL
00486153  74 30                     JZ 0x00486185
00486155  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00486158  25 FF 00 00 00            AND EAX,0xff
0048615D  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00486160  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_00486163:
00486163  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0048616A  25 FF 00 00 00            AND EAX,0xff
0048616F  33 D2                     XOR EDX,EDX
00486171  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00486174  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0048617B  0F 95 C2                  SETNZ DL
0048617E  8B C2                     MOV EAX,EDX
00486180  E9 D0 FB FF FF            JMP 0x00485d55
LAB_00486185:
00486185  3A C1                     CMP AL,CL
00486187  0F 84 BD FB FF FF         JZ 0x00485d4a
0048618D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00486190  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00486193  25 FF 00 00 00            AND EAX,0xff
00486198  81 E1 FF 00 00 00         AND ECX,0xff
0048619E  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
004861A5  84 D2                     TEST DL,DL
004861A7  75 15                     JNZ 0x004861be
004861A9  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
004861B0  84 DB                     TEST BL,BL
004861B2  75 0A                     JNZ 0x004861be
004861B4  B8 FE FF FF FF            MOV EAX,0xfffffffe
004861B9  E9 8E FB FF FF            JMP 0x00485d4c
LAB_004861be:
004861BE  80 FA 01                  CMP DL,0x1
004861C1  75 13                     JNZ 0x004861d6
004861C3  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
004861CA  84 DB                     TEST BL,BL
004861CC  75 08                     JNZ 0x004861d6
004861CE  83 C8 FF                  OR EAX,0xffffffff
004861D1  E9 76 FB FF FF            JMP 0x00485d4c
LAB_004861d6:
004861D6  84 D2                     TEST DL,DL
004861D8  75 14                     JNZ 0x004861ee
004861DA  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004861E2  75 0A                     JNZ 0x004861ee
004861E4  B8 01 00 00 00            MOV EAX,0x1
004861E9  E9 5E FB FF FF            JMP 0x00485d4c
LAB_004861ee:
004861EE  80 FA 01                  CMP DL,0x1
004861F1  0F 85 53 FB FF FF         JNZ 0x00485d4a
004861F7  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004861FF  0F 85 45 FB FF FF         JNZ 0x00485d4a
00486205  B8 02 00 00 00            MOV EAX,0x2
0048620A  E9 3D FB FF FF            JMP 0x00485d4c
LAB_0048620f:
0048620F  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00486212  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00486215  3B C8                     CMP ECX,EAX
00486217  75 23                     JNZ 0x0048623c
00486219  8B 17                     MOV EDX,dword ptr [EDI]
0048621B  8D 45 F4                  LEA EAX,[EBP + -0xc]
0048621E  50                        PUSH EAX
0048621F  8B CF                     MOV ECX,EDI
00486221  FF 92 88 00 00 00         CALL dword ptr [EDX + 0x88]
00486227  85 C0                     TEST EAX,EAX
00486229  0F 8E 3B FD FF FF         JLE 0x00485f6a
0048622F  5F                        POP EDI
00486230  5E                        POP ESI
00486231  66 B8 12 00               MOV AX,0x12
00486235  5B                        POP EBX
00486236  8B E5                     MOV ESP,EBP
00486238  5D                        POP EBP
00486239  C2 10 00                  RET 0x10
switchD_0048462b::caseD_1:
0048623C  5F                        POP EDI
0048623D  5E                        POP ESI
0048623E  66 33 C0                  XOR AX,AX
00486241  5B                        POP EBX
00486242  8B E5                     MOV ESP,EBP
00486244  5D                        POP EBP
00486245  C2 10 00                  RET 0x10
