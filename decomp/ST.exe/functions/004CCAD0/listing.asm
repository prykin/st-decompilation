FUN_004ccad0:
004CCAD0  56                        PUSH ESI
004CCAD1  8B F1                     MOV ESI,ECX
004CCAD3  E8 9C 49 F3 FF            CALL 0x00401474
004CCAD8  8B 86 61 03 00 00         MOV EAX,dword ptr [ESI + 0x361]
004CCADE  85 C0                     TEST EAX,EAX
004CCAE0  74 09                     JZ 0x004ccaeb
004CCAE2  6A 00                     PUSH 0x0
004CCAE4  8B CE                     MOV ECX,ESI
004CCAE6  E8 43 49 F3 FF            CALL 0x0040142e
LAB_004ccaeb:
004CCAEB  8B 8E 65 02 00 00         MOV ECX,dword ptr [ESI + 0x265]
004CCAF1  83 E1 FD                  AND ECX,0xfffffffd
004CCAF4  89 8E 65 02 00 00         MOV dword ptr [ESI + 0x265],ECX
004CCAFA  C7 86 6D 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x26d],0x0
004CCB04  83 BE AC 05 00 00 50      CMP dword ptr [ESI + 0x5ac],0x50
004CCB0B  75 11                     JNZ 0x004ccb1e
004CCB0D  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004CCB10  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCB16  6A 28                     PUSH 0x28
004CCB18  50                        PUSH EAX
004CCB19  E8 12 51 F3 FF            CALL 0x00401c30
LAB_004ccb1e:
004CCB1E  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004CCB24  83 F8 6F                  CMP EAX,0x6f
004CCB27  74 05                     JZ 0x004ccb2e
004CCB29  83 F8 73                  CMP EAX,0x73
004CCB2C  75 07                     JNZ 0x004ccb35
LAB_004ccb2e:
004CCB2E  8B CE                     MOV ECX,ESI
004CCB30  E8 EE 49 F3 FF            CALL 0x00401523
LAB_004ccb35:
004CCB35  83 BE AC 05 00 00 36      CMP dword ptr [ESI + 0x5ac],0x36
004CCB3C  75 0E                     JNZ 0x004ccb4c
004CCB3E  8B 8E D0 04 00 00         MOV ECX,dword ptr [ESI + 0x4d0]
004CCB44  51                        PUSH ECX
004CCB45  8B CE                     MOV ECX,ESI
004CCB47  E8 2A 4C F3 FF            CALL 0x00401776
LAB_004ccb4c:
004CCB4C  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004CCB52  83 F8 3D                  CMP EAX,0x3d
004CCB55  74 05                     JZ 0x004ccb5c
004CCB57  83 F8 5D                  CMP EAX,0x5d
004CCB5A  75 4B                     JNZ 0x004ccba7
LAB_004ccb5c:
004CCB5C  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004CCB62  85 C0                     TEST EAX,EAX
004CCB64  74 1F                     JZ 0x004ccb85
004CCB66  8B 96 39 02 00 00         MOV EDX,dword ptr [ESI + 0x239]
004CCB6C  8B CE                     MOV ECX,ESI
004CCB6E  8B 04 95 BC 8F 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x798fbc]
004CCB75  50                        PUSH EAX
004CCB76  E8 C1 53 F3 FF            CALL 0x00401f3c
004CCB7B  C7 86 E0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4e0],0x0
LAB_004ccb85:
004CCB85  8B 86 E4 04 00 00         MOV EAX,dword ptr [ESI + 0x4e4]
004CCB8B  85 C0                     TEST EAX,EAX
004CCB8D  74 18                     JZ 0x004ccba7
004CCB8F  8B 0D C8 8F 79 00         MOV ECX,dword ptr [0x00798fc8]
004CCB95  51                        PUSH ECX
004CCB96  8B CE                     MOV ECX,ESI
004CCB98  E8 CF 55 F3 FF            CALL 0x0040216c
004CCB9D  C7 86 E4 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4e4],0x0
LAB_004ccba7:
004CCBA7  8B CE                     MOV ECX,ESI
004CCBA9  E8 E4 61 F3 FF            CALL 0x00402d92
004CCBAE  8B CE                     MOV ECX,ESI
004CCBB0  E8 4F 68 F3 FF            CALL 0x00403404
004CCBB5  68 FE 00 00 00            PUSH 0xfe
004CCBBA  8B CE                     MOV ECX,ESI
004CCBBC  E8 BB 54 F3 FF            CALL 0x0040207c
004CCBC1  5E                        POP ESI
004CCBC2  C3                        RET
