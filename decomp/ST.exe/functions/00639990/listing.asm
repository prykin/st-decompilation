FUN_00639990:
00639990  56                        PUSH ESI
00639991  8B F1                     MOV ESI,ECX
00639993  57                        PUSH EDI
00639994  8A 86 6F 02 00 00         MOV AL,byte ptr [ESI + 0x26f]
0063999A  3C 01                     CMP AL,0x1
0063999C  0F 86 0F 01 00 00         JBE 0x00639ab1
006399A2  3C 02                     CMP AL,0x2
006399A4  0F 85 C1 01 00 00         JNZ 0x00639b6b
006399AA  A1 74 67 80 00            MOV EAX,[0x00806774]
006399AF  6A 1D                     PUSH 0x1d
006399B1  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
006399B7  68 B0 1D 7D 00            PUSH 0x7d1db0
006399BC  50                        PUSH EAX
006399BD  6A 0D                     PUSH 0xd
006399BF  8B CF                     MOV ECX,EDI
006399C1  E8 BD A7 DC FF            CALL 0x00404183
006399C6  85 C0                     TEST EAX,EAX
006399C8  74 08                     JZ 0x006399d2
006399CA  5F                        POP EDI
006399CB  B8 FF FF 00 00            MOV EAX,0xffff
006399D0  5E                        POP ESI
006399D1  C3                        RET
LAB_006399d2:
006399D2  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
006399D8  6A 1D                     PUSH 0x1d
006399DA  68 A4 1D 7D 00            PUSH 0x7d1da4
006399DF  51                        PUSH ECX
006399E0  6A 0E                     PUSH 0xe
006399E2  8B CF                     MOV ECX,EDI
006399E4  E8 9A A7 DC FF            CALL 0x00404183
006399E9  85 C0                     TEST EAX,EAX
006399EB  74 08                     JZ 0x006399f5
006399ED  5F                        POP EDI
006399EE  B8 FF FF 00 00            MOV EAX,0xffff
006399F3  5E                        POP ESI
006399F4  C3                        RET
LAB_006399f5:
006399F5  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
006399FB  8B CF                     MOV ECX,EDI
006399FD  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00639A03  50                        PUSH EAX
00639A04  6A 0E                     PUSH 0xe
00639A06  E8 35 B8 DC FF            CALL 0x00405240
00639A0B  C6 86 A2 02 00 00 01      MOV byte ptr [ESI + 0x2a2],0x1
00639A12  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00639A18  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00639A1E  8B CF                     MOV ECX,EDI
00639A20  52                        PUSH EDX
00639A21  6A 0D                     PUSH 0xd
00639A23  E8 18 B8 DC FF            CALL 0x00405240
00639A28  8B 86 92 02 00 00         MOV EAX,dword ptr [ESI + 0x292]
00639A2E  C6 86 71 02 00 00 01      MOV byte ptr [ESI + 0x271],0x1
00639A35  85 C0                     TEST EAX,EAX
00639A37  74 0A                     JZ 0x00639a43
00639A39  50                        PUSH EAX
00639A3A  6A 0D                     PUSH 0xd
00639A3C  8B CF                     MOV ECX,EDI
00639A3E  E8 21 76 DC FF            CALL 0x00401064
LAB_00639a43:
00639A43  8B 86 92 02 00 00         MOV EAX,dword ptr [ESI + 0x292]
00639A49  85 C0                     TEST EAX,EAX
00639A4B  74 0A                     JZ 0x00639a57
00639A4D  50                        PUSH EAX
00639A4E  6A 0E                     PUSH 0xe
00639A50  8B CF                     MOV ECX,EDI
00639A52  E8 0D 76 DC FF            CALL 0x00401064
LAB_00639a57:
00639A57  66 8B 86 82 02 00 00      MOV AX,word ptr [ESI + 0x282]
00639A5E  66 8B 8E 7E 02 00 00      MOV CX,word ptr [ESI + 0x27e]
00639A65  66 8B 96 7A 02 00 00      MOV DX,word ptr [ESI + 0x27a]
00639A6C  50                        PUSH EAX
00639A6D  51                        PUSH ECX
00639A6E  52                        PUSH EDX
00639A6F  8B CE                     MOV ECX,ESI
00639A71  E8 91 96 DC FF            CALL 0x00403107
00639A76  A1 B8 32 80 00            MOV EAX,[0x008032b8]
00639A7B  6A 10                     PUSH 0x10
00639A7D  50                        PUSH EAX
00639A7E  8B CF                     MOV ECX,EDI
00639A80  E8 69 AA DC FF            CALL 0x004044ee
00639A85  6A 0E                     PUSH 0xe
00639A87  8B CF                     MOV ECX,EDI
00639A89  E8 A5 97 DC FF            CALL 0x00403233
00639A8E  6A 0D                     PUSH 0xd
00639A90  8B CF                     MOV ECX,EDI
00639A92  E8 15 88 DC FF            CALL 0x004022ac
00639A97  6A 0E                     PUSH 0xe
00639A99  8B CF                     MOV ECX,EDI
00639A9B  89 86 96 02 00 00         MOV dword ptr [ESI + 0x296],EAX
00639AA1  E8 06 88 DC FF            CALL 0x004022ac
00639AA6  89 86 9E 02 00 00         MOV dword ptr [ESI + 0x29e],EAX
00639AAC  E9 A8 00 00 00            JMP 0x00639b59
LAB_00639ab1:
00639AB1  A1 74 67 80 00            MOV EAX,[0x00806774]
00639AB6  6A 1D                     PUSH 0x1d
00639AB8  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
00639ABE  68 9C 1D 7D 00            PUSH 0x7d1d9c
00639AC3  50                        PUSH EAX
00639AC4  6A 0D                     PUSH 0xd
00639AC6  8B CF                     MOV ECX,EDI
00639AC8  E8 B6 A6 DC FF            CALL 0x00404183
00639ACD  85 C0                     TEST EAX,EAX
00639ACF  74 08                     JZ 0x00639ad9
00639AD1  5F                        POP EDI
00639AD2  B8 FF FF 00 00            MOV EAX,0xffff
00639AD7  5E                        POP ESI
00639AD8  C3                        RET
LAB_00639ad9:
00639AD9  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
00639ADF  6A 1D                     PUSH 0x1d
00639AE1  68 B8 1D 7D 00            PUSH 0x7d1db8
00639AE6  51                        PUSH ECX
00639AE7  6A 0F                     PUSH 0xf
00639AE9  8B CF                     MOV ECX,EDI
00639AEB  E8 93 A6 DC FF            CALL 0x00404183
00639AF0  85 C0                     TEST EAX,EAX
00639AF2  74 08                     JZ 0x00639afc
00639AF4  5F                        POP EDI
00639AF5  B8 FF FF 00 00            MOV EAX,0xffff
00639AFA  5E                        POP ESI
00639AFB  C3                        RET
LAB_00639afc:
00639AFC  6A 0F                     PUSH 0xf
00639AFE  8B CF                     MOV ECX,EDI
00639B00  E8 CF 87 DC FF            CALL 0x004022d4
00639B05  66 8B 96 82 02 00 00      MOV DX,word ptr [ESI + 0x282]
00639B0C  66 8B 86 7E 02 00 00      MOV AX,word ptr [ESI + 0x27e]
00639B13  66 8B 8E 7A 02 00 00      MOV CX,word ptr [ESI + 0x27a]
00639B1A  52                        PUSH EDX
00639B1B  50                        PUSH EAX
00639B1C  51                        PUSH ECX
00639B1D  8B CE                     MOV ECX,ESI
00639B1F  E8 E3 95 DC FF            CALL 0x00403107
00639B24  6A 0D                     PUSH 0xd
00639B26  8B CF                     MOV ECX,EDI
00639B28  E8 7F 87 DC FF            CALL 0x004022ac
00639B2D  6A 0D                     PUSH 0xd
00639B2F  8B CF                     MOV ECX,EDI
00639B31  89 86 96 02 00 00         MOV dword ptr [ESI + 0x296],EAX
00639B37  E8 9A A3 DC FF            CALL 0x00403ed6
00639B3C  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00639B42  8B CF                     MOV ECX,EDI
00639B44  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00639B4A  50                        PUSH EAX
00639B4B  6A 0D                     PUSH 0xd
00639B4D  E8 EE B6 DC FF            CALL 0x00405240
00639B52  C6 86 71 02 00 00 01      MOV byte ptr [ESI + 0x271],0x1
LAB_00639b59:
00639B59  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00639B5F  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00639B65  89 96 A7 02 00 00         MOV dword ptr [ESI + 0x2a7],EDX
LAB_00639b6b:
00639B6B  5F                        POP EDI
00639B6C  33 C0                     XOR EAX,EAX
00639B6E  5E                        POP ESI
00639B6F  C3                        RET
