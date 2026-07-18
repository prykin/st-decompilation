FUN_006b0520:
006B0520  55                        PUSH EBP
006B0521  8B EC                     MOV EBP,ESP
006B0523  53                        PUSH EBX
006B0524  56                        PUSH ESI
006B0525  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B0528  57                        PUSH EDI
006B0529  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
006B052C  83 F8 10                  CMP EAX,0x10
006B052F  0F 85 A6 00 00 00         JNZ 0x006b05db
006B0535  8B 86 C0 04 00 00         MOV EAX,dword ptr [ESI + 0x4c0]
006B053B  85 C0                     TEST EAX,EAX
006B053D  75 20                     JNZ 0x006b055f
006B053F  68 00 02 00 00            PUSH 0x200
006B0544  E8 87 FF FF FF            CALL 0x006b04d0
006B0549  85 C0                     TEST EAX,EAX
006B054B  89 86 C0 04 00 00         MOV dword ptr [ESI + 0x4c0],EAX
006B0551  75 0C                     JNZ 0x006b055f
006B0553  5F                        POP EDI
006B0554  5E                        POP ESI
006B0555  B8 FE FF FF FF            MOV EAX,0xfffffffe
006B055A  5B                        POP EBX
006B055B  5D                        POP EBP
006B055C  C2 10 00                  RET 0x10
LAB_006b055f:
006B055F  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B0562  85 C9                     TEST ECX,ECX
006B0564  0F 8E 20 01 00 00         JLE 0x006b068a
006B056A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B056D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B0570  03 C0                     ADD EAX,EAX
006B0572  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
006B0575  8D 7A 01                  LEA EDI,[EDX + 0x1]
LAB_006b0578:
006B0578  8B 8E D0 04 00 00         MOV ECX,dword ptr [ESI + 0x4d0]
006B057E  33 D2                     XOR EDX,EDX
006B0580  8A 77 FF                  MOV DH,byte ptr [EDI + -0x1]
006B0583  33 DB                     XOR EBX,EBX
006B0585  8A 7F 01                  MOV BH,byte ptr [EDI + 0x1]
006B0588  83 C0 02                  ADD EAX,0x2
006B058B  D3 FA                     SAR EDX,CL
006B058D  8B 8E D8 04 00 00         MOV ECX,dword ptr [ESI + 0x4d8]
006B0593  83 C7 04                  ADD EDI,0x4
006B0596  D3 FB                     SAR EBX,CL
006B0598  8B 8E D4 04 00 00         MOV ECX,dword ptr [ESI + 0x4d4]
006B059E  66 23 96 C4 04 00 00      AND DX,word ptr [ESI + 0x4c4]
006B05A5  66 23 9E CC 04 00 00      AND BX,word ptr [ESI + 0x4cc]
006B05AC  0B D3                     OR EDX,EBX
006B05AE  33 DB                     XOR EBX,EBX
006B05B0  8A 7F FC                  MOV BH,byte ptr [EDI + -0x4]
006B05B3  D3 FB                     SAR EBX,CL
006B05B5  8B 8E C0 04 00 00         MOV ECX,dword ptr [ESI + 0x4c0]
006B05BB  66 23 9E C8 04 00 00      AND BX,word ptr [ESI + 0x4c8]
006B05C2  0B D3                     OR EDX,EBX
006B05C4  66 89 54 08 FE            MOV word ptr [EAX + ECX*0x1 + -0x2],DX
006B05C9  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B05CC  49                        DEC ECX
006B05CD  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
006B05D0  75 A6                     JNZ 0x006b0578
006B05D2  5F                        POP EDI
006B05D3  5E                        POP ESI
006B05D4  33 C0                     XOR EAX,EAX
006B05D6  5B                        POP EBX
006B05D7  5D                        POP EBP
006B05D8  C2 10 00                  RET 0x10
LAB_006b05db:
006B05DB  0F 8E A9 00 00 00         JLE 0x006b068a
006B05E1  8B 86 C0 04 00 00         MOV EAX,dword ptr [ESI + 0x4c0]
006B05E7  85 C0                     TEST EAX,EAX
006B05E9  75 20                     JNZ 0x006b060b
006B05EB  68 00 04 00 00            PUSH 0x400
006B05F0  E8 DB FE FF FF            CALL 0x006b04d0
006B05F5  85 C0                     TEST EAX,EAX
006B05F7  89 86 C0 04 00 00         MOV dword ptr [ESI + 0x4c0],EAX
006B05FD  75 0C                     JNZ 0x006b060b
006B05FF  5F                        POP EDI
006B0600  5E                        POP ESI
006B0601  B8 FE FF FF FF            MOV EAX,0xfffffffe
006B0606  5B                        POP EBX
006B0607  5D                        POP EBP
006B0608  C2 10 00                  RET 0x10
LAB_006b060b:
006B060B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B060E  85 C9                     TEST ECX,ECX
006B0610  7E 78                     JLE 0x006b068a
006B0612  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B0615  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B0618  C1 E2 02                  SHL EDX,0x2
006B061B  40                        INC EAX
006B061C  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_006b061f:
006B061F  33 C9                     XOR ECX,ECX
006B0621  8B 9E C4 04 00 00         MOV EBX,dword ptr [ESI + 0x4c4]
006B0627  8A 48 FF                  MOV CL,byte ptr [EAX + -0x1]
006B062A  83 C0 04                  ADD EAX,0x4
006B062D  8B F9                     MOV EDI,ECX
006B062F  8B 8E D0 04 00 00         MOV ECX,dword ptr [ESI + 0x4d0]
006B0635  C1 E7 10                  SHL EDI,0x10
006B0638  D3 EF                     SHR EDI,CL
006B063A  33 C9                     XOR ECX,ECX
006B063C  83 C2 04                  ADD EDX,0x4
006B063F  8A 48 FD                  MOV CL,byte ptr [EAX + -0x3]
006B0642  23 FB                     AND EDI,EBX
006B0644  8B D9                     MOV EBX,ECX
006B0646  8B 8E D8 04 00 00         MOV ECX,dword ptr [ESI + 0x4d8]
006B064C  C1 E3 10                  SHL EBX,0x10
006B064F  D3 EB                     SHR EBX,CL
006B0651  8B 8E CC 04 00 00         MOV ECX,dword ptr [ESI + 0x4cc]
006B0657  23 D9                     AND EBX,ECX
006B0659  33 C9                     XOR ECX,ECX
006B065B  8A 48 FC                  MOV CL,byte ptr [EAX + -0x4]
006B065E  0B FB                     OR EDI,EBX
006B0660  8B D9                     MOV EBX,ECX
006B0662  8B 8E D4 04 00 00         MOV ECX,dword ptr [ESI + 0x4d4]
006B0668  C1 E3 10                  SHL EBX,0x10
006B066B  D3 EB                     SHR EBX,CL
006B066D  8B 8E C8 04 00 00         MOV ECX,dword ptr [ESI + 0x4c8]
006B0673  23 D9                     AND EBX,ECX
006B0675  8B 8E C0 04 00 00         MOV ECX,dword ptr [ESI + 0x4c0]
006B067B  0B FB                     OR EDI,EBX
006B067D  89 7C 0A FC               MOV dword ptr [EDX + ECX*0x1 + -0x4],EDI
006B0681  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B0684  49                        DEC ECX
006B0685  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
006B0688  75 95                     JNZ 0x006b061f
LAB_006b068a:
006B068A  5F                        POP EDI
006B068B  5E                        POP ESI
006B068C  33 C0                     XOR EAX,EAX
006B068E  5B                        POP EBX
006B068F  5D                        POP EBP
006B0690  C2 10 00                  RET 0x10
