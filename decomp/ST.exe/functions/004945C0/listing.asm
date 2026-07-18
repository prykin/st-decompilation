FUN_004945c0:
004945C0  55                        PUSH EBP
004945C1  8B EC                     MOV EBP,ESP
004945C3  83 EC 14                  SUB ESP,0x14
004945C6  53                        PUSH EBX
004945C7  56                        PUSH ESI
004945C8  57                        PUSH EDI
004945C9  8B F9                     MOV EDI,ECX
004945CB  B8 E9 87 80 00            MOV EAX,0x8087e9
004945D0  33 DB                     XOR EBX,EBX
004945D2  3D 71 8A 80 00            CMP EAX,0x808a71
004945D7  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
004945DA  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004945DD  8D B7 4E 07 00 00         LEA ESI,[EDI + 0x74e]
004945E3  0F 8D C8 01 00 00         JGE 0x004947b1
LAB_004945e9:
004945E9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004945EF  85 C9                     TEST ECX,ECX
004945F1  74 09                     JZ 0x004945fc
004945F3  80 38 08                  CMP byte ptr [EAX],0x8
004945F6  0F 83 B5 01 00 00         JNC 0x004947b1
LAB_004945fc:
004945FC  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
00494602  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00494605  84 C9                     TEST CL,CL
00494607  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
0049460A  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
0049460D  74 2C                     JZ 0x0049463b
0049460F  8B C3                     MOV EAX,EBX
00494611  33 D2                     XOR EDX,EDX
00494613  25 FF 00 00 00            AND EAX,0xff
00494618  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0049461B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049461E  25 FF 00 00 00            AND EAX,0xff
00494623  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00494626  8A 84 C0 EA 87 80 00      MOV AL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0049462D  3A 84 C9 EA 87 80 00      CMP AL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00494634  0F 95 C2                  SETNZ DL
00494637  8B C2                     MOV EAX,EDX
00494639  EB 79                     JMP 0x004946b4
LAB_0049463b:
0049463B  3A D8                     CMP BL,AL
0049463D  74 6A                     JZ 0x004946a9
0049463F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00494642  8B C3                     MOV EAX,EBX
00494644  25 FF 00 00 00            AND EAX,0xff
00494649  81 E1 FF 00 00 00         AND ECX,0xff
0049464F  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00494656  84 D2                     TEST DL,DL
00494658  75 10                     JNZ 0x0049466a
0049465A  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
00494661  75 07                     JNZ 0x0049466a
00494663  B8 FE FF FF FF            MOV EAX,0xfffffffe
00494668  EB 41                     JMP 0x004946ab
LAB_0049466a:
0049466A  80 FA 01                  CMP DL,0x1
0049466D  75 0F                     JNZ 0x0049467e
0049466F  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00494677  75 05                     JNZ 0x0049467e
00494679  83 C8 FF                  OR EAX,0xffffffff
0049467C  EB 2D                     JMP 0x004946ab
LAB_0049467e:
0049467E  84 D2                     TEST DL,DL
00494680  75 11                     JNZ 0x00494693
00494682  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0049468A  75 07                     JNZ 0x00494693
0049468C  B8 01 00 00 00            MOV EAX,0x1
00494691  EB 18                     JMP 0x004946ab
LAB_00494693:
00494693  80 FA 01                  CMP DL,0x1
00494696  75 11                     JNZ 0x004946a9
00494698  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004946A0  75 07                     JNZ 0x004946a9
004946A2  B8 02 00 00 00            MOV EAX,0x2
004946A7  EB 02                     JMP 0x004946ab
LAB_004946a9:
004946A9  33 C0                     XOR EAX,EAX
LAB_004946ab:
004946AB  33 C9                     XOR ECX,ECX
004946AD  85 C0                     TEST EAX,EAX
004946AF  0F 9C C1                  SETL CL
004946B2  8B C1                     MOV EAX,ECX
LAB_004946b4:
004946B4  85 C0                     TEST EAX,EAX
004946B6  0F 85 BD 00 00 00         JNZ 0x00494779
004946BC  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
004946C2  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
004946C5  84 C9                     TEST CL,CL
004946C7  88 45 F0                  MOV byte ptr [EBP + -0x10],AL
004946CA  74 2C                     JZ 0x004946f8
004946CC  8B C3                     MOV EAX,EBX
004946CE  25 FF 00 00 00            AND EAX,0xff
004946D3  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
004946D6  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004946D9  25 FF 00 00 00            AND EAX,0xff
004946DE  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
004946E5  33 C9                     XOR ECX,ECX
004946E7  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004946EA  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
004946F1  0F 95 C1                  SETNZ CL
004946F4  8B C1                     MOV EAX,ECX
004946F6  EB 79                     JMP 0x00494771
LAB_004946f8:
004946F8  3A C3                     CMP AL,BL
004946FA  74 6A                     JZ 0x00494766
004946FC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004946FF  8B CB                     MOV ECX,EBX
00494701  25 FF 00 00 00            AND EAX,0xff
00494706  81 E1 FF 00 00 00         AND ECX,0xff
0049470C  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00494713  84 D2                     TEST DL,DL
00494715  75 10                     JNZ 0x00494727
00494717  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0049471E  75 07                     JNZ 0x00494727
00494720  B8 FE FF FF FF            MOV EAX,0xfffffffe
00494725  EB 41                     JMP 0x00494768
LAB_00494727:
00494727  80 FA 01                  CMP DL,0x1
0049472A  75 0F                     JNZ 0x0049473b
0049472C  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00494734  75 05                     JNZ 0x0049473b
00494736  83 C8 FF                  OR EAX,0xffffffff
00494739  EB 2D                     JMP 0x00494768
LAB_0049473b:
0049473B  84 D2                     TEST DL,DL
0049473D  75 11                     JNZ 0x00494750
0049473F  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00494747  75 07                     JNZ 0x00494750
00494749  B8 01 00 00 00            MOV EAX,0x1
0049474E  EB 18                     JMP 0x00494768
LAB_00494750:
00494750  80 FA 01                  CMP DL,0x1
00494753  75 11                     JNZ 0x00494766
00494755  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0049475D  75 07                     JNZ 0x00494766
0049475F  B8 02 00 00 00            MOV EAX,0x2
00494764  EB 02                     JMP 0x00494768
LAB_00494766:
00494766  33 C0                     XOR EAX,EAX
LAB_00494768:
00494768  33 D2                     XOR EDX,EDX
0049476A  85 C0                     TEST EAX,EAX
0049476C  0F 9C C2                  SETL DL
0049476F  8B C2                     MOV EAX,EDX
LAB_00494771:
00494771  85 C0                     TEST EAX,EAX
00494773  75 04                     JNZ 0x00494779
00494775  89 06                     MOV dword ptr [ESI],EAX
00494777  EB 38                     JMP 0x004947b1
LAB_00494779:
00494779  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049477C  8B CF                     MOV ECX,EDI
0049477E  50                        PUSH EAX
0049477F  E8 63 13 F7 FF            CALL 0x00405ae7
00494784  83 F8 01                  CMP EAX,0x1
00494787  75 08                     JNZ 0x00494791
00494789  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
0049478F  EB 20                     JMP 0x004947b1
LAB_00494791:
00494791  83 3E 00                  CMP dword ptr [ESI],0x0
00494794  75 1B                     JNZ 0x004947b1
00494796  66 8B 4F 32               MOV CX,word ptr [EDI + 0x32]
0049479A  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
0049479D  51                        PUSH ECX
0049479E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004947A4  52                        PUSH EDX
004947A5  53                        PUSH EBX
004947A6  E8 98 DA F6 FF            CALL 0x00402243
004947AB  C7 06 01 00 00 00         MOV dword ptr [ESI],0x1
LAB_004947b1:
004947B1  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004947B4  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
004947B7  83 C0 51                  ADD EAX,0x51
004947BA  43                        INC EBX
004947BB  83 C6 04                  ADD ESI,0x4
004947BE  3D 71 8A 80 00            CMP EAX,0x808a71
004947C3  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
004947C6  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004947C9  0F 8C 1A FE FF FF         JL 0x004945e9
004947CF  5F                        POP EDI
004947D0  5E                        POP ESI
004947D1  5B                        POP EBX
004947D2  8B E5                     MOV ESP,EBP
004947D4  5D                        POP EBP
004947D5  C3                        RET
