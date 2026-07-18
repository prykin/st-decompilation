FUN_00624000:
00624000  56                        PUSH ESI
00624001  8B F1                     MOV ESI,ECX
00624003  57                        PUSH EDI
00624004  6A 0E                     PUSH 0xe
00624006  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0062400C  8B CF                     MOV ECX,EDI
0062400E  E8 51 02 DE FF            CALL 0x00404264
00624013  8A 86 52 03 00 00         MOV AL,byte ptr [ESI + 0x352]
00624019  84 C0                     TEST AL,AL
0062401B  74 24                     JZ 0x00624041
0062401D  6A 0C                     PUSH 0xc
0062401F  8B CF                     MOV ECX,EDI
00624021  E8 3E 02 DE FF            CALL 0x00404264
00624026  8A 86 AD 02 00 00         MOV AL,byte ptr [ESI + 0x2ad]
0062402C  84 C0                     TEST AL,AL
0062402E  74 08                     JZ 0x00624038
00624030  3C 01                     CMP AL,0x1
00624032  74 04                     JZ 0x00624038
00624034  3C 02                     CMP AL,0x2
00624036  75 09                     JNZ 0x00624041
LAB_00624038:
00624038  6A 0C                     PUSH 0xc
0062403A  8B CF                     MOV ECX,EDI
0062403C  E8 23 02 DE FF            CALL 0x00404264
LAB_00624041:
00624041  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
00624047  33 C0                     XOR EAX,EAX
00624049  8A 86 AD 02 00 00         MOV AL,byte ptr [ESI + 0x2ad]
0062404F  6A 00                     PUSH 0x0
00624051  6A 00                     PUSH 0x0
00624053  6A 01                     PUSH 0x1
00624055  8B 0C 85 54 03 7D 00      MOV ECX,dword ptr [EAX*0x4 + 0x7d0354]
0062405C  6A 00                     PUSH 0x0
0062405E  6A FF                     PUSH -0x1
00624060  51                        PUSH ECX
00624061  6A 1D                     PUSH 0x1d
00624063  52                        PUSH EDX
00624064  E8 87 5A 0E 00            CALL 0x00709af0
00624069  33 C9                     XOR ECX,ECX
0062406B  C7 86 CE 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2ce],0x0
00624075  8B 00                     MOV EAX,dword ptr [EAX]
00624077  8A 8E AD 02 00 00         MOV CL,byte ptr [ESI + 0x2ad]
0062407D  6A 00                     PUSH 0x0
0062407F  6A 00                     PUSH 0x0
00624081  89 86 D2 02 00 00         MOV dword ptr [ESI + 0x2d2],EAX
00624087  8B 14 8D 74 03 7D 00      MOV EDX,dword ptr [ECX*0x4 + 0x7d0374]
0062408E  A1 64 67 80 00            MOV EAX,[0x00806764]
00624093  6A 01                     PUSH 0x1
00624095  6A 00                     PUSH 0x0
00624097  6A FF                     PUSH -0x1
00624099  52                        PUSH EDX
0062409A  6A 1D                     PUSH 0x1d
0062409C  50                        PUSH EAX
0062409D  E8 4E 5A 0E 00            CALL 0x00709af0
006240A2  83 C4 40                  ADD ESP,0x40
006240A5  33 D2                     XOR EDX,EDX
006240A7  8A 96 AD 02 00 00         MOV DL,byte ptr [ESI + 0x2ad]
006240AD  C7 86 DB 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2db],0x0
006240B7  8B 08                     MOV ECX,dword ptr [EAX]
006240B9  6A 00                     PUSH 0x0
006240BB  6A 00                     PUSH 0x0
006240BD  89 8E D7 02 00 00         MOV dword ptr [ESI + 0x2d7],ECX
006240C3  8B 04 95 64 03 7D 00      MOV EAX,dword ptr [EDX*0x4 + 0x7d0364]
006240CA  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
006240D0  6A 01                     PUSH 0x1
006240D2  6A 00                     PUSH 0x0
006240D4  6A FF                     PUSH -0x1
006240D6  50                        PUSH EAX
006240D7  6A 1D                     PUSH 0x1d
006240D9  51                        PUSH ECX
006240DA  E8 11 5A 0E 00            CALL 0x00709af0
006240DF  83 C4 20                  ADD ESP,0x20
006240E2  C7 86 E1 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2e1],0x0
006240EC  8B 10                     MOV EDX,dword ptr [EAX]
006240EE  89 96 E5 02 00 00         MOV dword ptr [ESI + 0x2e5],EDX
006240F4  5F                        POP EDI
006240F5  5E                        POP ESI
006240F6  C3                        RET
