FUN_004de820:
004DE820  55                        PUSH EBP
004DE821  8B EC                     MOV EBP,ESP
004DE823  83 EC 08                  SUB ESP,0x8
004DE826  53                        PUSH EBX
004DE827  56                        PUSH ESI
004DE828  57                        PUSH EDI
004DE829  8B F9                     MOV EDI,ECX
004DE82B  6A 0C                     PUSH 0xc
004DE82D  33 F6                     XOR ESI,ESI
004DE82F  8D 8F D5 01 00 00         LEA ECX,[EDI + 0x1d5]
004DE835  E8 75 5A F2 FF            CALL 0x004042af
004DE83A  8B 8F F5 01 00 00         MOV ECX,dword ptr [EDI + 0x1f5]
004DE840  3B 81 C4 01 00 00         CMP EAX,dword ptr [ECX + 0x1c4]
004DE846  0F 85 75 01 00 00         JNZ 0x004de9c1
004DE84C  8B 17                     MOV EDX,dword ptr [EDI]
004DE84E  68 73 02 00 00            PUSH 0x273
004DE853  6A 03                     PUSH 0x3
004DE855  8B CF                     MOV ECX,EDI
004DE857  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004DE85D  66 8B 47 30               MOV AX,word ptr [EDI + 0x30]
004DE861  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
004DE864  50                        PUSH EAX
004DE865  51                        PUSH ECX
004DE866  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DE86C  33 DB                     XOR EBX,EBX
004DE86E  E8 86 74 F2 FF            CALL 0x00405cf9
004DE873  85 C0                     TEST EAX,EAX
004DE875  0F 84 0B 01 00 00         JZ 0x004de986
004DE87B  8B C8                     MOV ECX,EAX
004DE87D  E8 33 45 F2 FF            CALL 0x00402db5
004DE882  8B F0                     MOV ESI,EAX
004DE884  85 F6                     TEST ESI,ESI
004DE886  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
004DE889  0F 84 F7 00 00 00         JZ 0x004de986
004DE88F  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004DE892  85 C0                     TEST EAX,EAX
004DE894  0F 84 EC 00 00 00         JZ 0x004de986
004DE89A  8D 55 FC                  LEA EDX,[EBP + -0x4]
004DE89D  8B CE                     MOV ECX,ESI
004DE89F  89 5E 04                  MOV dword ptr [ESI + 0x4],EBX
004DE8A2  E8 E9 28 1D 00            CALL 0x006b1190
004DE8A7  85 C0                     TEST EAX,EAX
004DE8A9  0F 8C CD 00 00 00         JL 0x004de97c
LAB_004de8af:
004DE8AF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004DE8B2  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
004DE8B5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DE8BB  6A 01                     PUSH 0x1
004DE8BD  52                        PUSH EDX
004DE8BE  50                        PUSH EAX
004DE8BF  E8 F6 3F F2 FF            CALL 0x004028ba
004DE8C4  8B F0                     MOV ESI,EAX
004DE8C6  85 F6                     TEST ESI,ESI
004DE8C8  0F 84 98 00 00 00         JZ 0x004de966
004DE8CE  8B 16                     MOV EDX,dword ptr [ESI]
004DE8D0  8B CE                     MOV ECX,ESI
004DE8D2  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DE8D5  83 F8 45                  CMP EAX,0x45
004DE8D8  0F 85 88 00 00 00         JNZ 0x004de966
004DE8DE  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004DE8E4  85 C0                     TEST EAX,EAX
004DE8E6  75 7E                     JNZ 0x004de966
004DE8E8  6A 01                     PUSH 0x1
004DE8EA  6A 01                     PUSH 0x1
004DE8EC  6A 01                     PUSH 0x1
004DE8EE  6A 00                     PUSH 0x0
004DE8F0  6A 03                     PUSH 0x3
004DE8F2  8B CE                     MOV ECX,ESI
004DE8F4  E8 D5 71 F2 FF            CALL 0x00405ace
004DE8F9  85 C0                     TEST EAX,EAX
004DE8FB  74 69                     JZ 0x004de966
004DE8FD  6A 01                     PUSH 0x1
004DE8FF  6A 00                     PUSH 0x0
004DE901  6A 03                     PUSH 0x3
004DE903  8B CE                     MOV ECX,ESI
004DE905  E8 33 3F F2 FF            CALL 0x0040283d
004DE90A  85 C0                     TEST EAX,EAX
004DE90C  74 58                     JZ 0x004de966
004DE90E  6A 01                     PUSH 0x1
004DE910  6A 01                     PUSH 0x1
004DE912  6A 01                     PUSH 0x1
004DE914  6A 00                     PUSH 0x0
004DE916  6A 03                     PUSH 0x3
004DE918  8B CE                     MOV ECX,ESI
004DE91A  E8 AF 71 F2 FF            CALL 0x00405ace
004DE91F  85 C0                     TEST EAX,EAX
004DE921  74 3E                     JZ 0x004de961
004DE923  6A 01                     PUSH 0x1
004DE925  6A 00                     PUSH 0x0
004DE927  6A 03                     PUSH 0x3
004DE929  8B CE                     MOV ECX,ESI
004DE92B  E8 0D 3F F2 FF            CALL 0x0040283d
004DE930  85 C0                     TEST EAX,EAX
004DE932  74 2D                     JZ 0x004de961
004DE934  6A 00                     PUSH 0x0
004DE936  68 FF 00 00 00            PUSH 0xff
004DE93B  6A 00                     PUSH 0x0
004DE93D  6A FF                     PUSH -0x1
004DE93F  6A 00                     PUSH 0x0
004DE941  6A 01                     PUSH 0x1
004DE943  6A 00                     PUSH 0x0
004DE945  6A 03                     PUSH 0x3
004DE947  8B CE                     MOV ECX,ESI
004DE949  E8 0B 6E F2 FF            CALL 0x00405759
004DE94E  6A 00                     PUSH 0x0
004DE950  8B CE                     MOV ECX,ESI
004DE952  C7 86 D0 04 00 00 02 00 00 00  MOV dword ptr [ESI + 0x4d0],0x2
004DE95C  E8 96 43 F2 FF            CALL 0x00402cf7
LAB_004de961:
004DE961  BB 01 00 00 00            MOV EBX,0x1
LAB_004de966:
004DE966  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004DE969  8D 55 FC                  LEA EDX,[EBP + -0x4]
004DE96C  E8 1F 28 1D 00            CALL 0x006b1190
004DE971  85 C0                     TEST EAX,EAX
004DE973  0F 8D 36 FF FF FF         JGE 0x004de8af
004DE979  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_004de97c:
004DE97C  56                        PUSH ESI
004DE97D  E8 8E F7 1C 00            CALL 0x006ae110
004DE982  85 DB                     TEST EBX,EBX
004DE984  75 2F                     JNZ 0x004de9b5
LAB_004de986:
004DE986  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
004DE989  8B 9F D0 04 00 00         MOV EBX,dword ptr [EDI + 0x4d0]
004DE98F  43                        INC EBX
004DE990  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DE993  89 9F D0 04 00 00         MOV dword ptr [EDI + 0x4d0],EBX
004DE999  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DE99C  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DE99F  C1 E1 04                  SHL ECX,0x4
004DE9A2  03 C8                     ADD ECX,EAX
004DE9A4  8D 04 4D F6 55 7F 00      LEA EAX,[ECX*0x2 + 0x7f55f6]
004DE9AB  8B 0C 4D F6 55 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f55f6]
004DE9B2  41                        INC ECX
004DE9B3  89 08                     MOV dword ptr [EAX],ECX
LAB_004de9b5:
004DE9B5  5F                        POP EDI
004DE9B6  5E                        POP ESI
004DE9B7  B8 01 00 00 00            MOV EAX,0x1
004DE9BC  5B                        POP EBX
004DE9BD  8B E5                     MOV ESP,EBP
004DE9BF  5D                        POP EBP
004DE9C0  C3                        RET
LAB_004de9c1:
004DE9C1  8B C6                     MOV EAX,ESI
004DE9C3  5F                        POP EDI
004DE9C4  5E                        POP ESI
004DE9C5  5B                        POP EBX
004DE9C6  8B E5                     MOV ESP,EBP
004DE9C8  5D                        POP EBP
004DE9C9  C3                        RET
