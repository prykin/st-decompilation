FUN_004ebab0:
004EBAB0  55                        PUSH EBP
004EBAB1  8B EC                     MOV EBP,ESP
004EBAB3  53                        PUSH EBX
004EBAB4  56                        PUSH ESI
004EBAB5  57                        PUSH EDI
004EBAB6  8B F1                     MOV ESI,ECX
004EBAB8  E8 B3 99 F1 FF            CALL 0x00405470
004EBABD  85 C0                     TEST EAX,EAX
004EBABF  0F 84 64 01 00 00         JZ 0x004ebc29
004EBAC5  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
004EBACC  8B 8E B8 05 00 00         MOV ECX,dword ptr [ESI + 0x5b8]
004EBAD2  48                        DEC EAX
004EBAD3  3B C8                     CMP ECX,EAX
004EBAD5  0F 8D 4E 01 00 00         JGE 0x004ebc29
004EBADB  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004EBADE  8B C3                     MOV EAX,EBX
004EBAE0  2D DC 00 00 00            SUB EAX,0xdc
004EBAE5  0F 84 A4 00 00 00         JZ 0x004ebb8f
004EBAEB  48                        DEC EAX
004EBAEC  74 75                     JZ 0x004ebb63
004EBAEE  48                        DEC EAX
004EBAEF  0F 85 34 01 00 00         JNZ 0x004ebc29
004EBAF5  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004EBAF8  51                        PUSH ECX
004EBAF9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBAFF  E8 B3 8E F1 FF            CALL 0x004049b7
004EBB04  3C 03                     CMP AL,0x3
004EBB06  75 2F                     JNZ 0x004ebb37
004EBB08  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004EBB0B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBB11  52                        PUSH EDX
004EBB12  E8 53 63 F1 FF            CALL 0x00401e6a
004EBB17  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004EBB1A  3B C7                     CMP EAX,EDI
004EBB1C  0F 8C 07 01 00 00         JL 0x004ebc29
004EBB22  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004EBB25  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBB2B  57                        PUSH EDI
004EBB2C  50                        PUSH EAX
004EBB2D  E8 E2 7C F1 FF            CALL 0x00403814
004EBB32  E9 82 00 00 00            JMP 0x004ebbb9
LAB_004ebb37:
004EBB37  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004EBB3A  51                        PUSH ECX
004EBB3B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBB41  E8 3E 67 F1 FF            CALL 0x00402284
004EBB46  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004EBB49  3B C7                     CMP EAX,EDI
004EBB4B  0F 8C D8 00 00 00         JL 0x004ebc29
004EBB51  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004EBB54  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBB5A  57                        PUSH EDI
004EBB5B  52                        PUSH EDX
004EBB5C  E8 06 98 F1 FF            CALL 0x00405367
004EBB61  EB 56                     JMP 0x004ebbb9
LAB_004ebb63:
004EBB63  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004EBB66  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBB6C  50                        PUSH EAX
004EBB6D  E8 E2 7D F1 FF            CALL 0x00403954
004EBB72  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004EBB75  3B C7                     CMP EAX,EDI
004EBB77  0F 8C AC 00 00 00         JL 0x004ebc29
004EBB7D  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004EBB80  57                        PUSH EDI
004EBB81  51                        PUSH ECX
004EBB82  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBB88  E8 8B 78 F1 FF            CALL 0x00403418
004EBB8D  EB 2A                     JMP 0x004ebbb9
LAB_004ebb8f:
004EBB8F  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004EBB92  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBB98  52                        PUSH EDX
004EBB99  E8 42 5B F1 FF            CALL 0x004016e0
004EBB9E  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004EBBA1  3B C7                     CMP EAX,EDI
004EBBA3  0F 8C 80 00 00 00         JL 0x004ebc29
004EBBA9  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004EBBAC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBBB2  57                        PUSH EDI
004EBBB3  50                        PUSH EAX
004EBBB4  E8 AD 75 F1 FF            CALL 0x00403166
LAB_004ebbb9:
004EBBB9  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004EBBBC  51                        PUSH ECX
004EBBBD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBBC3  E8 2E 6D F1 FF            CALL 0x004028f6
004EBBC8  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
004EBBCB  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004EBBCE  33 C0                     XOR EAX,EAX
004EBBD0  8A 82 2D 11 00 00         MOV AL,byte ptr [EDX + 0x112d]
004EBBD6  3B C8                     CMP ECX,EAX
004EBBD8  75 0C                     JNZ 0x004ebbe6
004EBBDA  51                        PUSH ECX
004EBBDB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBBE1  E8 A7 8F F1 FF            CALL 0x00404b8d
LAB_004ebbe6:
004EBBE6  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004EBBE9  C7 86 D0 04 00 00 02 00 00 00  MOV dword ptr [ESI + 0x4d0],0x2
004EBBF3  89 9E DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EBX
004EBBF9  89 BE E0 04 00 00         MOV dword ptr [ESI + 0x4e0],EDI
004EBBFF  C7 86 EC 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4ec],0x0
004EBC09  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBC0F  52                        PUSH EDX
004EBC10  E8 A2 8D F1 FF            CALL 0x004049b7
004EBC15  25 FF 00 00 00            AND EAX,0xff
004EBC1A  6A 00                     PUSH 0x0
004EBC1C  8B CE                     MOV ECX,ESI
004EBC1E  89 86 0C 05 00 00         MOV dword ptr [ESI + 0x50c],EAX
004EBC24  E8 CE 70 F1 FF            CALL 0x00402cf7
LAB_004ebc29:
004EBC29  5F                        POP EDI
004EBC2A  5E                        POP ESI
004EBC2B  33 C0                     XOR EAX,EAX
004EBC2D  5B                        POP EBX
004EBC2E  5D                        POP EBP
004EBC2F  C2 08 00                  RET 0x8
