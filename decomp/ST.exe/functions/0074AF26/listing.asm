FUN_0074af26:
0074AF26  55                        PUSH EBP
0074AF27  8B EC                     MOV EBP,ESP
0074AF29  83 EC 18                  SUB ESP,0x18
0074AF2C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074AF2F  53                        PUSH EBX
0074AF30  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0074AF33  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0074AF36  8B D9                     MOV EBX,ECX
0074AF38  56                        PUSH ESI
0074AF39  57                        PUSH EDI
0074AF3A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0074AF3D  8B 83 F4 00 00 00         MOV EAX,dword ptr [EBX + 0xf4]
0074AF43  33 FF                     XOR EDI,EDI
0074AF45  3B C7                     CMP EAX,EDI
0074AF47  7D 05                     JGE 0x0074af4e
0074AF49  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0074AF4C  EB 12                     JMP 0x0074af60
LAB_0074af4e:
0074AF4E  8B 8B DC 00 00 00         MOV ECX,dword ptr [EBX + 0xdc]
0074AF54  33 D2                     XOR EDX,EDX
0074AF56  D1 E1                     SHL ECX,0x1
0074AF58  3B C1                     CMP EAX,ECX
0074AF5A  0F 9E C2                  SETLE DL
0074AF5D  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_0074af60:
0074AF60  BE E8 03 00 00            MOV ESI,0x3e8
0074AF65  3B C7                     CMP EAX,EDI
0074AF67  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0074AF6A  0F 8C 82 00 00 00         JL 0x0074aff2
0074AF70  39 7D 0C                  CMP dword ptr [EBP + 0xc],EDI
0074AF73  7C 2D                     JL 0x0074afa2
0074AF75  7F 05                     JG 0x0074af7c
0074AF77  39 7D 08                  CMP dword ptr [EBP + 0x8],EDI
0074AF7A  76 26                     JBE 0x0074afa2
LAB_0074af7c:
0074AF7C  57                        PUSH EDI
0074AF7D  68 10 27 00 00            PUSH 0x2710
0074AF82  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074AF85  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074AF88  E8 B3 34 FE FF            CALL 0x0072e440
0074AF8D  8B CE                     MOV ECX,ESI
0074AF8F  2B C8                     SUB ECX,EAX
0074AF91  B8 F4 01 00 00            MOV EAX,0x1f4
0074AF96  3B C8                     CMP ECX,EAX
0074AF98  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0074AF9B  7D 55                     JGE 0x0074aff2
0074AF9D  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0074AFA0  EB 50                     JMP 0x0074aff2
LAB_0074afa2:
0074AFA2  8B 93 F0 00 00 00         MOV EDX,dword ptr [EBX + 0xf0]
0074AFA8  B9 20 4E 00 00            MOV ECX,0x4e20
0074AFAD  3B D1                     CMP EDX,ECX
0074AFAF  7E 41                     JLE 0x0074aff2
0074AFB1  83 7D 0C FF               CMP dword ptr [EBP + 0xc],-0x1
0074AFB5  7F 3B                     JG 0x0074aff2
0074AFB7  7C 09                     JL 0x0074afc2
0074AFB9  81 7D 08 E0 B1 FF FF      CMP dword ptr [EBP + 0x8],0xffffb1e0
0074AFC0  73 30                     JNC 0x0074aff2
LAB_0074afc2:
0074AFC2  3B D0                     CMP EDX,EAX
0074AFC4  BE D0 07 00 00            MOV ESI,0x7d0
0074AFC9  7D 1B                     JGE 0x0074afe6
0074AFCB  8D B8 20 4E 00 00         LEA EDI,[EAX + 0x4e20]
0074AFD1  3B FA                     CMP EDI,EDX
0074AFD3  7E 11                     JLE 0x0074afe6
0074AFD5  8B F8                     MOV EDI,EAX
0074AFD7  2B FA                     SUB EDI,EDX
0074AFD9  99                        CDQ
0074AFDA  03 F9                     ADD EDI,ECX
0074AFDC  F7 FF                     IDIV EDI
0074AFDE  69 C0 E8 03 00 00         IMUL EAX,EAX,0x3e8
0074AFE4  EB 02                     JMP 0x0074afe8
LAB_0074afe6:
0074AFE6  8B C6                     MOV EAX,ESI
LAB_0074afe8:
0074AFE8  3B C6                     CMP EAX,ESI
0074AFEA  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0074AFED  7E 03                     JLE 0x0074aff2
0074AFEF  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
LAB_0074aff2:
0074AFF2  8B 83 DC 00 00 00         MOV EAX,dword ptr [EBX + 0xdc]
0074AFF8  99                        CDQ
0074AFF9  2B C2                     SUB EAX,EDX
0074AFFB  D1 F8                     SAR EAX,0x1
0074AFFD  99                        CDQ
0074AFFE  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
0074B001  13 55 0C                  ADC EDX,dword ptr [EBP + 0xc]
0074B004  83 BB AC 00 00 00 00      CMP dword ptr [EBX + 0xac],0x0
0074B00B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0074B00E  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0074B011  75 25                     JNZ 0x0074b038
0074B013  8B 43 78                  MOV EAX,dword ptr [EBX + 0x78]
0074B016  83 65 0C 00               AND dword ptr [EBP + 0xc],0x0
0074B01A  8D 55 0C                  LEA EDX,[EBP + 0xc]
0074B01D  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
0074B020  52                        PUSH EDX
0074B021  68 40 1B 7A 00            PUSH 0x7a1b40
0074B026  50                        PUSH EAX
0074B027  8B 08                     MOV ECX,dword ptr [EAX]
0074B029  FF 11                     CALL dword ptr [ECX]
0074B02B  85 C0                     TEST EAX,EAX
0074B02D  7C 09                     JL 0x0074b038
0074B02F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074B032  89 83 AC 00 00 00         MOV dword ptr [EBX + 0xac],EAX
LAB_0074b038:
0074B038  8B 83 AC 00 00 00         MOV EAX,dword ptr [EBX + 0xac]
0074B03E  85 C0                     TEST EAX,EAX
0074B040  74 21                     JZ 0x0074b063
0074B042  83 EC 18                  SUB ESP,0x18
0074B045  8D 75 E8                  LEA ESI,[EBP + -0x18]
0074B048  8B 10                     MOV EDX,dword ptr [EAX]
0074B04A  6A 06                     PUSH 0x6
0074B04C  59                        POP ECX
0074B04D  8B FC                     MOV EDI,ESP
0074B04F  F3 A5                     MOVSD.REP ES:EDI,ESI
0074B051  8B CB                     MOV ECX,EBX
0074B053  83 C3 0C                  ADD EBX,0xc
0074B056  F7 D9                     NEG ECX
0074B058  1B C9                     SBB ECX,ECX
0074B05A  23 CB                     AND ECX,EBX
0074B05C  51                        PUSH ECX
0074B05D  50                        PUSH EAX
0074B05E  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0074B061  EB 03                     JMP 0x0074b066
LAB_0074b063:
0074B063  6A 01                     PUSH 0x1
0074B065  58                        POP EAX
LAB_0074b066:
0074B066  5F                        POP EDI
0074B067  5E                        POP ESI
0074B068  5B                        POP EBX
0074B069  C9                        LEAVE
0074B06A  C2 10 00                  RET 0x10
