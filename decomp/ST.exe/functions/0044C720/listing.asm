STAllPlayersC::GetScrObjList:
0044C720  55                        PUSH EBP
0044C721  8B EC                     MOV EBP,ESP
0044C723  83 EC 64                  SUB ESP,0x64
0044C726  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0044C72B  53                        PUSH EBX
0044C72C  56                        PUSH ESI
0044C72D  57                        PUSH EDI
0044C72E  33 FF                     XOR EDI,EDI
0044C730  8D 55 A0                  LEA EDX,[EBP + -0x60]
0044C733  8D 4D 9C                  LEA ECX,[EBP + -0x64]
0044C736  57                        PUSH EDI
0044C737  52                        PUSH EDX
0044C738  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0044C73B  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0044C73E  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0044C741  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044C747  E8 A4 10 2E 00            CALL 0x0072d7f0
0044C74C  8B F0                     MOV ESI,EAX
0044C74E  83 C4 08                  ADD ESP,0x8
0044C751  3B F7                     CMP ESI,EDI
0044C753  0F 85 B3 03 00 00         JNZ 0x0044cb0c
0044C759  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0044C75C  3B C7                     CMP EAX,EDI
0044C75E  0F 8E 76 03 00 00         JLE 0x0044cada
0044C764  83 F8 02                  CMP EAX,0x2
0044C767  0F 8E 29 01 00 00         JLE 0x0044c896
0044C76D  83 F8 03                  CMP EAX,0x3
0044C770  0F 85 64 03 00 00         JNZ 0x0044cada
0044C776  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0044C779  8D 45 FC                  LEA EAX,[EBP + -0x4]
0044C77C  8D 4D F8                  LEA ECX,[EBP + -0x8]
0044C77F  50                        PUSH EAX
0044C780  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0044C783  51                        PUSH ECX
0044C784  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0044C787  52                        PUSH EDX
0044C788  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0044C78B  50                        PUSH EAX
0044C78C  51                        PUSH ECX
0044C78D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0044C793  52                        PUSH EDX
0044C794  E8 F7 E5 29 00            CALL 0x006ead90
0044C799  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0044C79C  75 1A                     JNZ 0x0044c7b8
0044C79E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0044C7A3  68 91 32 00 00            PUSH 0x3291
0044C7A8  68 04 60 7A 00            PUSH 0x7a6004
0044C7AD  50                        PUSH EAX
0044C7AE  68 09 00 FE AF            PUSH 0xaffe0009
0044C7B3  E8 88 96 25 00            CALL 0x006a5e40
LAB_0044c7b8:
0044C7B8  6A 01                     PUSH 0x1
0044C7BA  6A 02                     PUSH 0x2
0044C7BC  57                        PUSH EDI
0044C7BD  57                        PUSH EDI
0044C7BE  E8 CD 1A 26 00            CALL 0x006ae290
0044C7C3  8B F0                     MOV ESI,EAX
0044C7C5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044C7C8  33 DB                     XOR EBX,EBX
0044C7CA  3B C7                     CMP EAX,EDI
0044C7CC  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0044C7CF  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0044C7D2  7E 4E                     JLE 0x0044c822
LAB_0044c7d4:
0044C7D4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0044C7D7  8B 44 0F 04               MOV EAX,dword ptr [EDI + ECX*0x1 + 0x4]
0044C7DB  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0044C7DE  83 F9 14                  CMP ECX,0x14
0044C7E1  74 10                     JZ 0x0044c7f3
0044C7E3  81 F9 E7 03 00 00         CMP ECX,0x3e7
0044C7E9  76 26                     JBE 0x0044c811
0044C7EB  81 F9 E9 03 00 00         CMP ECX,0x3e9
0044C7F1  77 1E                     JA 0x0044c811
LAB_0044c7f3:
0044C7F3  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
0044C7F6  33 D2                     XOR EDX,EDX
0044C7F8  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0044C7FE  3B CA                     CMP ECX,EDX
0044C800  75 0F                     JNZ 0x0044c811
0044C802  83 C0 32                  ADD EAX,0x32
0044C805  50                        PUSH EAX
0044C806  56                        PUSH ESI
0044C807  E8 B4 19 26 00            CALL 0x006ae1c0
0044C80C  BB 01 00 00 00            MOV EBX,0x1
LAB_0044c811:
0044C811  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0044C814  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044C817  40                        INC EAX
0044C818  83 C7 14                  ADD EDI,0x14
0044C81B  3B C1                     CMP EAX,ECX
0044C81D  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0044C820  7C B2                     JL 0x0044c7d4
LAB_0044c822:
0044C822  8D 45 F8                  LEA EAX,[EBP + -0x8]
0044C825  50                        PUSH EAX
0044C826  E8 35 E8 25 00            CALL 0x006ab060
0044C82B  85 DB                     TEST EBX,EBX
0044C82D  75 1B                     JNZ 0x0044c84a
0044C82F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0044C835  68 A1 32 00 00            PUSH 0x32a1
0044C83A  68 04 60 7A 00            PUSH 0x7a6004
0044C83F  51                        PUSH ECX
0044C840  68 09 00 FE AF            PUSH 0xaffe0009
0044C845  E8 F6 95 25 00            CALL 0x006a5e40
LAB_0044c84a:
0044C84A  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0044C84D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0044C850  8D 44 00 03               LEA EAX,[EAX + EAX*0x1 + 0x3]
0044C854  50                        PUSH EAX
0044C855  89 02                     MOV dword ptr [EDX],EAX
0044C857  E8 14 E4 25 00            CALL 0x006aac70
0044C85C  8B D8                     MOV EBX,EAX
0044C85E  66 8B 46 0C               MOV AX,word ptr [ESI + 0xc]
0044C862  33 C9                     XOR ECX,ECX
0044C864  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0044C867  66 89 03                  MOV word ptr [EBX],AX
0044C86A  C6 43 02 03               MOV byte ptr [EBX + 0x2],0x3
0044C86E  66 8B 0B                  MOV CX,word ptr [EBX]
0044C871  8B 76 1C                  MOV ESI,dword ptr [ESI + 0x1c]
0044C874  D1 E1                     SHL ECX,0x1
LAB_0044c876:
0044C876  8B D1                     MOV EDX,ECX
0044C878  8D 7B 03                  LEA EDI,[EBX + 0x3]
0044C87B  C1 E9 02                  SHR ECX,0x2
0044C87E  F3 A5                     MOVSD.REP ES:EDI,ESI
0044C880  8B CA                     MOV ECX,EDX
0044C882  83 E1 03                  AND ECX,0x3
0044C885  F3 A4                     MOVSB.REP ES:EDI,ESI
0044C887  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0044C88A  33 FF                     XOR EDI,EDI
0044C88C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0044C891  E9 BE 02 00 00            JMP 0x0044cb54
LAB_0044c896:
0044C896  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0044C899  8D 45 FC                  LEA EAX,[EBP + -0x4]
0044C89C  8D 4D F8                  LEA ECX,[EBP + -0x8]
0044C89F  50                        PUSH EAX
0044C8A0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0044C8A3  51                        PUSH ECX
0044C8A4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0044C8A7  52                        PUSH EDX
0044C8A8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0044C8AB  50                        PUSH EAX
0044C8AC  51                        PUSH ECX
0044C8AD  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0044C8B3  52                        PUSH EDX
0044C8B4  E8 D7 E4 29 00            CALL 0x006ead90
0044C8B9  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0044C8BC  75 1A                     JNZ 0x0044c8d8
0044C8BE  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0044C8C3  68 68 32 00 00            PUSH 0x3268
0044C8C8  68 04 60 7A 00            PUSH 0x7a6004
0044C8CD  50                        PUSH EAX
0044C8CE  68 09 00 FE AF            PUSH 0xaffe0009
0044C8D3  E8 68 95 25 00            CALL 0x006a5e40
LAB_0044c8d8:
0044C8D8  6A 01                     PUSH 0x1
0044C8DA  6A 04                     PUSH 0x4
0044C8DC  57                        PUSH EDI
0044C8DD  57                        PUSH EDI
0044C8DE  E8 AD 19 26 00            CALL 0x006ae290
0044C8E3  8B F8                     MOV EDI,EAX
0044C8E5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044C8E8  33 DB                     XOR EBX,EBX
0044C8EA  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0044C8ED  3B C3                     CMP EAX,EBX
0044C8EF  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0044C8F2  0F 8E 84 01 00 00         JLE 0x0044ca7c
0044C8F8  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
LAB_0044c8fb:
0044C8FB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0044C8FE  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0044C901  8B 74 0A 04               MOV ESI,dword ptr [EDX + ECX*0x1 + 0x4]
0044C905  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0044C90B  33 C9                     XOR ECX,ECX
0044C90D  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0044C910  8A CA                     MOV CL,DL
0044C912  3B C1                     CMP EAX,ECX
0044C914  0F 84 47 01 00 00         JZ 0x0044ca61
0044C91A  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0044C91D  3D AE 01 00 00            CMP EAX,0x1ae
0044C922  77 12                     JA 0x0044c936
0044C924  74 0A                     JZ 0x0044c930
0044C926  83 F8 14                  CMP EAX,0x14
0044C929  74 21                     JZ 0x0044c94c
0044C92B  E9 31 01 00 00            JMP 0x0044ca61
LAB_0044c930:
0044C930  C6 45 F5 03               MOV byte ptr [EBP + -0xb],0x3
0044C934  EB 1A                     JMP 0x0044c950
LAB_0044c936:
0044C936  3D E8 03 00 00            CMP EAX,0x3e8
0044C93B  0F 82 20 01 00 00         JC 0x0044ca61
0044C941  3D E9 03 00 00            CMP EAX,0x3e9
0044C946  0F 87 15 01 00 00         JA 0x0044ca61
LAB_0044c94c:
0044C94C  C6 45 F5 01               MOV byte ptr [EBP + -0xb],0x1
LAB_0044c950:
0044C950  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0044C953  83 F8 08                  CMP EAX,0x8
0044C956  0F 83 05 01 00 00         JNC 0x0044ca61
0044C95C  83 3D 38 2A 80 00 00      CMP dword ptr [0x00802a38],0x0
0044C963  74 11                     JZ 0x0044c976
0044C965  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0044C968  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0044C970  0F 83 EB 00 00 00         JNC 0x0044ca61
LAB_0044c976:
0044C976  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0044C979  80 3D 8F 8A 80 00 00      CMP byte ptr [0x00808a8f],0x0
0044C980  88 45 E0                  MOV byte ptr [EBP + -0x20],AL
0044C983  74 25                     JZ 0x0044c9aa
0044C985  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0044C988  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0044C98B  25 FF 00 00 00            AND EAX,0xff
0044C990  33 D2                     XOR EDX,EDX
0044C992  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0044C999  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0044C99C  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0044C9A3  0F 95 C2                  SETNZ DL
0044C9A6  8B C2                     MOV EAX,EDX
0044C9A8  EB 71                     JMP 0x0044ca1b
LAB_0044c9aa:
0044C9AA  3A C2                     CMP AL,DL
0044C9AC  74 62                     JZ 0x0044ca10
0044C9AE  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0044C9B1  25 FF 00 00 00            AND EAX,0xff
0044C9B6  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0044C9BD  84 D2                     TEST DL,DL
0044C9BF  75 10                     JNZ 0x0044c9d1
0044C9C1  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0044C9C8  75 07                     JNZ 0x0044c9d1
0044C9CA  B8 FE FF FF FF            MOV EAX,0xfffffffe
0044C9CF  EB 41                     JMP 0x0044ca12
LAB_0044c9d1:
0044C9D1  80 FA 01                  CMP DL,0x1
0044C9D4  75 0F                     JNZ 0x0044c9e5
0044C9D6  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0044C9DE  75 05                     JNZ 0x0044c9e5
0044C9E0  83 C8 FF                  OR EAX,0xffffffff
0044C9E3  EB 2D                     JMP 0x0044ca12
LAB_0044c9e5:
0044C9E5  84 D2                     TEST DL,DL
0044C9E7  75 11                     JNZ 0x0044c9fa
0044C9E9  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0044C9F1  75 07                     JNZ 0x0044c9fa
0044C9F3  B8 01 00 00 00            MOV EAX,0x1
0044C9F8  EB 18                     JMP 0x0044ca12
LAB_0044c9fa:
0044C9FA  80 FA 01                  CMP DL,0x1
0044C9FD  75 11                     JNZ 0x0044ca10
0044C9FF  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0044CA07  75 07                     JNZ 0x0044ca10
0044CA09  B8 02 00 00 00            MOV EAX,0x2
0044CA0E  EB 02                     JMP 0x0044ca12
LAB_0044ca10:
0044CA10  33 C0                     XOR EAX,EAX
LAB_0044ca12:
0044CA12  33 C9                     XOR ECX,ECX
0044CA14  85 C0                     TEST EAX,EAX
0044CA16  0F 9C C1                  SETL CL
0044CA19  8B C1                     MOV EAX,ECX
LAB_0044ca1b:
0044CA1B  85 C0                     TEST EAX,EAX
0044CA1D  74 42                     JZ 0x0044ca61
0044CA1F  8B 16                     MOV EDX,dword ptr [ESI]
0044CA21  8B CE                     MOV ECX,ESI
0044CA23  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0044CA29  85 C0                     TEST EAX,EAX
0044CA2B  74 34                     JZ 0x0044ca61
0044CA2D  8B 06                     MOV EAX,dword ptr [ESI]
0044CA2F  33 C9                     XOR ECX,ECX
0044CA31  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0044CA37  51                        PUSH ECX
0044CA38  8B CE                     MOV ECX,ESI
0044CA3A  FF 90 F4 00 00 00         CALL dword ptr [EAX + 0xf4]
0044CA40  85 C0                     TEST EAX,EAX
0044CA42  74 1D                     JZ 0x0044ca61
0044CA44  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
0044CA47  8D 4D F4                  LEA ECX,[EBP + -0xc]
0044CA4A  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
0044CA4D  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
0044CA51  51                        PUSH ECX
0044CA52  57                        PUSH EDI
0044CA53  66 89 45 F6               MOV word ptr [EBP + -0xa],AX
0044CA57  E8 64 17 26 00            CALL 0x006ae1c0
0044CA5C  BB 01 00 00 00            MOV EBX,0x1
LAB_0044ca61:
0044CA61  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0044CA64  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0044CA67  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044CA6A  40                        INC EAX
0044CA6B  83 C2 14                  ADD EDX,0x14
0044CA6E  3B C1                     CMP EAX,ECX
0044CA70  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0044CA73  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0044CA76  0F 8C 7F FE FF FF         JL 0x0044c8fb
LAB_0044ca7c:
0044CA7C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0044CA7F  52                        PUSH EDX
0044CA80  E8 0B 94 25 00            CALL 0x006a5e90
0044CA85  85 DB                     TEST EBX,EBX
0044CA87  75 1A                     JNZ 0x0044caa3
0044CA89  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0044CA8E  68 7D 32 00 00            PUSH 0x327d
0044CA93  68 04 60 7A 00            PUSH 0x7a6004
0044CA98  50                        PUSH EAX
0044CA99  68 09 00 FE AF            PUSH 0xaffe0009
0044CA9E  E8 9D 93 25 00            CALL 0x006a5e40
LAB_0044caa3:
0044CAA3  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0044CAA6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0044CAA9  8D 04 85 03 00 00 00      LEA EAX,[EAX*0x4 + 0x3]
0044CAB0  50                        PUSH EAX
0044CAB1  89 01                     MOV dword ptr [ECX],EAX
0044CAB3  E8 B8 E1 25 00            CALL 0x006aac70
0044CAB8  66 8B 57 0C               MOV DX,word ptr [EDI + 0xc]
0044CABC  8B D8                     MOV EBX,EAX
0044CABE  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
0044CAC1  33 C9                     XOR ECX,ECX
0044CAC3  66 89 13                  MOV word ptr [EBX],DX
0044CAC6  88 43 02                  MOV byte ptr [EBX + 0x2],AL
0044CAC9  66 8B 0B                  MOV CX,word ptr [EBX]
0044CACC  8B 77 1C                  MOV ESI,dword ptr [EDI + 0x1c]
0044CACF  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0044CAD2  C1 E1 02                  SHL ECX,0x2
0044CAD5  E9 9C FD FF FF            JMP 0x0044c876
LAB_0044cada:
0044CADA  68 E8 8A 7A 00            PUSH 0x7a8ae8
0044CADF  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044CAE4  57                        PUSH EDI
0044CAE5  57                        PUSH EDI
0044CAE6  68 A9 32 00 00            PUSH 0x32a9
0044CAEB  68 04 60 7A 00            PUSH 0x7a6004
0044CAF0  E8 DB 09 26 00            CALL 0x006ad4d0
0044CAF5  83 C4 18                  ADD ESP,0x18
0044CAF8  85 C0                     TEST EAX,EAX
0044CAFA  74 01                     JZ 0x0044cafd
0044CAFC  CC                        INT3
LAB_0044cafd:
0044CAFD  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0044CB00  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0044CB03  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0044CB08  33 FF                     XOR EDI,EDI
0044CB0A  EB 48                     JMP 0x0044cb54
LAB_0044cb0c:
0044CB0C  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0044CB0F  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0044CB15  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044CB1B  74 34                     JZ 0x0044cb51
0044CB1D  68 C4 8A 7A 00            PUSH 0x7a8ac4
0044CB22  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044CB27  57                        PUSH EDI
0044CB28  57                        PUSH EDI
0044CB29  68 AD 32 00 00            PUSH 0x32ad
0044CB2E  68 04 60 7A 00            PUSH 0x7a6004
0044CB33  E8 98 09 26 00            CALL 0x006ad4d0
0044CB38  83 C4 18                  ADD ESP,0x18
0044CB3B  85 C0                     TEST EAX,EAX
0044CB3D  74 01                     JZ 0x0044cb40
0044CB3F  CC                        INT3
LAB_0044cb40:
0044CB40  68 AE 32 00 00            PUSH 0x32ae
0044CB45  68 04 60 7A 00            PUSH 0x7a6004
0044CB4A  57                        PUSH EDI
0044CB4B  56                        PUSH ESI
0044CB4C  E8 EF 92 25 00            CALL 0x006a5e40
LAB_0044cb51:
0044CB51  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_0044cb54:
0044CB54  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0044CB57  3B C7                     CMP EAX,EDI
0044CB59  74 06                     JZ 0x0044cb61
0044CB5B  50                        PUSH EAX
0044CB5C  E8 AF 15 26 00            CALL 0x006ae110
LAB_0044cb61:
0044CB61  5F                        POP EDI
0044CB62  8B C3                     MOV EAX,EBX
0044CB64  5E                        POP ESI
0044CB65  5B                        POP EBX
0044CB66  8B E5                     MOV ESP,EBP
0044CB68  5D                        POP EBP
0044CB69  C2 18 00                  RET 0x18
