FUN_004b9920:
004B9920  56                        PUSH ESI
004B9921  8B F1                     MOV ESI,ECX
004B9923  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004B9929  83 F8 34                  CMP EAX,0x34
004B992C  0F 84 9B 00 00 00         JZ 0x004b99cd
004B9932  83 F8 5B                  CMP EAX,0x5b
004B9935  0F 84 92 00 00 00         JZ 0x004b99cd
004B993B  83 F8 48                  CMP EAX,0x48
004B993E  75 0A                     JNZ 0x004b994a
004B9940  E8 22 88 F4 FF            CALL 0x00402167
004B9945  E9 8A 00 00 00            JMP 0x004b99d4
LAB_004b994a:
004B994A  83 F8 64                  CMP EAX,0x64
004B994D  75 09                     JNZ 0x004b9958
004B994F  8B CE                     MOV ECX,ESI
004B9951  E8 55 C1 F4 FF            CALL 0x00405aab
004B9956  EB 7C                     JMP 0x004b99d4
LAB_004b9958:
004B9958  83 F8 62                  CMP EAX,0x62
004B995B  75 09                     JNZ 0x004b9966
004B995D  8B CE                     MOV ECX,ESI
004B995F  E8 EE 83 F4 FF            CALL 0x00401d52
004B9964  EB 6E                     JMP 0x004b99d4
LAB_004b9966:
004B9966  83 F8 6E                  CMP EAX,0x6e
004B9969  75 09                     JNZ 0x004b9974
004B996B  8B CE                     MOV ECX,ESI
004B996D  E8 44 B6 F4 FF            CALL 0x00404fb6
004B9972  EB 60                     JMP 0x004b99d4
LAB_004b9974:
004B9974  83 F8 4D                  CMP EAX,0x4d
004B9977  75 09                     JNZ 0x004b9982
004B9979  8B CE                     MOV ECX,ESI
004B997B  E8 22 AC F4 FF            CALL 0x004045a2
004B9980  EB 52                     JMP 0x004b99d4
LAB_004b9982:
004B9982  83 F8 43                  CMP EAX,0x43
004B9985  75 09                     JNZ 0x004b9990
004B9987  8B CE                     MOV ECX,ESI
004B9989  E8 41 98 F4 FF            CALL 0x004031cf
004B998E  EB 44                     JMP 0x004b99d4
LAB_004b9990:
004B9990  83 F8 73                  CMP EAX,0x73
004B9993  75 09                     JNZ 0x004b999e
004B9995  8B CE                     MOV ECX,ESI
004B9997  E8 2B 9B F4 FF            CALL 0x004034c7
004B999C  EB 36                     JMP 0x004b99d4
LAB_004b999e:
004B999E  83 F8 3A                  CMP EAX,0x3a
004B99A1  75 09                     JNZ 0x004b99ac
004B99A3  8B CE                     MOV ECX,ESI
004B99A5  E8 9B 7C F4 FF            CALL 0x00401645
004B99AA  EB 28                     JMP 0x004b99d4
LAB_004b99ac:
004B99AC  83 F8 65                  CMP EAX,0x65
004B99AF  75 09                     JNZ 0x004b99ba
004B99B1  8B CE                     MOV ECX,ESI
004B99B3  E8 0C 9E F4 FF            CALL 0x004037c4
004B99B8  EB 1A                     JMP 0x004b99d4
LAB_004b99ba:
004B99BA  83 F8 3B                  CMP EAX,0x3b
004B99BD  74 05                     JZ 0x004b99c4
004B99BF  83 F8 60                  CMP EAX,0x60
004B99C2  75 10                     JNZ 0x004b99d4
LAB_004b99c4:
004B99C4  8B CE                     MOV ECX,ESI
004B99C6  E8 23 79 F4 FF            CALL 0x004012ee
004B99CB  EB 07                     JMP 0x004b99d4
LAB_004b99cd:
004B99CD  8B CE                     MOV ECX,ESI
004B99CF  E8 DC 9D F4 FF            CALL 0x004037b0
LAB_004b99d4:
004B99D4  83 BE AC 05 00 00 5C      CMP dword ptr [ESI + 0x5ac],0x5c
004B99DB  75 1C                     JNZ 0x004b99f9
004B99DD  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004B99E0  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004B99E3  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004B99E6  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004B99E9  C1 E1 04                  SHL ECX,0x4
004B99EC  03 C8                     ADD ECX,EAX
004B99EE  C7 04 4D EA 57 7F 00 01 00 00 00  MOV dword ptr [ECX*0x2 + 0x7f57ea],0x1
LAB_004b99f9:
004B99F9  33 C0                     XOR EAX,EAX
004B99FB  5E                        POP ESI
004B99FC  C3                        RET
