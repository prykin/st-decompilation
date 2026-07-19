FUN_0052b330:
0052B330  56                        PUSH ESI
0052B331  8B F1                     MOV ESI,ECX
0052B333  33 C0                     XOR EAX,EAX
0052B335  57                        PUSH EDI
0052B336  8A 86 C7 0D 00 00         MOV AL,byte ptr [ESI + 0xdc7]
0052B33C  33 FF                     XOR EDI,EDI
0052B33E  48                        DEC EAX
0052B33F  B9 01 00 00 00            MOV ECX,0x1
0052B344  74 1A                     JZ 0x0052b360
0052B346  48                        DEC EAX
0052B347  75 12                     JNZ 0x0052b35b
0052B349  8B 86 C8 0D 00 00         MOV EAX,dword ptr [ESI + 0xdc8]
0052B34F  83 F8 14                  CMP EAX,0x14
0052B352  73 07                     JNC 0x0052b35b
0052B354  40                        INC EAX
0052B355  89 86 C8 0D 00 00         MOV dword ptr [ESI + 0xdc8],EAX
LAB_0052b35b:
0052B35B  8B C7                     MOV EAX,EDI
0052B35D  5F                        POP EDI
0052B35E  5E                        POP ESI
0052B35F  C3                        RET
LAB_0052b360:
0052B360  8B 86 C8 0D 00 00         MOV EAX,dword ptr [ESI + 0xdc8]
0052B366  B2 02                     MOV DL,0x2
0052B368  40                        INC EAX
0052B369  89 86 C8 0D 00 00         MOV dword ptr [ESI + 0xdc8],EAX
0052B36F  8A 86 CD 0D 00 00         MOV AL,byte ptr [ESI + 0xdcd]
0052B375  84 C0                     TEST AL,AL
0052B377  74 08                     JZ 0x0052b381
0052B379  3C 01                     CMP AL,0x1
0052B37B  0F 85 A0 00 00 00         JNZ 0x0052b421
LAB_0052b381:
0052B381  D9 86 D6 0D 00 00         FLD float ptr [ESI + 0xdd6]
0052B387  D8 9E CE 0D 00 00         FCOMP float ptr [ESI + 0xdce]
0052B38D  DF E0                     FNSTSW AX
0052B38F  F6 C4 40                  TEST AH,0x40
0052B392  0F 85 89 00 00 00         JNZ 0x0052b421
0052B398  D9 86 D6 0D 00 00         FLD float ptr [ESI + 0xdd6]
0052B39E  D8 86 DE 0D 00 00         FADD float ptr [ESI + 0xdde]
0052B3A4  33 C9                     XOR ECX,ECX
0052B3A6  D9 9E D6 0D 00 00         FSTP float ptr [ESI + 0xdd6]
0052B3AC  D9 86 E6 0D 00 00         FLD float ptr [ESI + 0xde6]
0052B3B2  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0052B3B8  DF E0                     FNSTSW AX
0052B3BA  F6 C4 40                  TEST AH,0x40
0052B3BD  75 12                     JNZ 0x0052b3d1
0052B3BF  D9 86 E6 0D 00 00         FLD float ptr [ESI + 0xde6]
0052B3C5  D8 86 DE 0D 00 00         FADD float ptr [ESI + 0xdde]
0052B3CB  D9 9E DE 0D 00 00         FSTP float ptr [ESI + 0xdde]
LAB_0052b3d1:
0052B3D1  D9 86 DE 0D 00 00         FLD float ptr [ESI + 0xdde]
0052B3D7  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0052B3DD  D9 86 D6 0D 00 00         FLD float ptr [ESI + 0xdd6]
0052B3E3  DF E0                     FNSTSW AX
0052B3E5  D8 9E CE 0D 00 00         FCOMP float ptr [ESI + 0xdce]
0052B3EB  F6 C4 41                  TEST AH,0x41
0052B3EE  DF E0                     FNSTSW AX
0052B3F0  75 13                     JNZ 0x0052b405
0052B3F2  F6 C4 41                  TEST AH,0x41
0052B3F5  75 2A                     JNZ 0x0052b421
0052B3F7  8B 86 CE 0D 00 00         MOV EAX,dword ptr [ESI + 0xdce]
0052B3FD  89 86 D6 0D 00 00         MOV dword ptr [ESI + 0xdd6],EAX
0052B403  EB 11                     JMP 0x0052b416
LAB_0052b405:
0052B405  F6 C4 01                  TEST AH,0x1
0052B408  74 17                     JZ 0x0052b421
0052B40A  8B 8E CE 0D 00 00         MOV ECX,dword ptr [ESI + 0xdce]
0052B410  89 8E D6 0D 00 00         MOV dword ptr [ESI + 0xdd6],ECX
LAB_0052b416:
0052B416  88 96 CD 0D 00 00         MOV byte ptr [ESI + 0xdcd],DL
0052B41C  B9 01 00 00 00            MOV ECX,0x1
LAB_0052b421:
0052B421  8A 86 CD 0D 00 00         MOV AL,byte ptr [ESI + 0xdcd]
0052B427  84 C0                     TEST AL,AL
0052B429  74 08                     JZ 0x0052b433
0052B42B  3A C2                     CMP AL,DL
0052B42D  0F 85 BB 00 00 00         JNZ 0x0052b4ee
LAB_0052b433:
0052B433  D9 86 DA 0D 00 00         FLD float ptr [ESI + 0xdda]
0052B439  D8 9E D2 0D 00 00         FCOMP float ptr [ESI + 0xdd2]
0052B43F  DF E0                     FNSTSW AX
0052B441  F6 C4 40                  TEST AH,0x40
0052B444  0F 85 A4 00 00 00         JNZ 0x0052b4ee
0052B44A  D9 86 DA 0D 00 00         FLD float ptr [ESI + 0xdda]
0052B450  D8 86 E2 0D 00 00         FADD float ptr [ESI + 0xde2]
0052B456  D9 9E DA 0D 00 00         FSTP float ptr [ESI + 0xdda]
0052B45C  D9 86 EA 0D 00 00         FLD float ptr [ESI + 0xdea]
0052B462  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0052B468  DF E0                     FNSTSW AX
0052B46A  F6 C4 40                  TEST AH,0x40
0052B46D  75 12                     JNZ 0x0052b481
0052B46F  D9 86 EA 0D 00 00         FLD float ptr [ESI + 0xdea]
0052B475  D8 86 E2 0D 00 00         FADD float ptr [ESI + 0xde2]
0052B47B  D9 9E E2 0D 00 00         FSTP float ptr [ESI + 0xde2]
LAB_0052b481:
0052B481  D9 86 E2 0D 00 00         FLD float ptr [ESI + 0xde2]
0052B487  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0052B48D  D9 86 DA 0D 00 00         FLD float ptr [ESI + 0xdda]
0052B493  DF E0                     FNSTSW AX
0052B495  D8 9E D2 0D 00 00         FCOMP float ptr [ESI + 0xdd2]
0052B49B  F6 C4 41                  TEST AH,0x41
0052B49E  DF E0                     FNSTSW AX
0052B4A0  75 17                     JNZ 0x0052b4b9
0052B4A2  F6 C4 41                  TEST AH,0x41
0052B4A5  0F 85 D6 00 00 00         JNZ 0x0052b581
0052B4AB  8B 86 D2 0D 00 00         MOV EAX,dword ptr [ESI + 0xdd2]
0052B4B1  89 86 DA 0D 00 00         MOV dword ptr [ESI + 0xdda],EAX
0052B4B7  EB 15                     JMP 0x0052b4ce
LAB_0052b4b9:
0052B4B9  F6 C4 01                  TEST AH,0x1
0052B4BC  0F 84 BF 00 00 00         JZ 0x0052b581
0052B4C2  8B 8E D2 0D 00 00         MOV ECX,dword ptr [ESI + 0xdd2]
0052B4C8  89 8E DA 0D 00 00         MOV dword ptr [ESI + 0xdda],ECX
LAB_0052b4ce:
0052B4CE  D9 86 D6 0D 00 00         FLD float ptr [ESI + 0xdd6]
0052B4D4  D8 9E CE 0D 00 00         FCOMP float ptr [ESI + 0xdce]
0052B4DA  C6 86 CD 0D 00 00 01      MOV byte ptr [ESI + 0xdcd],0x1
0052B4E1  DF E0                     FNSTSW AX
0052B4E3  F6 C4 40                  TEST AH,0x40
0052B4E6  0F 84 95 00 00 00         JZ 0x0052b581
0052B4EC  EB 08                     JMP 0x0052b4f6
LAB_0052b4ee:
0052B4EE  85 C9                     TEST ECX,ECX
0052B4F0  0F 84 8B 00 00 00         JZ 0x0052b581
LAB_0052b4f6:
0052B4F6  8B 86 B3 0D 00 00         MOV EAX,dword ptr [ESI + 0xdb3]
0052B4FC  88 96 C7 0D 00 00         MOV byte ptr [ESI + 0xdc7],DL
0052B502  85 C0                     TEST EAX,EAX
0052B504  74 0C                     JZ 0x0052b512
0052B506  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0052B50C  50                        PUSH EAX
0052B50D  E8 6E B0 1B 00            CALL 0x006e6580
LAB_0052b512:
0052B512  8B 96 DA 0D 00 00         MOV EDX,dword ptr [ESI + 0xdda]
0052B518  8B 8E D6 0D 00 00         MOV ECX,dword ptr [ESI + 0xdd6]
0052B51E  33 C0                     XOR EAX,EAX
0052B520  6A 01                     PUSH 0x1
0052B522  8A 86 CC 0D 00 00         MOV AL,byte ptr [ESI + 0xdcc]
0052B528  6A 05                     PUSH 0x5
0052B52A  6A 05                     PUSH 0x5
0052B52C  C7 86 B3 0D 00 00 00 00 00 00  MOV dword ptr [ESI + 0xdb3],0x0
0052B536  C7 86 C8 0D 00 00 00 00 00 00  MOV dword ptr [ESI + 0xdc8],0x0
0052B540  52                        PUSH EDX
0052B541  8B 94 86 C8 09 00 00      MOV EDX,dword ptr [ESI + EAX*0x4 + 0x9c8]
0052B548  51                        PUSH ECX
0052B549  0F BF 4A 23               MOVSX ECX,word ptr [EDX + 0x23]
0052B54D  8B 94 86 BF 0D 00 00      MOV EDX,dword ptr [ESI + EAX*0x4 + 0xdbf]
0052B554  51                        PUSH ECX
0052B555  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0052B55B  52                        PUSH EDX
0052B55C  E8 5F B0 1B 00            CALL 0x006e65c0
0052B561  8A 8E CC 0D 00 00         MOV CL,byte ptr [ESI + 0xdcc]
0052B567  33 C0                     XOR EAX,EAX
0052B569  84 C9                     TEST CL,CL
0052B56B  0F 95 C0                  SETNZ AL
0052B56E  05 B6 00 00 00            ADD EAX,0xb6
0052B573  50                        PUSH EAX
0052B574  E8 B6 A8 ED FF            CALL 0x00405e2f
0052B579  83 C4 04                  ADD ESP,0x4
0052B57C  8B C7                     MOV EAX,EDI
0052B57E  5F                        POP EDI
0052B57F  5E                        POP ESI
0052B580  C3                        RET
FUN_0052b330::cf_common_exit_0052B581:
0052B581  8B 86 B3 0D 00 00         MOV EAX,dword ptr [ESI + 0xdb3]
0052B587  85 C0                     TEST EAX,EAX
0052B589  0F 84 CC FD FF FF         JZ 0x0052b35b
0052B58F  8B 8E DA 0D 00 00         MOV ECX,dword ptr [ESI + 0xdda]
0052B595  8B 96 D6 0D 00 00         MOV EDX,dword ptr [ESI + 0xdd6]
0052B59B  6A FF                     PUSH -0x1
0052B59D  51                        PUSH ECX
0052B59E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0052B5A4  52                        PUSH EDX
0052B5A5  50                        PUSH EAX
0052B5A6  E8 95 AF 1B 00            CALL 0x006e6540
0052B5AB  5F                        POP EDI
0052B5AC  B8 01 00 00 00            MOV EAX,0x1
0052B5B1  5E                        POP ESI
0052B5B2  C3                        RET
