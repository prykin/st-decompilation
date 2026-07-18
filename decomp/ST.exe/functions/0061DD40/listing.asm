FUN_0061dd40:
0061DD40  55                        PUSH EBP
0061DD41  8B EC                     MOV EBP,ESP
0061DD43  83 EC 14                  SUB ESP,0x14
0061DD46  56                        PUSH ESI
0061DD47  8B F1                     MOV ESI,ECX
0061DD49  57                        PUSH EDI
0061DD4A  C7 45 F4 FF FF FF FF      MOV dword ptr [EBP + -0xc],0xffffffff
0061DD51  0F BF 46 30               MOVSX EAX,word ptr [ESI + 0x30]
0061DD55  0F BF 4E 32               MOVSX ECX,word ptr [ESI + 0x32]
0061DD59  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0061DD5C  DB 45 F8                  FILD dword ptr [EBP + -0x8]
0061DD5F  0F BF 56 34               MOVSX EDX,word ptr [ESI + 0x34]
0061DD63  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061DD69  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0061DD6C  0F BF 46 36               MOVSX EAX,word ptr [ESI + 0x36]
0061DD70  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061DD76  DB 45 F8                  FILD dword ptr [EBP + -0x8]
0061DD79  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0061DD7C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061DD82  0F BF 4E 38               MOVSX ECX,word ptr [ESI + 0x38]
0061DD86  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061DD8C  DB 45 F8                  FILD dword ptr [EBP + -0x8]
0061DD8F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0061DD92  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061DD98  0F BF 56 3A               MOVSX EDX,word ptr [ESI + 0x3a]
0061DD9C  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061DDA2  D9 C2                     FLD ST2
0061DDA4  D9 5E 63                  FSTP float ptr [ESI + 0x63]
0061DDA7  D9 C1                     FLD ST1
0061DDA9  D9 5E 67                  FSTP float ptr [ESI + 0x67]
0061DDAC  D9 56 6B                  FST float ptr [ESI + 0x6b]
0061DDAF  DB 45 F8                  FILD dword ptr [EBP + -0x8]
0061DDB2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0061DDB5  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061DDBB  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061DDC1  D9 5D EC                  FSTP float ptr [EBP + -0x14]
0061DDC4  DB 45 F8                  FILD dword ptr [EBP + -0x8]
0061DDC7  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0061DDCA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061DDD0  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061DDD6  D9 5D F0                  FSTP float ptr [EBP + -0x10]
0061DDD9  DB 45 F8                  FILD dword ptr [EBP + -0x8]
0061DDDC  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061DDE2  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061DDE8  D9 C9                     FXCH
0061DDEA  D8 E1                     FSUB ST0,ST1
0061DDEC  D9 5D FC                  FSTP float ptr [EBP + -0x4]
0061DDEF  DD D8                     FSTP ST0
0061DDF1  D8 65 F0                  FSUB float ptr [EBP + -0x10]
0061DDF4  D9 5D F8                  FSTP float ptr [EBP + -0x8]
0061DDF7  D8 65 EC                  FSUB float ptr [EBP + -0x14]
0061DDFA  D9 C0                     FLD ST0
0061DDFC  D8 C9                     FMUL ST1
0061DDFE  D9 45 F8                  FLD float ptr [EBP + -0x8]
0061DE01  D8 4D F8                  FMUL float ptr [EBP + -0x8]
0061DE04  DE C1                     FADDP
0061DE06  D9 45 FC                  FLD float ptr [EBP + -0x4]
0061DE09  D8 4D FC                  FMUL float ptr [EBP + -0x4]
0061DE0C  DE C1                     FADDP
0061DE0E  D9 FA                     FSQRT
0061DE10  D9 5D F8                  FSTP float ptr [EBP + -0x8]
0061DE13  DD D8                     FSTP ST0
0061DE15  D9 45 F8                  FLD float ptr [EBP + -0x8]
0061DE18  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0061DE1E  DF E0                     FNSTSW AX
0061DE20  F6 C4 40                  TEST AH,0x40
0061DE23  0F 85 1B 01 00 00         JNZ 0x0061df44
0061DE29  8B 86 97 00 00 00         MOV EAX,dword ptr [ESI + 0x97]
0061DE2F  33 FF                     XOR EDI,EDI
0061DE31  3B C7                     CMP EAX,EDI
0061DE33  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0061DE36  0F 84 08 01 00 00         JZ 0x0061df44
0061DE3C  DB 45 EC                  FILD dword ptr [EBP + -0x14]
0061DE3F  39 BE 93 00 00 00         CMP dword ptr [ESI + 0x93],EDI
0061DE45  D8 7D F8                  FDIVR float ptr [EBP + -0x8]
0061DE48  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0061DE4B  D9 5E 47                  FSTP float ptr [ESI + 0x47]
0061DE4E  7E 63                     JLE 0x0061deb3
0061DE50  53                        PUSH EBX
LAB_0061de51:
0061DE51  8B 86 9B 00 00 00         MOV EAX,dword ptr [ESI + 0x9b]
0061DE57  39 38                     CMP dword ptr [EAX],EDI
0061DE59  7E 46                     JLE 0x0061dea1
0061DE5B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_0061de5e:
0061DE5E  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
0061DE64  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0061DE67  8B 04 91                  MOV EAX,dword ptr [ECX + EDX*0x4]
0061DE6A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0061DE6D  DB 44 08 0C               FILD dword ptr [EAX + ECX*0x1 + 0xc]
0061DE71  8D 5C 08 0C               LEA EBX,[EAX + ECX*0x1 + 0xc]
0061DE75  D8 4E 47                  FMUL float ptr [ESI + 0x47]
0061DE78  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0061DE7E  E8 05 04 11 00            CALL 0x0072e288
0061DE83  0F BF D0                  MOVSX EDX,AX
0061DE86  89 13                     MOV dword ptr [EBX],EDX
0061DE88  8B 86 9B 00 00 00         MOV EAX,dword ptr [ESI + 0x9b]
0061DE8E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0061DE91  47                        INC EDI
0061DE92  83 C2 14                  ADD EDX,0x14
0061DE95  8B 0C B8                  MOV ECX,dword ptr [EAX + EDI*0x4]
0061DE98  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0061DE9B  3B F9                     CMP EDI,ECX
0061DE9D  7C BF                     JL 0x0061de5e
0061DE9F  33 FF                     XOR EDI,EDI
LAB_0061dea1:
0061DEA1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061DEA4  8B 8E 93 00 00 00         MOV ECX,dword ptr [ESI + 0x93]
0061DEAA  40                        INC EAX
0061DEAB  3B C1                     CMP EAX,ECX
0061DEAD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0061DEB0  7C 9F                     JL 0x0061de51
0061DEB2  5B                        POP EBX
LAB_0061deb3:
0061DEB3  8B 8E AC 00 00 00         MOV ECX,dword ptr [ESI + 0xac]
0061DEB9  33 D2                     XOR EDX,EDX
0061DEBB  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0061DEC1  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0061DEC7  B9 B5 00 00 00            MOV ECX,0xb5
0061DECC  89 86 AC 00 00 00         MOV dword ptr [ESI + 0xac],EAX
0061DED2  C1 E8 10                  SHR EAX,0x10
0061DED5  F7 F1                     DIV ECX
0061DED7  0F BF 4E 3A               MOVSX ECX,word ptr [ESI + 0x3a]
0061DEDB  8D 46 6F                  LEA EAX,[ESI + 0x6f]
0061DEDE  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0061DEE1  DB 45 EC                  FILD dword ptr [EBP + -0x14]
0061DEE4  D8 0D 0C C7 79 00         FMUL float ptr [0x0079c70c]
0061DEEA  D9 55 EC                  FST float ptr [EBP + -0x14]
0061DEED  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0061DEF0  52                        PUSH EDX
0061DEF1  50                        PUSH EAX
0061DEF2  0F BF 56 38               MOVSX EDX,word ptr [ESI + 0x38]
0061DEF6  D9 5E 4B                  FSTP float ptr [ESI + 0x4b]
0061DEF9  0F BF 46 36               MOVSX EAX,word ptr [ESI + 0x36]
0061DEFD  51                        PUSH ECX
0061DEFE  52                        PUSH EDX
0061DEFF  0F BF 4E 34               MOVSX ECX,word ptr [ESI + 0x34]
0061DF03  0F BF 56 32               MOVSX EDX,word ptr [ESI + 0x32]
0061DF07  50                        PUSH EAX
0061DF08  51                        PUSH ECX
0061DF09  0F BF 46 30               MOVSX EAX,word ptr [ESI + 0x30]
0061DF0D  52                        PUSH EDX
0061DF0E  50                        PUSH EAX
0061DF0F  E8 AF 40 DE FF            CALL 0x00401fc3
0061DF14  83 C4 20                  ADD ESP,0x20
0061DF17  85 C0                     TEST EAX,EAX
0061DF19  74 20                     JZ 0x0061df3b
0061DF1B  B8 01 00 00 00            MOV EAX,0x1
0061DF20  C7 46 5B FC 08 00 00      MOV dword ptr [ESI + 0x5b],0x8fc
0061DF27  C7 46 5F 06 00 00 00      MOV dword ptr [ESI + 0x5f],0x6
0061DF2E  89 7E 4F                  MOV dword ptr [ESI + 0x4f],EDI
0061DF31  89 46 53                  MOV dword ptr [ESI + 0x53],EAX
0061DF34  C6 46 46 00               MOV byte ptr [ESI + 0x46],0x0
0061DF38  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0061df3b:
0061DF3B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0061DF3E  5F                        POP EDI
0061DF3F  5E                        POP ESI
0061DF40  8B E5                     MOV ESP,EBP
0061DF42  5D                        POP EBP
0061DF43  C3                        RET
LAB_0061df44:
0061DF44  5F                        POP EDI
0061DF45  83 C8 FF                  OR EAX,0xffffffff
0061DF48  5E                        POP ESI
0061DF49  8B E5                     MOV ESP,EBP
0061DF4B  5D                        POP EBP
0061DF4C  C3                        RET
