# Final_Project_01
финальный проект по модулю "Основные конструкции"

Описание функционирования  программы/////////////////////////////////////////////////////////////////////////////////////////////

После запуска программы на консоль выводится сообщение "введите команду" (0 - помощь). 

При нажатии клавиши 0 - выводится помощь с описанием команд:
0 - помощь
1 - вывести данные текущего пользователя
2 - авторизоваться
3 - написать сообщение
8 - выйти из учётной записи
9 - выйти из программы
Имя пользователя должно состоять из одного слова

При нажатии клавиши 1 - выводится следующая информация:
- активный пользователь (если он есть)
- чаты активного пользователя - с кем уже велась переписка (имя состоит из имени активного пользователя и имени партнёра или наоборот - в зависимости кто первым начал переписку).  Чаты выводятся с порядковым номером, который был присвоен в общем списке чатов.
- Список всех зарегистрированных пользователей на данный момент


При нажатии клавиши 2:
-  выводится информация об активном пользователе и активном чате. По умолчанию, сразу, активен чат - общий.
- (если нет активного пользователя) предлагается ввести имя (логин).
- после ввода логина: 
	- если нет такого пользователя - предлагается зарегистрировать пользователя (клавиша Y - согласие,  любая другая клавиша - отказ), и ввести пароль. После ввода пароля - новый пользователь регистрируется и становится активным.
	- если пользователь уже есть - предлагается ввести пароль и после ввода пароля пользователь становится активным. В случае ввода неправильного пароля выводится соответствующее сообщение.
	- выводится информация с именем  активного пользователя

При нажатии клавиши 3:
- выводится информация об активном пользователе и имена всех зарегистрированных пользователей - для того, чтобы можно было выбрать пользователя для обмена сообщениями.
- предлагается выбрать пользователя для обмена сообщениями. Выбор осуществляется вводом номера, соответствующего номеру пользователя. Первый пользователь всегда "Общий". Общий - это чат, куда могут писать все пользователи, и все пользователи могут прочитать сообщения этого чата. После выбора пользователя для обмена сообщениями создаётся новый чат,  если он ещё не создан. Если чат существует - выводятся сообщения этого чата.
- Далее предлагается ввести своё сообщение.  Введённое сообщение дублируется на экран с меткой времени. Далее предлагается ввести новую команду.

При нажатии клавиши 8:
- происходит выход из текущего аккаунта. Выводится сообщение: "Вы вышли из учётной записи "номер" "имя""

При нажатии клавиши 9:
- происходит завершение выполнения программы

Известные проблемы///////////////////////////////////////////////////////////////////////////////////////////////////////////////
При выводе сообщений чата - распечатывается весь чат, а не только последние сообщения.
Имя пользователя должно состоять из одного слова, написанного слитно.


Описание архитектуры  программы/////////////////////////////////////////////////////////////////////////////////////////////
В основу работы программы заложен класс Array, разработанный в рамках прохождения обучения по модулю «Основные конструкции C++».
Классы Array_Ch (массив чатов), Array_M (массив сообщений), Array_U (массив пользователей) - являются классами наследниками класса Array. Они адаптируют функционал класса Array под использование с соответствующим типом данных.
Класс "Array", в свою очередь, является шаблоном класса для работы с разными типами данных структур и классов.
Класс "Chat" - организует хранение и обработку сообщений конкретного чата и содержит массив  сообщений (класс Array_M).
Класс "Message" - обеспечивает функционал и структуру хранения данных самого сообщения - время отправки, текст сообщения, имя отправителя.
Класс "User" - обеспечивает функционал и структуру хранения данных  пользователя - имя пользователя, логин, хранит указатели на все чаты пользователя.
Класс "MyException" - класс для обработки исключений.
Класс "Array_Ch" - используется для хранения указателей на все чаты (типа "Chat"). В проекте использован один общий массив для хранения указателей на все созданные чаты типа "Chat". Также в каждом пользователе типа "User" используется "Array_Ch"для хранения указателей на все чаты конкретного пользователя.
Класс "Array_U" - используется для хранения пользователей (типа "User"). В проекте использован один общий массив для хранения данных пользователей типа "User".
Kласс Array_M - используется для хранения сообщений типа "Message" в составе класса "Chat".


