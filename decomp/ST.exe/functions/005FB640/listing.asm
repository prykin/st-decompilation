STContainerC::GetMessage:
005FB640  55                        PUSH EBP
005FB641  8B EC                     MOV EBP,ESP
005FB643  83 EC 5C                  SUB ESP,0x5c
005FB646  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FB649  53                        PUSH EBX
005FB64A  56                        PUSH ESI
005FB64B  57                        PUSH EDI
005FB64C  50                        PUSH EAX
005FB64D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005FB650  E8 B2 98 E0 FF            CALL 0x00404f07
005FB655  3D FF FF 00 00            CMP EAX,0xffff
005FB65A  0F 84 42 0A 00 00         JZ 0x005fc0a2
005FB660  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005FB666  8D 45 A8                  LEA EAX,[EBP + -0x58]
005FB669  8D 55 A4                  LEA EDX,[EBP + -0x5c]
005FB66C  6A 00                     PUSH 0x0
005FB66E  50                        PUSH EAX
005FB66F  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
005FB672  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005FB678  E8 73 21 13 00            CALL 0x0072d7f0
005FB67D  8B F0                     MOV ESI,EAX
005FB67F  83 C4 08                  ADD ESP,0x8
005FB682  85 F6                     TEST ESI,ESI
005FB684  0F 85 D9 09 00 00         JNZ 0x005fc063
005FB68A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005FB68D  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
005FB690  3D 10 01 00 00            CMP EAX,0x110
005FB695  0F 87 57 06 00 00         JA 0x005fbcf2
005FB69B  0F 84 DA 05 00 00         JZ 0x005fbc7b
005FB6A1  83 F8 03                  CMP EAX,0x3
005FB6A4  0F 87 58 05 00 00         JA 0x005fbc02
005FB6AA  0F 84 BB 04 00 00         JZ 0x005fbb6b
005FB6B0  2B C6                     SUB EAX,ESI
005FB6B2  0F 84 EB 03 00 00         JZ 0x005fbaa3
005FB6B8  83 E8 02                  SUB EAX,0x2
005FB6BB  0F 85 8E 09 00 00         JNZ 0x005fc04f
005FB6C1  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
005FB6C4  83 78 0C 02               CMP dword ptr [EAX + 0xc],0x2
005FB6C8  0F 84 C2 01 00 00         JZ 0x005fb890
005FB6CE  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005FB6D1  B9 55 00 00 00            MOV ECX,0x55
005FB6D6  8B F0                     MOV ESI,EAX
005FB6D8  8D BB 26 03 00 00         LEA EDI,[EBX + 0x326]
005FB6DE  F3 A5                     MOVSD.REP ES:EDI,ESI
005FB6E0  A4                        MOVSB ES:EDI,ESI
005FB6E1  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005FB6E4  85 C9                     TEST ECX,ECX
005FB6E6  75 69                     JNZ 0x005fb751
005FB6E8  0F BF 8B 4E 03 00 00      MOVSX ECX,word ptr [EBX + 0x34e]
005FB6EF  89 8B 6F 04 00 00         MOV dword ptr [EBX + 0x46f],ECX
005FB6F5  0F BF 93 50 03 00 00      MOVSX EDX,word ptr [EBX + 0x350]
005FB6FC  89 93 73 04 00 00         MOV dword ptr [EBX + 0x473],EDX
005FB702  0F BF 83 52 03 00 00      MOVSX EAX,word ptr [EBX + 0x352]
005FB709  89 83 77 04 00 00         MOV dword ptr [EBX + 0x477],EAX
005FB70F  66 8B 8B 4E 03 00 00      MOV CX,word ptr [EBX + 0x34e]
005FB716  66 69 C9 C9 00            IMUL CX,CX,0xc9
005FB71B  83 C1 64                  ADD ECX,0x64
005FB71E  66 89 8B 4E 03 00 00      MOV word ptr [EBX + 0x34e],CX
005FB725  66 8B 93 50 03 00 00      MOV DX,word ptr [EBX + 0x350]
005FB72C  66 69 D2 C9 00            IMUL DX,DX,0xc9
005FB731  83 C2 64                  ADD EDX,0x64
005FB734  66 89 93 50 03 00 00      MOV word ptr [EBX + 0x350],DX
005FB73B  66 8B 83 52 03 00 00      MOV AX,word ptr [EBX + 0x352]
005FB742  66 69 C0 C8 00            IMUL AX,AX,0xc8
005FB747  83 C0 64                  ADD EAX,0x64
005FB74A  66 89 83 52 03 00 00      MOV word ptr [EBX + 0x352],AX
LAB_005fb751:
005FB751  8B CB                     MOV ECX,EBX
005FB753  E8 8B 7F E0 FF            CALL 0x004036e3
005FB758  85 C0                     TEST EAX,EAX
005FB75A  75 1B                     JNZ 0x005fb777
005FB75C  8B CB                     MOV ECX,EBX
005FB75E  E8 1A 90 E0 FF            CALL 0x0040477d
005FB763  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FB766  33 C0                     XOR EAX,EAX
005FB768  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FB76E  5F                        POP EDI
005FB76F  5E                        POP ESI
005FB770  5B                        POP EBX
005FB771  8B E5                     MOV ESP,EBP
005FB773  5D                        POP EBP
005FB774  C2 04 00                  RET 0x4
LAB_005fb777:
005FB777  6A 00                     PUSH 0x0
005FB779  6A 00                     PUSH 0x0
005FB77B  8B CB                     MOV ECX,EBX
005FB77D  E8 AB 67 E0 FF            CALL 0x00401f2d
005FB782  8B 83 58 03 00 00         MOV EAX,dword ptr [EBX + 0x358]
005FB788  BE 01 00 00 00            MOV ESI,0x1
005FB78D  85 C0                     TEST EAX,EAX
005FB78F  74 3E                     JZ 0x005fb7cf
005FB791  66 39 B3 42 03 00 00      CMP word ptr [EBX + 0x342],SI
005FB798  75 35                     JNZ 0x005fb7cf
005FB79A  8D 4D EC                  LEA ECX,[EBP + -0x14]
005FB79D  51                        PUSH ECX
005FB79E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005FB7A4  50                        PUSH EAX
005FB7A5  E8 26 AB 0E 00            CALL 0x006e62d0
005FB7AA  83 F8 FC                  CMP EAX,-0x4
005FB7AD  74 20                     JZ 0x005fb7cf
005FB7AF  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
005FB7B5  85 C9                     TEST ECX,ECX
005FB7B7  74 16                     JZ 0x005fb7cf
005FB7B9  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005FB7BC  8B 82 ED 01 00 00         MOV EAX,dword ptr [EDX + 0x1ed]
005FB7C2  8B 93 ED 01 00 00         MOV EDX,dword ptr [EBX + 0x1ed]
005FB7C8  50                        PUSH EAX
005FB7C9  52                        PUSH EDX
005FB7CA  E8 91 EC 0E 00            CALL 0x006ea460
LAB_005fb7cf:
005FB7CF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005FB7D5  85 C9                     TEST ECX,ECX
005FB7D7  74 38                     JZ 0x005fb811
005FB7D9  53                        PUSH EBX
005FB7DA  68 FF FF 00 00            PUSH 0xffff
005FB7DF  E8 B0 5A E0 FF            CALL 0x00401294
005FB7E4  85 C0                     TEST EAX,EAX
005FB7E6  74 1B                     JZ 0x005fb803
005FB7E8  8B CB                     MOV ECX,EBX
005FB7EA  E8 8E 8F E0 FF            CALL 0x0040477d
005FB7EF  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FB7F2  33 C0                     XOR EAX,EAX
005FB7F4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FB7FA  5F                        POP EDI
005FB7FB  5E                        POP ESI
005FB7FC  5B                        POP EBX
005FB7FD  8B E5                     MOV ESP,EBP
005FB7FF  5D                        POP EBP
005FB800  C2 04 00                  RET 0x4
LAB_005fb803:
005FB803  8B CB                     MOV ECX,EBX
005FB805  C6 83 E4 02 00 00 01      MOV byte ptr [EBX + 0x2e4],0x1
005FB80C  E8 79 69 E0 FF            CALL 0x0040218a
LAB_005fb811:
005FB811  8B 83 42 03 00 00         MOV EAX,dword ptr [EBX + 0x342]
005FB817  C1 E8 10                  SHR EAX,0x10
005FB81A  83 E8 03                  SUB EAX,0x3
005FB81D  74 33                     JZ 0x005fb852
005FB81F  83 E8 02                  SUB EAX,0x2
005FB822  0F 85 27 08 00 00         JNZ 0x005fc04f
005FB828  A1 24 67 80 00            MOV EAX,[0x00806724]
005FB82D  0F BF 48 23               MOVSX ECX,word ptr [EAX + 0x23]
005FB831  49                        DEC ECX
005FB832  33 C0                     XOR EAX,EAX
005FB834  89 8B D2 02 00 00         MOV dword ptr [EBX + 0x2d2],ECX
005FB83A  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FB83D  89 B3 B5 02 00 00         MOV dword ptr [EBX + 0x2b5],ESI
005FB843  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FB849  5F                        POP EDI
005FB84A  5E                        POP ESI
005FB84B  5B                        POP EBX
005FB84C  8B E5                     MOV ESP,EBP
005FB84E  5D                        POP EBP
005FB84F  C2 04 00                  RET 0x4
LAB_005fb852:
005FB852  0F BF 93 52 03 00 00      MOVSX EDX,word ptr [EBX + 0x352]
005FB859  0F BF 83 50 03 00 00      MOVSX EAX,word ptr [EBX + 0x350]
005FB860  0F BF 8B 4E 03 00 00      MOVSX ECX,word ptr [EBX + 0x34e]
005FB867  6A 13                     PUSH 0x13
005FB869  52                        PUSH EDX
005FB86A  8B 93 ED 01 00 00         MOV EDX,dword ptr [EBX + 0x1ed]
005FB870  50                        PUSH EAX
005FB871  51                        PUSH ECX
005FB872  56                        PUSH ESI
005FB873  52                        PUSH EDX
005FB874  E8 2C 99 E0 FF            CALL 0x004051a5
005FB879  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FB87C  83 C4 18                  ADD ESP,0x18
005FB87F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FB885  33 C0                     XOR EAX,EAX
005FB887  5F                        POP EDI
005FB888  5E                        POP ESI
005FB889  5B                        POP EBX
005FB88A  8B E5                     MOV ESP,EBP
005FB88C  5D                        POP EBP
005FB88D  C2 04 00                  RET 0x4
LAB_005fb890:
005FB890  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005FB893  50                        PUSH EAX
005FB894  8B CE                     MOV ECX,ESI
005FB896  E8 81 77 E0 FF            CALL 0x0040301c
005FB89B  85 C0                     TEST EAX,EAX
005FB89D  0F 8C AC 07 00 00         JL 0x005fc04f
005FB8A3  8A 86 52 02 00 00         MOV AL,byte ptr [ESI + 0x252]
005FB8A9  84 C0                     TEST AL,AL
005FB8AB  0F 86 A6 01 00 00         JBE 0x005fba57
005FB8B1  0F BF 86 42 02 00 00      MOVSX EAX,word ptr [ESI + 0x242]
005FB8B8  0F BF 96 44 02 00 00      MOVSX EDX,word ptr [ESI + 0x244]
005FB8BF  0F BF 8E 46 02 00 00      MOVSX ECX,word ptr [ESI + 0x246]
005FB8C6  BB 01 00 00 00            MOV EBX,0x1
005FB8CB  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
005FB8CE  66 85 C0                  TEST AX,AX
005FB8D1  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
005FB8D4  7C 57                     JL 0x005fb92d
005FB8D6  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
005FB8DD  7D 4E                     JGE 0x005fb92d
005FB8DF  66 85 D2                  TEST DX,DX
005FB8E2  7C 49                     JL 0x005fb92d
005FB8E4  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005FB8EB  7D 40                     JGE 0x005fb92d
005FB8ED  66 85 C9                  TEST CX,CX
005FB8F0  7C 3B                     JL 0x005fb92d
005FB8F2  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005FB8F9  7D 32                     JGE 0x005fb92d
005FB8FB  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
005FB902  0F BF D9                  MOVSX EBX,CX
005FB905  0F AF FB                  IMUL EDI,EBX
005FB908  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
005FB90F  0F BF D2                  MOVSX EDX,DX
005FB912  0F AF DA                  IMUL EBX,EDX
005FB915  0F BF D0                  MOVSX EDX,AX
005FB918  03 FB                     ADD EDI,EBX
005FB91A  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005FB91D  03 FA                     ADD EDI,EDX
005FB91F  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005FB925  8B 3C FA                  MOV EDI,dword ptr [EDX + EDI*0x8]
005FB928  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005FB92B  EB 02                     JMP 0x005fb92f
LAB_005fb92d:
005FB92D  33 FF                     XOR EDI,EDI
LAB_005fb92f:
005FB92F  85 FF                     TEST EDI,EDI
005FB931  75 21                     JNZ 0x005fb954
005FB933  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
005FB936  57                        PUSH EDI
005FB937  56                        PUSH ESI
005FB938  6A 00                     PUSH 0x0
005FB93A  51                        PUSH ECX
005FB93B  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005FB941  52                        PUSH EDX
005FB942  50                        PUSH EAX
005FB943  E8 DD 59 E0 FF            CALL 0x00401325
005FB948  85 C0                     TEST EAX,EAX
005FB94A  75 08                     JNZ 0x005fb954
005FB94C  FE 86 52 02 00 00         INC byte ptr [ESI + 0x252]
005FB952  EB 02                     JMP 0x005fb956
LAB_005fb954:
005FB954  33 DB                     XOR EBX,EBX
LAB_005fb956:
005FB956  85 DB                     TEST EBX,EBX
005FB958  75 1B                     JNZ 0x005fb975
005FB95A  8B CE                     MOV ECX,ESI
005FB95C  E8 1C 8E E0 FF            CALL 0x0040477d
005FB961  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FB964  33 C0                     XOR EAX,EAX
005FB966  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FB96C  5F                        POP EDI
005FB96D  5E                        POP ESI
005FB96E  5B                        POP EBX
005FB96F  8B E5                     MOV ESP,EBP
005FB971  5D                        POP EBP
005FB972  C2 04 00                  RET 0x4
LAB_005fb975:
005FB975  8A 8E 52 02 00 00         MOV CL,byte ptr [ESI + 0x252]
005FB97B  FE C9                     DEC CL
005FB97D  8A C1                     MOV AL,CL
005FB97F  88 8E 52 02 00 00         MOV byte ptr [ESI + 0x252],CL
005FB985  3C 01                     CMP AL,0x1
005FB987  0F 86 CA 00 00 00         JBE 0x005fba57
005FB98D  0F BF 86 48 02 00 00      MOVSX EAX,word ptr [ESI + 0x248]
005FB994  0F BF 96 4A 02 00 00      MOVSX EDX,word ptr [ESI + 0x24a]
005FB99B  0F BF 8E 4C 02 00 00      MOVSX ECX,word ptr [ESI + 0x24c]
005FB9A2  BB 01 00 00 00            MOV EBX,0x1
005FB9A7  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005FB9AA  66 85 C0                  TEST AX,AX
005FB9AD  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
005FB9B0  7C 57                     JL 0x005fba09
005FB9B2  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
005FB9B9  7D 4E                     JGE 0x005fba09
005FB9BB  66 85 D2                  TEST DX,DX
005FB9BE  7C 49                     JL 0x005fba09
005FB9C0  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005FB9C7  7D 40                     JGE 0x005fba09
005FB9C9  66 85 C9                  TEST CX,CX
005FB9CC  7C 3B                     JL 0x005fba09
005FB9CE  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005FB9D5  7D 32                     JGE 0x005fba09
005FB9D7  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
005FB9DE  0F BF D9                  MOVSX EBX,CX
005FB9E1  0F AF FB                  IMUL EDI,EBX
005FB9E4  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
005FB9EB  0F BF D2                  MOVSX EDX,DX
005FB9EE  0F AF DA                  IMUL EBX,EDX
005FB9F1  0F BF D0                  MOVSX EDX,AX
005FB9F4  03 FB                     ADD EDI,EBX
005FB9F6  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
005FB9F9  03 FA                     ADD EDI,EDX
005FB9FB  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005FBA01  8B 3C FA                  MOV EDI,dword ptr [EDX + EDI*0x8]
005FBA04  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005FBA07  EB 02                     JMP 0x005fba0b
LAB_005fba09:
005FBA09  33 FF                     XOR EDI,EDI
LAB_005fba0b:
005FBA0B  85 FF                     TEST EDI,EDI
005FBA0D  75 21                     JNZ 0x005fba30
005FBA0F  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
005FBA12  57                        PUSH EDI
005FBA13  56                        PUSH ESI
005FBA14  6A 00                     PUSH 0x0
005FBA16  51                        PUSH ECX
005FBA17  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005FBA1D  52                        PUSH EDX
005FBA1E  50                        PUSH EAX
005FBA1F  E8 01 59 E0 FF            CALL 0x00401325
005FBA24  85 C0                     TEST EAX,EAX
005FBA26  75 08                     JNZ 0x005fba30
005FBA28  FE 86 52 02 00 00         INC byte ptr [ESI + 0x252]
005FBA2E  EB 02                     JMP 0x005fba32
LAB_005fba30:
005FBA30  33 DB                     XOR EBX,EBX
LAB_005fba32:
005FBA32  85 DB                     TEST EBX,EBX
005FBA34  75 1B                     JNZ 0x005fba51
005FBA36  8B CE                     MOV ECX,ESI
005FBA38  E8 40 8D E0 FF            CALL 0x0040477d
005FBA3D  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FBA40  33 C0                     XOR EAX,EAX
005FBA42  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FBA48  5F                        POP EDI
005FBA49  5E                        POP ESI
005FBA4A  5B                        POP EBX
005FBA4B  8B E5                     MOV ESP,EBP
005FBA4D  5D                        POP EBP
005FBA4E  C2 04 00                  RET 0x4
LAB_005fba51:
005FBA51  FE 8E 52 02 00 00         DEC byte ptr [ESI + 0x252]
LAB_005fba57:
005FBA57  8B CE                     MOV ECX,ESI
005FBA59  E8 A5 8E E0 FF            CALL 0x00404903
005FBA5E  6A 00                     PUSH 0x0
005FBA60  8B CE                     MOV ECX,ESI
005FBA62  E8 A7 60 E0 FF            CALL 0x00401b0e
005FBA67  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005FBA6D  85 C9                     TEST ECX,ECX
005FBA6F  0F 84 DA 05 00 00         JZ 0x005fc04f
005FBA75  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
005FBA79  56                        PUSH ESI
005FBA7A  50                        PUSH EAX
005FBA7B  E8 14 58 E0 FF            CALL 0x00401294
005FBA80  85 C0                     TEST EAX,EAX
005FBA82  0F 84 C7 05 00 00         JZ 0x005fc04f
005FBA88  8B CE                     MOV ECX,ESI
005FBA8A  E8 EE 8C E0 FF            CALL 0x0040477d
005FBA8F  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FBA92  33 C0                     XOR EAX,EAX
005FBA94  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FBA9A  5F                        POP EDI
005FBA9B  5E                        POP ESI
005FBA9C  5B                        POP EBX
005FBA9D  8B E5                     MOV ESP,EBP
005FBA9F  5D                        POP EBP
005FBAA0  C2 04 00                  RET 0x4
LAB_005fbaa3:
005FBAA3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005FBAA6  BF 06 00 00 00            MOV EDI,0x6
005FBAAB  8B CE                     MOV ECX,ESI
005FBAAD  39 BE 3A 02 00 00         CMP dword ptr [ESI + 0x23a],EDI
005FBAB3  75 19                     JNZ 0x005fbace
005FBAB5  E8 C3 8C E0 FF            CALL 0x0040477d
005FBABA  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FBABD  33 C0                     XOR EAX,EAX
005FBABF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FBAC5  5F                        POP EDI
005FBAC6  5E                        POP ESI
005FBAC7  5B                        POP EBX
005FBAC8  8B E5                     MOV ESP,EBP
005FBACA  5D                        POP EBP
005FBACB  C2 04 00                  RET 0x4
LAB_005fbace:
005FBACE  E8 16 A3 E0 FF            CALL 0x00405de9
005FBAD3  84 C0                     TEST AL,AL
005FBAD5  88 86 DE 02 00 00         MOV byte ptr [ESI + 0x2de],AL
005FBADB  74 67                     JZ 0x005fbb44
005FBADD  8B 8E 77 02 00 00         MOV ECX,dword ptr [ESI + 0x277]
005FBAE3  8B 96 7B 02 00 00         MOV EDX,dword ptr [ESI + 0x27b]
005FBAE9  8B 86 7F 02 00 00         MOV EAX,dword ptr [ESI + 0x27f]
005FBAEF  89 8E BE 02 00 00         MOV dword ptr [ESI + 0x2be],ECX
005FBAF5  8B CE                     MOV ECX,ESI
005FBAF7  89 96 C2 02 00 00         MOV dword ptr [ESI + 0x2c2],EDX
005FBAFD  89 86 C6 02 00 00         MOV dword ptr [ESI + 0x2c6],EAX
005FBB03  E8 8E 55 E0 FF            CALL 0x00401096
005FBB08  8B 86 D2 02 00 00         MOV EAX,dword ptr [ESI + 0x2d2]
005FBB0E  85 C0                     TEST EAX,EAX
005FBB10  7C 15                     JL 0x005fbb27
005FBB12  8B CE                     MOV ECX,ESI
005FBB14  E8 CC A1 E0 FF            CALL 0x00405ce5
005FBB19  85 C0                     TEST EAX,EAX
005FBB1B  74 0A                     JZ 0x005fbb27
005FBB1D  C7 86 D2 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x2d2],0xffffffff
LAB_005fbb27:
005FBB27  6A 00                     PUSH 0x0
005FBB29  8B CE                     MOV ECX,ESI
005FBB2B  E8 DE 5F E0 FF            CALL 0x00401b0e
005FBB30  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FBB33  33 C0                     XOR EAX,EAX
005FBB35  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FBB3B  5F                        POP EDI
005FBB3C  5E                        POP ESI
005FBB3D  5B                        POP EBX
005FBB3E  8B E5                     MOV ESP,EBP
005FBB40  5D                        POP EBP
005FBB41  C2 04 00                  RET 0x4
LAB_005fbb44:
005FBB44  39 BE 3A 02 00 00         CMP dword ptr [ESI + 0x23a],EDI
005FBB4A  0F 85 FF 04 00 00         JNZ 0x005fc04f
005FBB50  8B CE                     MOV ECX,ESI
005FBB52  E8 26 8C E0 FF            CALL 0x0040477d
005FBB57  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FBB5A  33 C0                     XOR EAX,EAX
005FBB5C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FBB62  5F                        POP EDI
005FBB63  5E                        POP ESI
005FBB64  5B                        POP EBX
005FBB65  8B E5                     MOV ESP,EBP
005FBB67  5D                        POP EBP
005FBB68  C2 04 00                  RET 0x4
LAB_005fbb6b:
005FBB6B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005FBB6E  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
005FBB71  0F BF 86 46 02 00 00      MOVSX EAX,word ptr [ESI + 0x246]
005FBB78  0F BF 8E 44 02 00 00      MOVSX ECX,word ptr [ESI + 0x244]
005FBB7F  0F BF 96 42 02 00 00      MOVSX EDX,word ptr [ESI + 0x242]
005FBB86  57                        PUSH EDI
005FBB87  56                        PUSH ESI
005FBB88  6A 00                     PUSH 0x0
005FBB8A  50                        PUSH EAX
005FBB8B  51                        PUSH ECX
005FBB8C  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005FBB92  52                        PUSH EDX
005FBB93  E8 29 93 E0 FF            CALL 0x00404ec1
005FBB98  85 C0                     TEST EAX,EAX
005FBB9A  75 06                     JNZ 0x005fbba2
005FBB9C  FE 8E 52 02 00 00         DEC byte ptr [ESI + 0x252]
LAB_005fbba2:
005FBBA2  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005FBBA8  E8 28 66 E0 FF            CALL 0x004021d5
005FBBAD  8A 86 E4 02 00 00         MOV AL,byte ptr [ESI + 0x2e4]
005FBBB3  84 C0                     TEST AL,AL
005FBBB5  0F 84 94 04 00 00         JZ 0x005fc04f
005FBBBB  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
005FBBC0  85 C0                     TEST EAX,EAX
005FBBC2  0F 84 87 04 00 00         JZ 0x005fc04f
005FBBC8  80 BE 50 02 00 00 03      CMP byte ptr [ESI + 0x250],0x3
005FBBCF  74 07                     JZ 0x005fbbd8
005FBBD1  8B CE                     MOV ECX,ESI
005FBBD3  E8 22 5F E0 FF            CALL 0x00401afa
LAB_005fbbd8:
005FBBD8  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
005FBBDC  68 FE 00 00 00            PUSH 0xfe
005FBBE1  56                        PUSH ESI
005FBBE2  51                        PUSH ECX
005FBBE3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005FBBE9  E8 76 63 E0 FF            CALL 0x00401f64
005FBBEE  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FBBF1  33 C0                     XOR EAX,EAX
005FBBF3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FBBF9  5F                        POP EDI
005FBBFA  5E                        POP ESI
005FBBFB  5B                        POP EBX
005FBBFC  8B E5                     MOV ESP,EBP
005FBBFE  5D                        POP EBP
005FBBFF  C2 04 00                  RET 0x4
LAB_005fbc02:
005FBC02  2D 08 01 00 00            SUB EAX,0x108
005FBC07  74 4B                     JZ 0x005fbc54
005FBC09  83 E8 07                  SUB EAX,0x7
005FBC0C  0F 85 3D 04 00 00         JNZ 0x005fc04f
005FBC12  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005FBC15  8D 55 F4                  LEA EDX,[EBP + -0xc]
005FBC18  52                        PUSH EDX
005FBC19  8B CE                     MOV ECX,ESI
005FBC1B  E8 14 9D E0 FF            CALL 0x00405934
005FBC20  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005FBC23  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005FBC26  51                        PUSH ECX
005FBC27  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005FBC2D  50                        PUSH EAX
005FBC2E  52                        PUSH EDX
005FBC2F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005FBC32  E8 C2 69 E0 FF            CALL 0x004025f9
005FBC37  8D 45 F0                  LEA EAX,[EBP + -0x10]
005FBC3A  50                        PUSH EAX
005FBC3B  E8 20 F4 0A 00            CALL 0x006ab060
005FBC40  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FBC43  33 C0                     XOR EAX,EAX
005FBC45  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FBC4B  5F                        POP EDI
005FBC4C  5E                        POP ESI
005FBC4D  5B                        POP EBX
005FBC4E  8B E5                     MOV ESP,EBP
005FBC50  5D                        POP EBP
005FBC51  C2 04 00                  RET 0x4
LAB_005fbc54:
005FBC54  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005FBC57  8B CE                     MOV ECX,ESI
005FBC59  E8 A5 8C E0 FF            CALL 0x00404903
005FBC5E  6A 00                     PUSH 0x0
005FBC60  8B CE                     MOV ECX,ESI
005FBC62  E8 A7 5E E0 FF            CALL 0x00401b0e
005FBC67  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FBC6A  33 C0                     XOR EAX,EAX
005FBC6C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FBC72  5F                        POP EDI
005FBC73  5E                        POP ESI
005FBC74  5B                        POP EBX
005FBC75  8B E5                     MOV ESP,EBP
005FBC77  5D                        POP EBP
005FBC78  C2 04 00                  RET 0x4
LAB_005fbc7b:
005FBC7B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005FBC7E  8B 79 14                  MOV EDI,dword ptr [ECX + 0x14]
005FBC81  8B 86 3A 02 00 00         MOV EAX,dword ptr [ESI + 0x23a]
005FBC87  83 F8 05                  CMP EAX,0x5
005FBC8A  0F 84 BF 03 00 00         JZ 0x005fc04f
005FBC90  83 F8 06                  CMP EAX,0x6
005FBC93  0F 84 B6 03 00 00         JZ 0x005fc04f
005FBC99  8B 07                     MOV EAX,dword ptr [EDI]
005FBC9B  8B 16                     MOV EDX,dword ptr [ESI]
005FBC9D  50                        PUSH EAX
005FBC9E  8B CE                     MOV ECX,ESI
005FBCA0  FF 92 24 01 00 00         CALL dword ptr [EDX + 0x124]
005FBCA6  85 C0                     TEST EAX,EAX
005FBCA8  0F 84 A1 03 00 00         JZ 0x005fc04f
005FBCAE  6A 00                     PUSH 0x0
005FBCB0  6A 01                     PUSH 0x1
005FBCB2  8B CE                     MOV ECX,ESI
005FBCB4  E8 74 62 E0 FF            CALL 0x00401f2d
005FBCB9  8A 4F 08                  MOV CL,byte ptr [EDI + 0x8]
005FBCBC  33 C0                     XOR EAX,EAX
005FBCBE  88 8E 0E 03 00 00         MOV byte ptr [ESI + 0x30e],CL
005FBCC4  66 8B 57 0C               MOV DX,word ptr [EDI + 0xc]
005FBCC8  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FBCCB  66 89 96 0F 03 00 00      MOV word ptr [ESI + 0x30f],DX
005FBCD2  C6 86 0D 03 00 00 01      MOV byte ptr [ESI + 0x30d],0x1
005FBCD9  C7 86 3A 02 00 00 05 00 00 00  MOV dword ptr [ESI + 0x23a],0x5
005FBCE3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FBCE9  5F                        POP EDI
005FBCEA  5E                        POP ESI
005FBCEB  5B                        POP EBX
005FBCEC  8B E5                     MOV ESP,EBP
005FBCEE  5D                        POP EBP
005FBCEF  C2 04 00                  RET 0x4
LAB_005fbcf2:
005FBCF2  05 EE FE FF FF            ADD EAX,0xfffffeee
005FBCF7  83 F8 17                  CMP EAX,0x17
005FBCFA  0F 87 4F 03 00 00         JA 0x005fc04f
005FBD00  33 D2                     XOR EDX,EDX
005FBD02  8A 90 C4 C0 5F 00         MOV DL,byte ptr [EAX + 0x5fc0c4]
switchD_005fbd08::switchD:
005FBD08  FF 24 95 B0 C0 5F 00      JMP dword ptr [EDX*0x4 + 0x5fc0b0]
switchD_005fbd08::caseD_128:
005FBD0F  8B 79 14                  MOV EDI,dword ptr [ECX + 0x14]
005FBD12  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005FBD15  8A 47 18                  MOV AL,byte ptr [EDI + 0x18]
005FBD18  88 86 15 03 00 00         MOV byte ptr [ESI + 0x315],AL
005FBD1E  8A 86 4E 02 00 00         MOV AL,byte ptr [ESI + 0x24e]
005FBD24  84 C0                     TEST AL,AL
005FBD26  74 4B                     JZ 0x005fbd73
005FBD28  66 8B 86 AB 02 00 00      MOV AX,word ptr [ESI + 0x2ab]
005FBD2F  66 3D FF FF               CMP AX,0xffff
005FBD33  74 3E                     JZ 0x005fbd73
005FBD35  8B 9E AD 02 00 00         MOV EBX,dword ptr [ESI + 0x2ad]
005FBD3B  85 DB                     TEST EBX,EBX
005FBD3D  75 1B                     JNZ 0x005fbd5a
005FBD3F  8A 8E A3 02 00 00         MOV CL,byte ptr [ESI + 0x2a3]
005FBD45  6A 01                     PUSH 0x1
005FBD47  50                        PUSH EAX
005FBD48  51                        PUSH ECX
005FBD49  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005FBD4F  E8 66 6B E0 FF            CALL 0x004028ba
005FBD54  8B D8                     MOV EBX,EAX
005FBD56  85 DB                     TEST EBX,EBX
005FBD58  74 19                     JZ 0x005fbd73
LAB_005fbd5a:
005FBD5A  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005FBD5D  8B CB                     MOV ECX,EBX
005FBD5F  52                        PUSH EDX
005FBD60  E8 08 6D E0 FF            CALL 0x00402a6d
005FBD65  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
005FBD68  8B 06                     MOV EAX,dword ptr [ESI]
005FBD6A  51                        PUSH ECX
005FBD6B  8B CE                     MOV ECX,ESI
005FBD6D  FF 90 AC 00 00 00         CALL dword ptr [EAX + 0xac]
LAB_005fbd73:
005FBD73  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
005FBD76  83 C0 FE                  ADD EAX,-0x2
005FBD79  83 F8 03                  CMP EAX,0x3
005FBD7C  0F 87 29 01 00 00         JA 0x005fbeab
switchD_005fbd82::switchD:
005FBD82  FF 24 85 DC C0 5F 00      JMP dword ptr [EAX*0x4 + 0x5fc0dc]
switchD_005fbd82::caseD_2:
005FBD89  8B 16                     MOV EDX,dword ptr [ESI]
005FBD8B  68 20 4E 00 00            PUSH 0x4e20
005FBD90  8B CE                     MOV ECX,ESI
005FBD92  FF 92 24 01 00 00         CALL dword ptr [EDX + 0x124]
005FBD98  85 C0                     TEST EAX,EAX
005FBD9A  0F 84 AF 02 00 00         JZ 0x005fc04f
005FBDA0  6A 00                     PUSH 0x0
005FBDA2  6A 01                     PUSH 0x1
005FBDA4  8B CE                     MOV ECX,ESI
005FBDA6  E8 82 61 E0 FF            CALL 0x00401f2d
005FBDAB  83 7F 18 04               CMP dword ptr [EDI + 0x18],0x4
005FBDAF  75 14                     JNZ 0x005fbdc5
005FBDB1  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
005FBDB7  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005FBDBD  6A 08                     PUSH 0x8
005FBDBF  50                        PUSH EAX
005FBDC0  E8 7B DF 0E 00            CALL 0x006e9d40
LAB_005fbdc5:
005FBDC5  8A 4F 08                  MOV CL,byte ptr [EDI + 0x8]
005FBDC8  33 C0                     XOR EAX,EAX
005FBDCA  88 8E 0E 03 00 00         MOV byte ptr [ESI + 0x30e],CL
005FBDD0  66 8B 57 0C               MOV DX,word ptr [EDI + 0xc]
005FBDD4  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FBDD7  66 89 96 0F 03 00 00      MOV word ptr [ESI + 0x30f],DX
005FBDDE  C7 86 3A 02 00 00 05 00 00 00  MOV dword ptr [ESI + 0x23a],0x5
005FBDE8  C6 86 0D 03 00 00 01      MOV byte ptr [ESI + 0x30d],0x1
005FBDEF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FBDF5  5F                        POP EDI
005FBDF6  5E                        POP ESI
005FBDF7  5B                        POP EBX
005FBDF8  8B E5                     MOV ESP,EBP
005FBDFA  5D                        POP EBP
005FBDFB  C2 04 00                  RET 0x4
switchD_005fbd82::caseD_3:
005FBDFE  8A 47 08                  MOV AL,byte ptr [EDI + 0x8]
005FBE01  6A 00                     PUSH 0x0
005FBE03  88 86 0E 03 00 00         MOV byte ptr [ESI + 0x30e],AL
005FBE09  66 8B 4F 0C               MOV CX,word ptr [EDI + 0xc]
005FBE0D  66 89 8E 0F 03 00 00      MOV word ptr [ESI + 0x30f],CX
005FBE14  8B 8E C6 02 00 00         MOV ECX,dword ptr [ESI + 0x2c6]
005FBE1A  C6 86 0D 03 00 00 01      MOV byte ptr [ESI + 0x30d],0x1
005FBE21  C7 86 3A 02 00 00 05 00 00 00  MOV dword ptr [ESI + 0x23a],0x5
005FBE2B  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005FBE31  51                        PUSH ECX
005FBE32  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005FBE38  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005FBE3E  8B 96 C2 02 00 00         MOV EDX,dword ptr [ESI + 0x2c2]
005FBE44  83 C0 15                  ADD EAX,0x15
005FBE47  52                        PUSH EDX
005FBE48  89 86 E0 02 00 00         MOV dword ptr [ESI + 0x2e0],EAX
005FBE4E  8B 86 BE 02 00 00         MOV EAX,dword ptr [ESI + 0x2be]
005FBE54  50                        PUSH EAX
005FBE55  6A 01                     PUSH 0x1
005FBE57  E8 70 94 E0 FF            CALL 0x004052cc
005FBE5C  50                        PUSH EAX
005FBE5D  E8 43 93 E0 FF            CALL 0x004051a5
005FBE62  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FBE65  83 C4 18                  ADD ESP,0x18
005FBE68  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FBE6E  33 C0                     XOR EAX,EAX
005FBE70  5F                        POP EDI
005FBE71  5E                        POP ESI
005FBE72  5B                        POP EBX
005FBE73  8B E5                     MOV ESP,EBP
005FBE75  5D                        POP EBP
005FBE76  C2 04 00                  RET 0x4
switchD_005fbd82::caseD_5:
005FBE79  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FBE7C  C7 86 D2 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2d2],0x0
005FBE86  C7 86 B5 02 00 00 03 00 00 00  MOV dword ptr [ESI + 0x2b5],0x3
005FBE90  C7 86 3A 02 00 00 05 00 00 00  MOV dword ptr [ESI + 0x23a],0x5
005FBE9A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FBEA0  33 C0                     XOR EAX,EAX
005FBEA2  5F                        POP EDI
005FBEA3  5E                        POP ESI
005FBEA4  5B                        POP EBX
005FBEA5  8B E5                     MOV ESP,EBP
005FBEA7  5D                        POP EBP
005FBEA8  C2 04 00                  RET 0x4
switchD_005fbd82::default:
005FBEAB  8A 4F 08                  MOV CL,byte ptr [EDI + 0x8]
005FBEAE  8B 86 D6 02 00 00         MOV EAX,dword ptr [ESI + 0x2d6]
005FBEB4  88 8E 0E 03 00 00         MOV byte ptr [ESI + 0x30e],CL
005FBEBA  66 8B 57 0C               MOV DX,word ptr [EDI + 0xc]
005FBEBE  85 C0                     TEST EAX,EAX
005FBEC0  66 89 96 0F 03 00 00      MOV word ptr [ESI + 0x30f],DX
005FBEC7  C6 86 0D 03 00 00 01      MOV byte ptr [ESI + 0x30d],0x1
005FBECE  7C 0C                     JL 0x005fbedc
005FBED0  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005FBED6  50                        PUSH EAX
005FBED7  E8 84 EC 0E 00            CALL 0x006eab60
LAB_005fbedc:
005FBEDC  8B CE                     MOV ECX,ESI
005FBEDE  E8 9A 88 E0 FF            CALL 0x0040477d
005FBEE3  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FBEE6  33 C0                     XOR EAX,EAX
005FBEE8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FBEEE  5F                        POP EDI
005FBEEF  5E                        POP ESI
005FBEF0  5B                        POP EBX
005FBEF1  8B E5                     MOV ESP,EBP
005FBEF3  5D                        POP EBP
005FBEF4  C2 04 00                  RET 0x4
switchD_005fbd08::caseD_112:
005FBEF7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005FBEFA  8B 88 D6 02 00 00         MOV ECX,dword ptr [EAX + 0x2d6]
005FBF00  85 C9                     TEST ECX,ECX
005FBF02  0F 8C 47 01 00 00         JL 0x005fc04f
005FBF08  8D 88 D5 01 00 00         LEA ECX,[EAX + 0x1d5]
005FBF0E  E8 7D 6B E0 FF            CALL 0x00402a90
005FBF13  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FBF16  33 C0                     XOR EAX,EAX
005FBF18  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FBF1E  5F                        POP EDI
005FBF1F  5E                        POP ESI
005FBF20  5B                        POP EBX
005FBF21  8B E5                     MOV ESP,EBP
005FBF23  5D                        POP EBP
005FBF24  C2 04 00                  RET 0x4
switchD_005fbd08::caseD_113:
005FBF27  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005FBF2A  8B 88 D6 02 00 00         MOV ECX,dword ptr [EAX + 0x2d6]
005FBF30  85 C9                     TEST ECX,ECX
005FBF32  0F 8C 17 01 00 00         JL 0x005fc04f
005FBF38  8D 88 D5 01 00 00         LEA ECX,[EAX + 0x1d5]
005FBF3E  8B 80 D5 01 00 00         MOV EAX,dword ptr [EAX + 0x1d5]
005FBF44  FF 10                     CALL dword ptr [EAX]
005FBF46  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FBF49  33 C0                     XOR EAX,EAX
005FBF4B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FBF51  5F                        POP EDI
005FBF52  5E                        POP ESI
005FBF53  5B                        POP EBX
005FBF54  8B E5                     MOV ESP,EBP
005FBF56  5D                        POP EBP
005FBF57  C2 04 00                  RET 0x4
switchD_005fbd08::caseD_129:
005FBF5A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005FBF5D  83 BB 3A 02 00 00 04      CMP dword ptr [EBX + 0x23a],0x4
005FBF64  0F 85 E5 00 00 00         JNZ 0x005fc04f
005FBF6A  66 8B 8B AB 02 00 00      MOV CX,word ptr [EBX + 0x2ab]
005FBF71  66 81 F9 FF FF            CMP CX,0xffff
005FBF76  0F 84 D3 00 00 00         JZ 0x005fc04f
005FBF7C  8A 83 4F 02 00 00         MOV AL,byte ptr [EBX + 0x24f]
005FBF82  84 C0                     TEST AL,AL
005FBF84  0F 84 C5 00 00 00         JZ 0x005fc04f
005FBF8A  8B 83 AD 02 00 00         MOV EAX,dword ptr [EBX + 0x2ad]
005FBF90  85 C0                     TEST EAX,EAX
005FBF92  75 15                     JNZ 0x005fbfa9
005FBF94  6A 01                     PUSH 0x1
005FBF96  51                        PUSH ECX
005FBF97  8A 8B A3 02 00 00         MOV CL,byte ptr [EBX + 0x2a3]
005FBF9D  51                        PUSH ECX
005FBF9E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005FBFA4  E8 11 69 E0 FF            CALL 0x004028ba
LAB_005fbfa9:
005FBFA9  85 C0                     TEST EAX,EAX
005FBFAB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005FBFAE  0F 84 86 00 00 00         JZ 0x005fc03a
005FBFB4  8B F0                     MOV ESI,EAX
005FBFB6  8D 7B 34                  LEA EDI,[EBX + 0x34]
005FBFB9  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
005FBFBD  89 93 77 02 00 00         MOV dword ptr [EBX + 0x277],EDX
005FBFC3  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
005FBFC7  89 83 7B 02 00 00         MOV dword ptr [EBX + 0x27b],EAX
005FBFCD  B8 89 88 88 88            MOV EAX,0x88888889
005FBFD2  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
005FBFD6  83 C1 05                  ADD ECX,0x5
005FBFD9  89 8B 7F 02 00 00         MOV dword ptr [EBX + 0x27f],ECX
005FBFDF  0F BF 4E 6C               MOVSX ECX,word ptr [ESI + 0x6c]
005FBFE3  F7 E9                     IMUL ECX
005FBFE5  03 D1                     ADD EDX,ECX
005FBFE7  B9 17 00 00 00            MOV ECX,0x17
005FBFEC  C1 FA 03                  SAR EDX,0x3
005FBFEF  8B C2                     MOV EAX,EDX
005FBFF1  C1 E8 1F                  SHR EAX,0x1f
005FBFF4  03 D0                     ADD EDX,EAX
005FBFF6  83 C6 34                  ADD ESI,0x34
005FBFF9  89 93 BA 02 00 00         MOV dword ptr [EBX + 0x2ba],EDX
005FBFFF  F3 A5                     MOVSD.REP ES:EDI,ESI
005FC001  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005FC004  66 A5                     MOVSW ES:EDI,ESI
005FC006  A4                        MOVSB ES:EDI,ESI
005FC007  8B 83 77 02 00 00         MOV EAX,dword ptr [EBX + 0x277]
005FC00D  C7 43 76 00 00 00 00      MOV dword ptr [EBX + 0x76],0x0
005FC014  66 8B 51 6E               MOV DX,word ptr [ECX + 0x6e]
005FC018  8B 8B 7B 02 00 00         MOV ECX,dword ptr [EBX + 0x27b]
005FC01E  66 89 53 6E               MOV word ptr [EBX + 0x6e],DX
005FC022  8B 93 7F 02 00 00         MOV EDX,dword ptr [EBX + 0x27f]
005FC028  89 83 BE 02 00 00         MOV dword ptr [EBX + 0x2be],EAX
005FC02E  89 8B C2 02 00 00         MOV dword ptr [EBX + 0x2c2],ECX
005FC034  89 93 C6 02 00 00         MOV dword ptr [EBX + 0x2c6],EDX
LAB_005fc03a:
005FC03A  8B CB                     MOV ECX,EBX
005FC03C  E8 C2 88 E0 FF            CALL 0x00404903
005FC041  8B 03                     MOV EAX,dword ptr [EBX]
005FC043  8B CB                     MOV ECX,EBX
005FC045  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
005FC04B  85 C0                     TEST EAX,EAX
005FC04D  75 53                     JNZ 0x005fc0a2
switchD_005fbd08::caseD_114:
005FC04F  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005FC052  33 C0                     XOR EAX,EAX
005FC054  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FC05A  5F                        POP EDI
005FC05B  5E                        POP ESI
005FC05C  5B                        POP EBX
005FC05D  8B E5                     MOV ESP,EBP
005FC05F  5D                        POP EBP
005FC060  C2 04 00                  RET 0x4
LAB_005fc063:
005FC063  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
005FC066  68 04 E9 7C 00            PUSH 0x7ce904
005FC06B  68 CC 4C 7A 00            PUSH 0x7a4ccc
005FC070  56                        PUSH ESI
005FC071  6A 00                     PUSH 0x0
005FC073  68 39 01 00 00            PUSH 0x139
005FC078  68 E0 E8 7C 00            PUSH 0x7ce8e0
005FC07D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005FC083  E8 48 14 0B 00            CALL 0x006ad4d0
005FC088  83 C4 18                  ADD ESP,0x18
005FC08B  85 C0                     TEST EAX,EAX
005FC08D  74 01                     JZ 0x005fc090
005FC08F  CC                        INT3
LAB_005fc090:
005FC090  68 3B 01 00 00            PUSH 0x13b
005FC095  68 E0 E8 7C 00            PUSH 0x7ce8e0
005FC09A  6A 00                     PUSH 0x0
005FC09C  56                        PUSH ESI
005FC09D  E8 9E 9D 0A 00            CALL 0x006a5e40
LAB_005fc0a2:
005FC0A2  5F                        POP EDI
005FC0A3  5E                        POP ESI
005FC0A4  B8 FF FF 00 00            MOV EAX,0xffff
005FC0A9  5B                        POP EBX
005FC0AA  8B E5                     MOV ESP,EBP
005FC0AC  5D                        POP EBP
005FC0AD  C2 04 00                  RET 0x4
