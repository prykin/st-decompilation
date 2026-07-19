FUN_00494870:
00494870  55                        PUSH EBP
00494871  8B EC                     MOV EBP,ESP
00494873  51                        PUSH ECX
00494874  53                        PUSH EBX
00494875  56                        PUSH ESI
00494876  8B F1                     MOV ESI,ECX
00494878  B8 01 00 00 00            MOV EAX,0x1
0049487D  39 86 32 07 00 00         CMP dword ptr [ESI + 0x732],EAX
00494883  0F 85 AC 01 00 00         JNZ 0x00494a35
00494889  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0049488C  83 FB 08                  CMP EBX,0x8
0049488F  0F 83 A0 01 00 00         JNC 0x00494a35
00494895  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049489B  85 C9                     TEST ECX,ECX
0049489D  74 11                     JZ 0x004948b0
0049489F  8D 0C DB                  LEA ECX,[EBX + EBX*0x8]
004948A2  80 BC C9 E9 87 80 00 08   CMP byte ptr [ECX + ECX*0x8 + 0x8087e9],0x8
004948AA  0F 83 85 01 00 00         JNC 0x00494a35
LAB_004948b0:
004948B0  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
004948B6  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004948B9  84 C9                     TEST CL,CL
004948BB  88 45 0B                  MOV byte ptr [EBP + 0xb],AL
004948BE  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
004948C1  74 2C                     JZ 0x004948ef
004948C3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004948C6  33 D2                     XOR EDX,EDX
004948C8  25 FF 00 00 00            AND EAX,0xff
004948CD  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
004948D0  8B C3                     MOV EAX,EBX
004948D2  25 FF 00 00 00            AND EAX,0xff
004948D7  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
004948DE  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004948E1  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
004948E8  0F 95 C2                  SETNZ DL
004948EB  8B C2                     MOV EAX,EDX
004948ED  EB 79                     JMP 0x00494968
LAB_004948ef:
004948EF  3A D8                     CMP BL,AL
004948F1  74 6A                     JZ 0x0049495d
004948F3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004948F6  8B C3                     MOV EAX,EBX
004948F8  25 FF 00 00 00            AND EAX,0xff
004948FD  81 E1 FF 00 00 00         AND ECX,0xff
00494903  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0049490A  84 D2                     TEST DL,DL
0049490C  75 10                     JNZ 0x0049491e
0049490E  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
00494915  75 07                     JNZ 0x0049491e
00494917  B8 FE FF FF FF            MOV EAX,0xfffffffe
0049491C  EB 41                     JMP 0x0049495f
LAB_0049491e:
0049491E  80 FA 01                  CMP DL,0x1
00494921  75 0F                     JNZ 0x00494932
00494923  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0049492B  75 05                     JNZ 0x00494932
0049492D  83 C8 FF                  OR EAX,0xffffffff
00494930  EB 2D                     JMP 0x0049495f
LAB_00494932:
00494932  84 D2                     TEST DL,DL
00494934  75 11                     JNZ 0x00494947
00494936  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0049493E  75 07                     JNZ 0x00494947
00494940  B8 01 00 00 00            MOV EAX,0x1
00494945  EB 18                     JMP 0x0049495f
LAB_00494947:
00494947  80 FA 01                  CMP DL,0x1
0049494A  75 11                     JNZ 0x0049495d
0049494C  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00494954  75 07                     JNZ 0x0049495d
00494956  B8 02 00 00 00            MOV EAX,0x2
0049495B  EB 02                     JMP 0x0049495f
LAB_0049495d:
0049495D  33 C0                     XOR EAX,EAX
LAB_0049495f:
0049495F  33 C9                     XOR ECX,ECX
00494961  85 C0                     TEST EAX,EAX
00494963  0F 9C C1                  SETL CL
00494966  8B C1                     MOV EAX,ECX
LAB_00494968:
00494968  83 F8 01                  CMP EAX,0x1
0049496B  0F 84 BC 00 00 00         JZ 0x00494a2d
00494971  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
00494977  8A 45 0B                  MOV AL,byte ptr [EBP + 0xb]
0049497A  84 C9                     TEST CL,CL
0049497C  88 45 08                  MOV byte ptr [EBP + 0x8],AL
0049497F  74 2A                     JZ 0x004949ab
00494981  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00494984  25 FF 00 00 00            AND EAX,0xff
00494989  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0049498C  8B C3                     MOV EAX,EBX
0049498E  25 FF 00 00 00            AND EAX,0xff
00494993  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00494996  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0049499D  33 C0                     XOR EAX,EAX
0049499F  3A 94 C9 EA 87 80 00      CMP DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
004949A6  0F 95 C0                  SETNZ AL
004949A9  EB 79                     JMP 0x00494a24
LAB_004949ab:
004949AB  3A C3                     CMP AL,BL
004949AD  74 6A                     JZ 0x00494a19
004949AF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004949B2  8B CB                     MOV ECX,EBX
004949B4  25 FF 00 00 00            AND EAX,0xff
004949B9  81 E1 FF 00 00 00         AND ECX,0xff
004949BF  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
004949C6  84 D2                     TEST DL,DL
004949C8  75 10                     JNZ 0x004949da
004949CA  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
004949D1  75 07                     JNZ 0x004949da
004949D3  B8 FE FF FF FF            MOV EAX,0xfffffffe
004949D8  EB 41                     JMP 0x00494a1b
LAB_004949da:
004949DA  80 FA 01                  CMP DL,0x1
004949DD  75 0F                     JNZ 0x004949ee
004949DF  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
004949E7  75 05                     JNZ 0x004949ee
004949E9  83 C8 FF                  OR EAX,0xffffffff
004949EC  EB 2D                     JMP 0x00494a1b
LAB_004949ee:
004949EE  84 D2                     TEST DL,DL
004949F0  75 11                     JNZ 0x00494a03
004949F2  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004949FA  75 07                     JNZ 0x00494a03
004949FC  B8 01 00 00 00            MOV EAX,0x1
00494A01  EB 18                     JMP 0x00494a1b
LAB_00494a03:
00494A03  80 FA 01                  CMP DL,0x1
00494A06  75 11                     JNZ 0x00494a19
00494A08  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00494A10  75 07                     JNZ 0x00494a19
00494A12  B8 02 00 00 00            MOV EAX,0x2
00494A17  EB 02                     JMP 0x00494a1b
LAB_00494a19:
00494A19  33 C0                     XOR EAX,EAX
LAB_00494a1b:
00494A1B  33 C9                     XOR ECX,ECX
00494A1D  85 C0                     TEST EAX,EAX
00494A1F  0F 9C C1                  SETL CL
00494A22  8B C1                     MOV EAX,ECX
LAB_00494a24:
00494A24  83 F8 01                  CMP EAX,0x1
00494A27  74 04                     JZ 0x00494a2d
00494A29  33 C0                     XOR EAX,EAX
00494A2B  EB 08                     JMP 0x00494a35
LAB_00494a2d:
00494A2D  53                        PUSH EBX
00494A2E  8B CE                     MOV ECX,ESI
00494A30  E8 B2 10 F7 FF            CALL 0x00405ae7
FUN_00494870::cf_common_exit_00494A35:
00494A35  83 BE 5D 04 00 00 14      CMP dword ptr [ESI + 0x45d],0x14
00494A3C  75 0B                     JNZ 0x00494a49
00494A3E  83 BE C0 05 00 00 03      CMP dword ptr [ESI + 0x5c0],0x3
00494A45  75 02                     JNZ 0x00494a49
00494A47  33 C0                     XOR EAX,EAX
LAB_00494a49:
00494A49  5E                        POP ESI
00494A4A  5B                        POP EBX
00494A4B  8B E5                     MOV ESP,EBP
00494A4D  5D                        POP EBP
00494A4E  C2 04 00                  RET 0x4
